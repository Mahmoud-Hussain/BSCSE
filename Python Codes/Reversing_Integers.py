#WAP to print the reversed of a integer
#
#
#
#
#
#

number = int(input("Enter a digit\n"))
Rev_number = 0
while number != 0:
    digit = number % 10
    number = number // 10
    Rev_number = (Rev_number * 10) + digit
    
print("Reversed number:", Rev_number)
 
