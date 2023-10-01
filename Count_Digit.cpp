// Given a number N, the task is to return the count of digit in this number.
#includes<iostream>
using namespace std;

int countDigit(long long n)
{
	if(n==0)
		return 1;
	int count = 0;
	while(n != 0)
	{
		n = n/10;
		++count;
	}
	return count;
}

// Driver coder
int main()
{
	long long n = 345289467;
	cout<<"Number of digits :"<<countDigit(n);
	return 0;
}