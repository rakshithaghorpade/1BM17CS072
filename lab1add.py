def bin(n,arr,k):
    start,end=0,len(arr)-1
    count=0
    last,first,mid=n,0,0
    while(start<=end):
        mid=int((start+end)/2)
        if arr[mid]==k:
            for i in range(mid,n):
                if arr[i]==k:
                    count=count+1
                    last=i
                else:
                    break
            for j in range(mid,-1,-1):
                if arr[j]==k:
                    count=count+1
                    first=j
                else:
                    break
            print(first," ",last," ",count-1)
            break
        elif k>arr[mid]:
            end=mid-1
        else:
            print("-1-10")

n=int(input('enter number'))
arr=list(map(int,input('enter element').split()))
k=int(input('enter key'))
bin(n,arr,k)
