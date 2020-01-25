# number of increasing subsequences
a=list(map(int,input().split()))
l=len(a)
count=[]
for i in range(l):
    count.append(1)
i=l-2
while(i>=0):
    for j in range(i+1,l):
        if a[i]<a[j]:
            count[i]=count[i]+count[j]

    i=i-1;
s=sum(count)
print(count)
print(s)
