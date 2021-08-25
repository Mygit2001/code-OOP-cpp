#include<iostream>
using namespace std;
int main()
{
//	int b=10;
//	int *a = &b;
//	cout<<a<<endl;
//	cout<<*a<<endl;//b
//	b=15;
//	cout<<a<<endl;
//	cout<<*a<<endl;
    float *a;
    int n=5;
    a=new float[10];
    a=(float*)realloc(a,8*sizeof(float));
    //ten con tro =( kieu con tro) realloc(ten_con_tro,size)
	return 0;
}
