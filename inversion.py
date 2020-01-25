#inversion count of a array
a=list(map(int,input().split()))
l=len(a)
c=0
for i in range(l):
    for j in range(i+1,l):
        if a[j]<a[i]:
            c=c+1
print(c)