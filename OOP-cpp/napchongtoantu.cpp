#include<iostream>
using namespace std;
class PHANSO
{
   private:
      double tu;
	  double mau;
	public:
	  PHANSO()
	  {
	  	
	  }
	  PHANSO(double tu,double mau)
	  {
	  	  this->tu = tu;
	  	  this->mau = mau;
	  }	
	void nhap();
	void xuat()
	{
			cout<<tu<<"/"<<mau<<endl;

	}
	void toigian();
	PHANSO operator+(PHANSO x);
	PHANSO operator-(PHANSO y);
    PHANSO operator*(PHANSO z);
    PHANSO operator/(PHANSO t);
    
};
   PHANSO PHANSO::operator+(PHANSO x)
   {
   	 PHANSO tong;
   	 tong.tu = this->tu*x.mau + this->mau*x.tu;
   	 tong.mau = this->mau * x.mau;
   	 return tong;
   }

    PHANSO PHANSO::operator-(PHANSO y)
    {
    	PHANSO hieu;
    	hieu.tu =  this->tu * y.mau - this->mau * y.tu;
    	hieu.mau = this->mau * y.mau;
    	return hieu;
	}
	PHANSO PHANSO::operator*(PHANSO z)
	{
		PHANSO tich;
		tich.tu= this->tu *z.tu;
		tich.mau= this->mau * z.mau;
		return tich;
	}
	PHANSO PHANSO::operator/(PHANSO t)
	{
		PHANSO thuong;
		thuong.tu = this->tu *t.mau;
		thuong.mau = this->mau*t.tu;
		return thuong;
	}
	int UCLN(int x,int y)
	{
		if(x%y==0)
		return y;
		return UCLN(y,x%y);
	}
  void PHANSO::toigian()
  {
  	  int Uclnn=UCLN(tu,mau);
  	  tu/=Uclnn;
  	  mau/=Uclnn;
  }
int main()
{

   PHANSO a = PHANSO(1,2);
   a.toigian();
     PHANSO b = PHANSO(3,9);
     b.toigian();
     PHANSO c=a+b;
     PHANSO d= a-b;
     PHANSO e=a*b;
     PHANSO f = a/b;
      cout<<"\nPHAN SO a :";
      a.xuat();
      cout<<"\nPHAN SO b :";
      b.xuat();
      cout<<"\nPHAN SO TONG :";
      c.xuat();
      cout<<"\nPHAN SO HIEU :";
      d.xuat();
      cout<<"\nPHAN SO TICH :";
      e.xuat();
      cout<<"\nPHAN SO THUONG :";
      f.xuat();
      
	return 0;
}
