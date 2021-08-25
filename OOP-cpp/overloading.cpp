#include<iostream>
using namespace std;
  int abs(int a)
  {
  	if(a<0)
  	return -a;
  	else
  	   return a;
  }
   float abs(float a)
  {
  	if(a<0)
  	return -a;
  	else
  	   return a;
  }
  int main()
  {
  	int a=6;
  	float b=-4.5;
  	char c='a';
  	cout<<"\nTri tuyet doi cua so nguyen a la: "<<abs(a)<<endl;
  	cout<<"\nTri tuyet doi cua so thuc b la: "<<abs(b);
 	cout<<"\nTri tuyet doi cua ki tu c la: "<<abs(c);

  	return 0;
  }
  
