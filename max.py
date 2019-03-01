
def maxTripletSum(arr, n) : 
  
  
    ans = 0
   
    for i in range(1, (n - 1)) : 
        max1 = 0
        max2 = 0
   
        for j in range(0, i) : 
            if (arr[j] < arr[i]) : 
                max1 = max(max1, arr[j]) 
   
        for j in range((i + 1), n) : 
            if (arr[j] > arr[i]) : 
                max2 = max(max2, arr[j]) 
   
        
        ans = max(ans, max1 + arr[i] + max2) 
   
    return ans 
  
  

  
arr = [ 2, 5, 3, 1, 4, 9 ] 
n = len(arr) 
print(maxTripletSum(arr, n)) 
  
