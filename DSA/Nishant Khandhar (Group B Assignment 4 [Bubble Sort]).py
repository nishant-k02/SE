# Bubble Sort Python Program

list1 = []

n = int(input("\t\t\t\t\tEnter number of Students in Divison: "))
print("\nEnter Percentage of Students: \n")
for i in range(n):
    e = int(input())
    list1.append(e)

for i in range(0, len(list1) - 1):
    for j in range(len(list1) - 1):
        if list1[j] > list1[j + 1]:
            temp = list1[j]
            list1[j] = list1[j + 1]
            list1[j + 1] = temp
print("\nPercentage in Sorted way by Bubble Sort is: \n")
for i in range(len(list1)):
    print(list1[i])

list1.reverse()

print("\nTop 5 marks: ")
for i in list1[:5:]:
    print(i)

''' OUTPUT

                                            Enter number of Students in Divison: 10

Enter Percentage of Students: 

78
67
98
56
86
35
78
99
87
49

Percentage in Sorted way by Bubble Sort is: 

35
49
56
67
78
78
86
87
98
99

Top 5 marks: 
99
98
87
86
78

'''


