#include<iostream>
  using namespace std;
  void nhap(float *x,float *e)
  {
       cout<<"Nhap so thuc x:";
       cin>>*x;
       do
         {
         	cout<<"Nhap sai so :";
         	cin>>*e;
         	if(*e>0.001)
         	cout<<"Vui long nhap lai sai so:"<<endl;
		 }while(*e>0.001);
  }
    float gthua(int k)
    {
    	if(k<=1)
    	return 1;
    	return k*gthua(k-1);
	}
	float luythua(float x,float n)
	{
		if(n==0) return 1;
    else
    {
        int i;
        float s=1;
        for(i=1;i<=n;i++)
            s*=x;
        return s;
    }
	}
	float tinhemux(float x,float e)
{
    int i=0;
    float s=0;
    while((luythua(x,i)/gthua(i))>e)
    {
        s+=luythua(x,i)/gthua(i);
        i++;
    }
    return s;
}
  int main()
  {
  float x,e;
    nhap(&x,&e);
    cout<<"e^"<<x<<" = "<<tinhemux(x,e)<<endl;
    cout<<"Sai so:"<<e;
    return 0;
  }
    
