balance = int(input("\t\t\t\tEnter the main Balnce: "+ "Rs."))
print("\n\t-----------------------------------------------------------------------------------------------------------------------")
n = int(input("\n\t\t\t\tEnter the number of Transection: "))
print("\n\t-----------------------------------------------------------------------------------------------------------------------")

for i in range(n):
    tras, amt = input("Enter D for deposit and W for Withdrawl along with amount for Transection: ").split()
    if tras =='W' and int(amt)>balance:
        print("Transection Failed!! Insufficient Balance")
    elif tras == 'W' or tras == 'w':
        balance = balance - int(amt)
    elif tras == 'D' or tras == 'd':
        balance = balance + int(amt)

print("\n\t-----------------------------------------------------------------------------------------------------------------------")
print("\n\t\t\t\tUpdated Balance is: ","Rs.",balance)
    
    



