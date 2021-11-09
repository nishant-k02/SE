import numpy as np
#sum1 = 0 
list1 =  []
n = int(input("\t\t\t\tEnter number of Students: "))
print("\n\t\t----------Enter -1 if Student is absent for exam----------")
for i in range(n):
    l = list(map(int,input("\nEnter Marks of Students out off 50: ").split()))
   
    list1.append(l)
arr = np.array(list1)
#print(list1)
print("\n\t\t\t\tFDS test Report")
def average():
    sum1 = 0 
    for i in range(0, len(arr)): 
        sum1 = sum1+arr[i]
        total = 50*n
    #print("Sum = "+str(*sum1),"/",total)
    avg = sum1/len(arr)
    print("\nThe average score of class  = ",*avg)
    
def highest():
    max1 = 0 
    for i in range(0, len(arr)):
        if arr[i]>max1:
            max1 = arr[i]
    print("Highest Score Score of Class= ",*max1)
    
def lowest():
    min1 = arr[0]
    for i in range(0, len(arr)):    
        if(arr[i] < min1 and arr[i]!=-1):    
            min1 = arr[i];  
    print("Lowest Score of Class = ",*min1)
    
def Frequency():
    max1 = 0
    for i in list1:
        freq = list1.count(i)
        if freq > max1:
            max1 = freq
            res = i
    print("Marks with highest Frequency is: " +str(*res))
    
def absent(arr):
  absent=0
  for i in range(len(arr)):
  	 if arr[i]== -1:
  	  absent=absent+1
  print("Number of student absent for FDS test:",absent,"/",n)
            
# Calling Function.

average()
highest()
lowest()
absent(arr)
Frequency()






