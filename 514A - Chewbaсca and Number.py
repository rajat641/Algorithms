k= raw_input()
k=list(k)
#print len(k)
for i in range(0,len(k)):
    num= int(k[i])
    if(num>=5):
        num=9-num
    k[i]=str(num)
ans=k[0]
if (int(k[0])==0):
    ans=str(9)
for i in range(1,len(k)):
    ans=ans+k[i]
print ans

