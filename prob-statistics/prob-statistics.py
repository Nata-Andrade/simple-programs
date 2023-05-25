def sort(lst):
	for i in range(len(lst) - 1):
		for j in range(len(lst)):
			if lst[i] > lst[j]:
				lst[i] = lst[i] ^ lst[j]
				lst[j] = lst[i] ^ lst[j]
				lst[i] = lst[i] ^ lst[j]


op = input("""Insert a value related to the desired operation:
	Arithmetic Mean (0);
	Mode (1);
	Median (2);
	Std Deviation (3);
	Variance (4);
	Linear Correlation Coefficient (5);\n""")
#-------------------------------------------------------------------

#calculating mean
if op == 0:
	mean = 0
	
	n = input("How many values?:  ")
	print("Insert each value followed by \"newline\"")
	
	for i in range(n):
		mean += input()
	
	mean/=n
	print("\nThe mean is %s" %mean)
	quit()
#------------------------------------------------------------------

#calculating mode
if op == 1:
	
	n = input("How many values?:  ")
	lst = [None] * n
	
	print("Insert each value followed by \"newline\"")
	
	for i in range(n):
		lst[i] = input()
		
	sort(lst)	
	print(lst)
	quit()
#------------------------------------------------------------------

#calculating median
if op == 2:
	quit()
	
if op == 3:
	quit()
	
if op == 4:
	quit()
	
if op == 5:
	quit()
	
if op == 6:
	quit()
