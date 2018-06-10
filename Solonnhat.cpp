#include <iostream>
using namespace std;
main()
{
	int a,b,c;
	cout <<"Nhap vao 3 so a, b, c: ";
	cin >>a>>b>>c;
	if(a==b && a==c) cout <<"a,b,c bang nhau.";
	else if(a>b)
	        {
	        	if(a>c) cout <<"a la so lon nhat.";
	        	else cout <<"c la so lon nhat.";
			}
		 else if(a<b)
		         {
		         	if(b>c) cout <<"b la so lon nhat.";
	        	    else cout <<"c la so lon nhat.";
				 }
			  else 
			     {
			     	if(c>a) cout <<"c la so lon nhat.";
			     	else cout <<"a vs b bang nhau va la so lon nhat.";
				 }
}
