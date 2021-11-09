            # Selection Sort Python Program

list1 = []
n = int(input("\t\t\t\t\tEnter number of Students in Divison: "))
print("\nEnter Percentage of Students: ")
for i in range(n):
    e = int(input())
    list1.append(e)
for i in range(len(list1)):
    min_index = i
    for j in range(i+1, len(list1)):
        if list1[min_index]>list1[j]:
            min_index = j 
    
    temp = list1[i]
    list1[i] = list1[min_index]
    list1[min_index] = temp

print("\nPercentage in Sorted way: \n")    
for i in range(len(list1)):
    print(list1[i])
    
 
 
''' OUTPUT

                                            Enter number of Students in Divison: 10

Enter Percentage of Students: 
90
85
69
87
65 
54
86
77
49
55

Percentage in Sorted way: 

49
54
55
65
69
77
85
86
87
90                                            

'''


