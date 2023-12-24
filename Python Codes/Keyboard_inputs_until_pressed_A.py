#Write a program (WAP) that will run and show keyboard inputs until the user types an 'A' or 'a' at the keyboard.
#
#
#
#
#
#
#
Sample = input("Enter any key to print it\n")
count = 1
while Sample != 'A' and Sample != 'a':
    print(f"Input {count}: {Sample}\n\n")
    Sample = input("Enter any key to print it\n")
    count += 1
    