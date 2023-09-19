#include<iostream>
using namespace std;

int fact(int n)
{
	int res = 1;
	for(int i = 2; i<=n; i++)
		res = res+i;
	return res;
}

int fact_1(int n)
{
	if(n==0)
		return 1;
	return n*fact_1(n-1);
}

int main()
{
	cout<<fact(5)<<endl;
	cout<<fact_1(7);