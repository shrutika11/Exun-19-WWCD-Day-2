def func(x):
   # This function takes a number and prints the factors
   print("The factors of",x,"are:")
   for i in range(1, x):
       if x % i == 0:
           print(i)
num = input("Enter a number: ")
func(num)

