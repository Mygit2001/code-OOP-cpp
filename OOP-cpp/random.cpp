#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
  int main()
  {
  	int n;
  	cout<<"nhap n: ";
  	cin>>n;
  	int *p;
  	p = new int[n];
//  	for(int i=0;i<n;i++)
//  	{
//  	cout<<"\nNhap phan tu thu : "<<i<<" ";
//  	cin>>*(p+i);
//     }
      srand((unsigned) time(NULL));
      for(int i=0;i<n;i++)
      {
      	*(p+i) = rand()%99 +1;
	  }
	    cout<<"\nMang tu random la: "<<endl;
	  for(int i=0;i<n;i++)
     {
     	cout<<*(p+i)<<"\t";
	 }
	 cout<<"\n";
     for(int i=0;i<n-1;i++)
     {
     	for(int j=i+1;j<n;j++)
     	{
     		if(*(p+i)>*(p+j))
     		{
     			swap(*(p+i),*(p+j));
			 }
		 }
	 }
     for(int i=0;i<n;i++)
     {
     	cout<<*(p+i)<<"\t";
	 }
     return 0;
  }
