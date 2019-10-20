ini_str = "abc"
print(ini_str) 
result = [] 
def example(data, i, length): 
	if i == length: 
		result.append(''.join(data) ) 
	else: 
		for j in range(i, length): 
			data[i], data[j] = data[j], data[i] 
			example(data, i, length) 
			data[i], data[j] = data[j], data[i] 
example(list(ini_str), 0, len(ini_str)) 
print(str(result)) 
