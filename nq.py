
  
def countDivisibles(A, B, M): 
      
    # Variable to store the counter 
    counter = 0; 
  
    for i in range(A, B): 
        if (i % M == 0): 
            counter = counter + 1
  
    return counter 
  

A = 30
B = 100
M = 30
  

print(countDivisibles(A, B, M)) 
  
