#include <iostream>
using namespace std;
main()
{
	int n,i,j;
	cout <<"Nhap n: ";
	cin >>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++) cout<<j<<" ";
		cout <<"\n";
	}
}
