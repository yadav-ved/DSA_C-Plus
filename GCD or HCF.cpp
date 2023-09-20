#include<iostream>
using namespae std;

int gcd(int a, int b)
{
	int res = min(a,b);
	while(res>0)
	{
		if(a%res==0 && b%res ==0)
		{
			breack;
		}
		res--;
	}
	return res;
}

int gcd_1(int a,int b)
{
	while(a != b)
	{
		if(a>b)
			a = a-b;
		else
			b = b-a;
	}
	return a;
}

int gcd_2(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
	cout<<gcd(7,10)<<endl
	cout<<gcd_1(3, 15)<<endl;
	cout<<gcd_2(10,15)<<endl;
	