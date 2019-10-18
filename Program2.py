# Calculate sum of digits of a given number n
# Complexity: E

def sumOfDigits(int n): 
 	if n<9: 
 		return n
 	return n / 10 + sumOfDigits(n % 10) 
