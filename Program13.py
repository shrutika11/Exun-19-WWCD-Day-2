# Function to reverse order of vowels
# Complexity: M

def isVowel(c):
    if (c == 'a' or c == 'A' or c == 'e' or 
        c == 'E' or c == 'i' or c == 'I' or 
        c == 'o' or c == 'O' or c == 'u' or c == 'U'):
        return True
    return False

def reverserVowel(string):
    j = 0
    vowel = [0] * len(string)
    string = list(string)
  
    for i in range(len(string)):
        if isVowel(string[i]):
            j+=1
            vowel[j] = string[i]
  
    for i in range(len(string)):
        if isVowel(string[i]):
            string[i] = vowel[j]
	    j-=1
  
    return ''.join(string)

