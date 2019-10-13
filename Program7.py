def func(j): 
    count = 0
    for i in j: 
        if type(i) == type(i):
            count += 1
              
    return count 
j= [[1, 2, 3], [4, 5], 44, ['a'], 'b','c',[6, 7, 8, 9]] 
print("The number of lists in the given list is ")
print(func(j))

