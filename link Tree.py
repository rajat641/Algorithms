l,r,k=map(int, raw_input().split())
ans=1;
a=[]
a.append(1);
while(1):
    if ans>r:
        break
    else:
        ans*=k;
        a.append(ans);

k=[]
for i in a:
     if i>=l and i<=r:
            k.append(i)
if len(k)==0:
    print -1;
else:
    for i in k:
        print i