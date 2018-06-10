#include <iostream>
using namespace std;
main()
{
	int t;
	cout <<"Nhap thang: ";
	cin >>t;
	if (t<=0 && t>12) cout <<"Loi.";
	else if(t<=3) cout <<"Quy 1.";
	     else if(t<=6) cout <<"Quy 2.";
		      else if(t<=9) cout <<"Quy 3.";
		           else cout <<"Quy 4.";
}
