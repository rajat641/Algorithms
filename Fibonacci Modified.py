a=map(int,raw_input().split())
k=[0]*23
k[1]=a[0]
k[2]=a[1]
for i in range(3,a[2]+1):
    k[i]= k[i-1]*k[i-1] +k[i-2]
    
print k[a[2]]
