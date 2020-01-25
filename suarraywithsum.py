# fid a sua
a=list(map(int,input().split()))
s=int(input())
l=len(a)
c=0
indi=0
for i in range(l):
    if c==s:
        print("Start",indi)
        print("End",i-1)
        break
    else:
        if c+a[i]<=s:
            c=c+a[i]
        else:

            c=c+a[i]-a[indi]
            indi=indi+1