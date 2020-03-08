#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long int n,a=1,b=2,c=4,i,d;
	cout<<"enter height=";
	cin>>n;
	if(n<=0)
		cout<<"0";
	if(n==1)
		cout<<a;
	if(n==2)
		cout<<b;
	if(n==3)
		cout<<c;
	for(i=1;i<=n-3;i++)
	{
		d=a+b+c;
		a=b;
		b=c;
		c=d;
	}
	cout<<d;
	getch();
}

