def divisor(n):
    i=1
    while i<=n:
        if(n%i==0):
            print (i)
        i=i+1
n=int(input('enter number'))
divisor(n)
