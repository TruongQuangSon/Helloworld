#include <iostream>
#include <math.h>
using namespace  std;
main()
{
	int i,n;
	double s1=0,s2=0,s3=1,s4=0;
	cout <<"Nhap n: ";
	cin >>n;
	
	//s=1+1/2+1/3+1/4...
	for(i=1;i<=n;i++)
	{
		s1+=1.0/i;
	}
	cout <<"s1= "<<s1;
	
	//s=1+2+3...
	for(i=1;i<=n;i++)
	{
		s2+=i;
	}
	cout <<"\ns2= "<<s2;
	
	//s=1*2*3*4...
	for(i=1;i<=n;i++)
	{
		s3*=i;
	}
	cout <<"\ns3= "<<s3;
	//s=1^2+2^2+3^2...
	
	for(i=1;i<=n;i++)
	{
		s4+=pow(i,2);
	}
	cout <<"\ns4= "<<s4;
}
