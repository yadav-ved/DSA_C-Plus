#include<iostrem>
using namespace std;

int Countdigit(int x)
{
	int res = 0;
	while(x>0)
	{
		x = x/10;
		res++;
	}
	return res;
}

int main()
{
	cout<<Countdigit(7)<<endl;
	
}