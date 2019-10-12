"""Given an array with n elements in which all elements appear twice except one which appears once. The following code finds the unique element. """


def findUnique( arr, n):
      
    res=0
        for i in range(1,n):
        res = res ^ arr[i]
      
    return res

