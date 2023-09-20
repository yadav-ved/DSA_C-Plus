#include<iostream>
using namespae std;

int lcm(int a, int b)
{
	int res = max(a,b);
	while(true)
	{
		if(res%a ==0 && res%b ==0)
			return res;
		res++;
	}
	return res;
}

int gcd(int a, int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}


int lcm_1(int a, int b)
{
	return (a*b)/gcd(a,b);
}

int main()
{
	cout<<lcm(4,6)<<endl;
	cout<<lcm_1(4,6)<<endl;
	