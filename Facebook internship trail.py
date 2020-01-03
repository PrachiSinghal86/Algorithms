n=int(input())
m=[]
c=0
l=[]
for i in range(n):
    a=list(map(int,input().split()))
    m.append(a)
for i in range(n):
    for j in range(n):
        if m[i][j]==1 or m[i][j]==3:
            break
    if j==n:
        c=c+1
        l.append(i)
print(c)
for i in range(len(l)):
    print(l[i],end=" ")