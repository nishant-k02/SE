def partition(arr,low,high):
   i = ( low-1 )
   pivot = arr[high] 
   for j in range(low , high):
    
      if arr[j] <= pivot:
         
         i = i+1
         arr[i],arr[j] = arr[j],arr[i]
   arr[i+1],arr[high] = arr[high],arr[i+1]
   return ( i+1 )


def quickSort(arr,low,high):
   if low < high:
      
      pi = partition(arr,low,high)
      
      quickSort(arr, low, pi-1)
      quickSort(arr, pi+1, high)


arr = []
n = int(input("Enter no. of Students in Class: "))
print("\nEnter Percentage: ")
for i in range(n):
    e = int(input())
    arr.append(e)
    
quickSort(arr,0,n-1)
print ("\nSorted list of Percentage is:")
for i in range(n):
   print (arr[i])
   
arr.reverse()

print("\nTop Five Scores: ")
for i in range(0,5):
   print (arr[i])



''' OUTPUT

Enter no. of Students in Class: 10

Enter Percentage: 
89
87
67
95
66
78
56
88
54
69

Sorted list of Percentage is:
54
56
66
67
69
78
87
88
89
95

Top Five Scores: 
95
89
88
87
78

'''


   
