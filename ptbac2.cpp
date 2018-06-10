#include <iostream>
#include <cmath>
using namespace std;

void ptbac1(int a,int b)
 {
	if(a!=0 && b==0) cout <<"Pt vo nghiem.";
	else {
	         if(a!=0 && b!=0) cout<< "Pt co 1 nghiem duy nhat x= " <<(float)-b/a;
	         if(a==0) cout<<"Pt vo nghiem. ";
	     }
 }
	
main()
{
	int a,b,c;
	char h;
	float denta;
	do 
	{
	cout <<"Nhap a,b,c: ";
	cin >>a>>b>>c;
	if(a==0) ptbac1(b,c);
	else
	{
	   denta=pow(b,2)-4*a*c;
	   if(denta>0) 
	   	       cout <<"PT co 2 nghiem: "<<(-b+sqrt(denta))/(2*a) <<"\t" <<(-b-sqrt(denta))/(2*a);
	   	else if(denta==0) cout <<"Pt co nghiem kep: "<< -b/(2*a);
		else cout <<"PT vo nghiem."	;
		cout <<"\n"<<"Ban co muon tiep tuc k, neu co nhan y.";
		cin >> h;
	}
	}while(h=='y');
}
	
