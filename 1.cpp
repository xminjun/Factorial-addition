#include <iostream>
using namespace std;

int main()
{
    int i,j,N;
    long int tmp,sum;
    cin >> N;
    if(N<=20)
    {
        sum = 0;
	for(i=1;i<=N;i++)
	{
	tmp = 1;
	for(j=i; j>=1; j--)
	{
	    tmp = tmp * j;
	}
	sum = sum + tmp;
	}
	cout << sum << endl;
        return 0;
    }
    else 
        return 0;
}
