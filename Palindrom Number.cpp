#incclide<iostream>
using namespace std;

bool palindrom(int x)
{
	int rev = 0;
	int temp = x;
	while(temp!=0)
	{
		int a = x%10;
		rev = rev*10+a;
		temp = temp/10;
	}
	return (rev==x);
int main()
{
	palindrom(1234321);
}
		