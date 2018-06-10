#include <iostream>
using namespace std;
//#define max 10
main()
{
	int t,i;
	char x;
	cout <<"Co phai nam nhuan hay khong, neu co bam phim c.";
	cin >>x;
	cout <<"\nNhap thang ban can xem: ";
	cin >>t;
	if(t==2)
	   {
	   	if(x=='c') cout <<"\nThang co 29 ngay.";
	   	else cout <<"\nThang co 28 ngay.";
	   }
	else 
	   if(t==2 || t==4 || t==6 || t==9 || t==11) cout <<"Thang co 30 ngay.";
	   else cout <<"Thang co 31 ngay.";
}
