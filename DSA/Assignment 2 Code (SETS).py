def allGroups():
    Cricket = []
    Badmintion = []
    Football = []
    list4 = []
    list5 = []
    list6 = []
    list7 = []
    list8 = []
    
    n = int(input("Enter number of students in Cricket Group: "))
    m = int(input("Enter number of students in Badmintion Group: "))
    o = int(input("Enter number of students in Football Group: "))
    
    print("\nEnter roll no of students in Cricket Group: ")
    for i in range(n):
        c = int(input())
        if c not in Cricket:
            Cricket.append(c)

    print("\nEnter roll no of students in Badmintion Group: ")    
    for i in range(m):
        b = int(input())
        if b not in Badmintion:
            Badmintion.append(b)
    
    print("\nEnter roll no of students in Football Group: ")
    for i in range(o):
        f = int(input())
        if f not in Football:
            Football.append(f)
        
    print("\n\t-----------------------------------------------------------------------------------------------------------------------")
    print("\n\t\t\t\t\t\t\tSports Club Details")
    print("\n\t-----------------------------------------------------------------------------------------------------------------------")
    
    for i in Cricket:
        if i in Badmintion:
            list4.append(i)
    print("\nList of Students who play both Cricket and Badmintion:",*list4)
    print("Number of Students who play both Cricket and Badmintion:",len(list4))
  
    for i in Cricket:
        list5.append(i)
    for i in Badmintion:
        list5.append(i)
    set1 = set(list5)                                   #used set to avoid Duplication of Value in finding Union
    
    print("\nList of Students who play either Cricket or Badmintion:",*set1)
    print("Number of Students who play either Cricket or Badmintion:",len(set1))
    
    for i in Football:
        if i not in Cricket and i not in Badmintion:
            list6.append(i)
    print("\nList of Students who neither play Cricket nor Badmintion:",*list6)
    print("Number of Students who neither play Cricket nor Badmintion but no Football:",len(list6))
    
    for i in Cricket:
        if i in Football and i not in Badmintion:
            list8.append(i)
    print("\nList of Students who play Cricket and Football but not Badmintion:",*list8)
    print("Number of Students who play Cricket and Football but not Badmintion:",len(list8))
   
allGroups()


''' OUTPUT

Enter number of students in Cricket Group: 5
Enter number of students in Badmintion Group: 5
Enter number of students in Football Group: 5

Enter roll no of students in Cricket Group:
12
13
14
15
16

Enter roll no of students in Badmintion Group:
14
15
16
17
18

Enter roll no of students in Football Group:
17
18
19
20
14

        -----------------------------------------------------------------------------------------------------------------------

                                                        Sports Club Details

        -----------------------------------------------------------------------------------------------------------------------

List of Students who play both Cricket and Badmintion: 14 15 16
Number of Students who play both Cricket and Badmintion: 3

List of Students who play either Cricket or Badmintion: 12 13 14 15 16 17 18
Number of Students who play either Cricket or Badmintion: 7

List of Students who neither play Cricket nor Badmintion: 19 20
Number of Students who neither play Cricket nor Badmintion but no Football: 2

List of Students who play Cricket and Football but not Badmintion:
Number of Students who play Cricket and Football but not Badmintion: 0

'''
