import numpy
n=int(input())
a=list(map(int,input().split()))
cz=a.count(0)
cn=0
p=1
for i in range(n):
    if a[i]<0:
        cn=cn+1
if cz==n or (cn==0 and cz>0):
    print(0)

elif cn%2!=0:
    for i in range(n):
        if a[i] != 0:
            p=p*a[i]
    print(p)
elif cn==0 and cz==0:
    m=min(a)
    print(m)

elif cn%2==0 and cz==0:
    m=10000

    for i in range(n):
        if a[i]<0:
            if -a[i]<m:
                m=a[i]

    p=numpy.prod(a)
    p=p/m
    print(p)
else:
    m = 10000

    for i in range(n):
        if a[i] < 0:
            if -a[i] < m:
                m = a[i]
    for i in range(n):
        if a[i]!=0:
            p=p*a[i]
    print(int(p/m))







