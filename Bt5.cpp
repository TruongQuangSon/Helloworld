#include <iostream>
using namespace std;
main()
{
	int n,i,j;
	cout <<"Nhap so hang cua tam giac: ";
	cin >>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++) cout<<"*";
		cout<<"\n";
	}
	cout<<"\n";
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--) cout<<"*";
		cout<<"\n";
	}
}
