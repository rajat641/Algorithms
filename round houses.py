import sys
sys.stdin=open("inp.txt","r")
#f = open('inp.txt', 'r')
n,a,b=map(int,raw_input().split())
if(b<0):
	st=0;
	ans=a;
	while st!=abs(b):
		if(ans==1):
			ans=n;
		else:
			ans=ans-1;
		st= st+1
	print ans;
else:
	st=0;
	while(st!=b):
		if(a==n):
			a=1;
		else: a=a+1;
		st=st+1
	print a;



