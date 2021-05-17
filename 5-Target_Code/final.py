import re

f = open("IntermediateCode.txt", 'r')
lines = f.readlines()
f.close()

fifo_return_reg = 'R0'

reg=[0]*13
var={} # {'a': 'R0', '1':'R0'}
store_seq=[]
fifo_reg = 0
operator_list = {'+':'ADD', '-':'SUB', '*':'MUL', '/':'DIV', '==':'E', '!=':'NE', '>':'G', '<':'L', '>=':'GE','<=':'LE','and':'AND','or':'OR'}

################################################################
def fifo():
	# print(" In FIFO Function", var)
	# print("\n\n Store seq", store_seq)
	global fifo_reg
	global fifo_return_reg
	for k,v in var.copy().items():
		if(v == 'R'+str(fifo_reg)):
			fifo_return_reg = v
			# print("K", k)
			# print("V", v)
			var.pop(k)
			if(k in store_seq):
				store_seq.remove(k)
				print("ST ", k, ', ', v, sep='')
	fifo_reg = int(fifo_return_reg[1:]) + 1
	# print("FIFO reg & v", fifo_reg, fifo_return_reg)
	return fifo_return_reg
###################################################################
def getreg():
    for i in range(0,13):
        if reg[i]==0:
            reg[i]=1
            return 'R'+str(i)
    register = fifo()
    # print("REGISTER" , register)
    return register
################################################################
for line in lines:
	line = line.strip()
	line = line.strip('\n')
	line = line.split()
	length = len(line)
	###############################################################
	#branch
	#L0: 
	if(length == 1):
		print(line[0])
	###############################################################
	# temporary variables
	# ignore statement 
	# re.findall('^t[0-9]+$')
	elif(re.findall('^t[0-9]+$', line[0])):
		continue
	###########################################################
	# goto
	#simple assignment
	#a = b
	#LD Rn, b
	elif(length == 3):
		lhs = line[0]
		operand = line[2]
		if operand not in var:
			var[operand] = getreg()
			if(operand.isalpha()):
				print("LD ", var[operand], ', ', operand, sep ='')
			else:
				print("MOV ", var[operand], ', #', operand, sep ='')
		#remove the old occurence and put new one -->
		if lhs in store_seq:
			old_reg = var[lhs]
			index = store_seq.index(lhs)
			store_seq.pop(index)
			var[lhs] = var[operand]
			if(old_reg not in var.values()):
				reg[int(old_reg[1:])] = 0
		else:
			var[lhs] = var[operand]
		store_seq.append(lhs)
    ###################################################    
	elif('goto' in line):
		# if x goto l
		if('if' in line):
			operand = line[1]
			label = line[3]
			if operand not in var:
				var[operand] = getreg()
				if(operand.isalpha()):
					print("LD ", var[operand], ', ', operand, sep ='')
				else:
					print("MOV ", var[operand], ', #', operand, sep ='')
			print("BNEZ ", var[operand], ', ', label, sep='')
		# goto l
		else:
			print("BR",line[1])
	###############################################################
	# assignment expressions
	# +, -, *, /, >, <, <=, >=, ==, !=, not, and, or
	#a = b + c
	else:
		if(len(line)==5):
			oper = line[3]
			operand1 = line[2]
			operand2 = line[4]
			lhs = line[0]
			if operand1 not in var:
				var[operand1] = getreg()
				if(operand1.isalpha()):
					print("LD ", var[operand1], ', ', operand1, sep ='')
				else:
					print("MOV ", var[operand1], ', #', operand1, sep ='')
			if operand2 not in var:
				var[operand2] = getreg()
				if(operand2.isalpha()):
					print("LD ", var[operand2], ', ', operand2, sep ='')
				else:
					print("MOV ", var[operand2], ', #', operand2, sep ='')
			operator_print = operator_list[oper]
			#remove the old occurence and put new one -->
			if lhs in store_seq:
				old_reg = var[lhs]
				index = store_seq.index(lhs)
				store_seq.pop(index)
				var[lhs] = getreg()
				reg[int(old_reg[1:])] = 0
			else:
				var[lhs] = getreg()
			store_seq.append(lhs)
			print(operator_print, ' ', var[lhs], ', ', var[operand1], ', ', var[operand2], sep='')
		else:
			operand = line[3]
			lhs = line[0]
			if operand not in var:
				var[operand] = getreg()
				if(operand.isalpha()):
					print("LD ", var[operand], ', ', operand, sep ='')
				else:
					print("MOV ", var[operand], ', #', operand, sep ='')
			if lhs in store_seq:
				old_reg = var[lhs]
				index = store_seq.index(lhs)
				store_seq.pop(index)
				var[lhs] = getreg()
				reg[int(old_reg[1:])] = 0
			else:
				var[lhs] = getreg()
			store_seq.append(lhs)
			print("NOT ", var[lhs], ', ', var[operand], sep='')


# store all variables
for i in store_seq:
	print("ST ", i, ', ', var[i], sep='')