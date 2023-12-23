# wap to find the fibonacci series



N = int(input("enter the nth term \n"))
n1 = 0 
n2 = 1
n3 = 0
for x in range(N):
    print(n3)
    n3 = n1 + n2
    n1 = n2
    n2 = n3
    
