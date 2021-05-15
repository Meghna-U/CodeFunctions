#include<iostream>
using namespace std;
int prime(int a);
int main()
{
	int x,i,y;
	cout<<"Enter a number:";
	cin>>x;
	for(i=2;i<=x/2;i++)
	{
		if(prime(i)==1)
		{
			if(prime(x-i)==1)
			{
				cout<<x<<"="<<i<<"+"<<x-i<<endl;
				y=1;
			}
		}
	}
	if(y!=1)
	{
		cout<<x<<" cannot be expresses as a sum of 2 prime numbers.";
	}
	return 0;
}
int prime(int p)
{
	int temp=1,i;
	for(i=2;i<=p/2;i++)
	{
		if(p%i==0)
		{
			temp=0;
			break;
		}
	}
	return temp;
}
