# Remove punctuation from the string

a= '''!()-[]{};:'"\,<>./?@#$%^&*_~'''
str = "Hello!!!, he said ---and went."
p= ""
for char in str:
   if char in a: 
       p = p+ char
print(p)

