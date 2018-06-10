#include <iostream>
using namespace std;
main()
{
	int a,b;
	cout << "Nhap a: ";
	cin >>a ;
	cout <<"Nhap b: ";
	cin >>b;
	if(a>b) cout << "a lon hon b" ;
	else
	{
		if(a<b) cout << "a nho hon b";
	    else cout << "a bang b";
	}
}
