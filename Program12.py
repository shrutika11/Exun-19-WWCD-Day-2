# Complexity: E


def func(x):
   # This function takes a number and prints the factors
   print(<colon>The factors of<colon>+str(x)+<colon>are<colon>)
   for i in range(1, x):
       if x % i == 0:
           print(i)
num = input("Enter a number: ")
func(num)

