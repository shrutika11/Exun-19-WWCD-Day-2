# Binary to Decimal conversion

def function n: 
    int temp = n,value = 0, c = 1 
    while (temp): 
        int r = temp % 10  
        value += r * c 
        c *= 2 
    return value 


