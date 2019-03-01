
def findLargest( m, s) : 
  
    # If sum of digits is 0, 
    # then a nuber is possible 
    # only if number of digits 
    # is 1. 
    if (s == 0) : 
      
        if(m == 1) : 
            print("Largest number is " , "0",end = "")  
        else : 
            print("Not possible",end = "") 
      
        return
  
    if (s > 9 * m) : 
        print("Not possible",end = "") 
        return
      
    
    res = [0] * m 
  
    
    for i in range(0, m) : 
       
        if (s >= 9) : 
            res[i] = 9
            s = s - 9
          
        
        else : 
            res[i] = s 
            s = 0
          
          
    print( "Largest number is ",end = "") 
      
    for i in range(0, m) : 
        print(res[i],end = "") 
  

s = 9
m = 2
findLargest(m, s) 
