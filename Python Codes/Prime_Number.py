#  WAP to detect if a number is a prime number or not
# 
# 
# 
# 
# 
# 
# 
# 
# 
def primenumber(n):
    count = 0
    for x in range(1,n):
        if n % x == 0:
            count += 1
    
    if count == 1:
        print(f"{n} is a prime number")
    else:
        print(f"{n} isn't a prime number")
        
n=int(input("Enter a number to check if it is prime number or not\n\n"))
primenumber(n)
