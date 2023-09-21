#include<iostream>
using namespae std;

void printdivisers(int n)
{
	for(int i =1; i<=n;i++)
	{
		if(n%i ==0)
			cout<<i;
	}
}

void printDivisors(int n)
{
	for(int i=1; i*i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i;
			if(i!=n/i)
			cout<<n/i;
		}
	}
}

void printDivisors(int n)
{
	int i;
	for(i=1;i*i<n;i++)
		if(n%i==0)
			cout<<i;
	for(;i>=1;i--)
		if(n%i==0)
			cout<<(n/i);
}