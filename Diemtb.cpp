#include <iostream>
using namespace std;
main()
{
	string ten;
	float toan,ly,hoa,tb;
	cout <<"Nhap ten ban: ";
	getline(cin,ten);
	cout <<"Nhap diem mon toan: ";
	cin >>toan;
	cout <<"Nhap diem mon ly: ";
	cin >>ly;
	cout <<"Nhap diem mon hoa: ";
	cin >>hoa;
	tb=(toan+ly+hoa)/3;
	if(tb>=8) cout <<"Ban la hs xuat sac, bot hoc lai nhe.";
	else if(tb>=7 && tb<8) cout <<"Ban la hs gioi.";
	     else if(tb>=6 && tb<7) cout <<"Ban la hs kha.";
	          else if(tb>=5 && tb<6) cout <<"Ban la hs trung binh, can co gang ban nhe.";
	               else cout <<"Can loi, ban la hs kem, nhung dung nan chi ban nhe.";
    cout <<"\nChuc "<<ten<<" mot ngay tot lanh.";
}
