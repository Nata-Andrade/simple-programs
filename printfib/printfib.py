#
#
#
fib1 = 1
fib2 = 1

print("Please, insert a natural number so I can check if it belongs to the Fibonacci sequence:")
num = input()
num = int(num)
if num == 0:
    print("Your input ISN\'T part of the Fibonacci sequence")
    exit()

print()
print(1)
while num > fib1:
    print(fib1)
    temp = fib1
    fib1 += fib2
    fib2 = temp

if num == fib1:
    print(fib1)
    print("\nYour input IS part of the Fibonacci sequence, which was print above (up until that number)")
    
else: print("\nYour input ISN\'T part of the Fibonacci sequence, which was print above (up until that number)")