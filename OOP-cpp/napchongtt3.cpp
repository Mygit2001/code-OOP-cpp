#include<iostream>

using namespace std;
class PHANSO
{
   private:
     int tu,mau;
     
   public:
	    //>>:nhap , <<:xuat
	friend istream &operator>>(istream &is, PHANSO &x);
	friend ostream &operator<<(ostream &os, PHANSO x);

};
   istream &operator>>(istream &is, PHANSO &x)
   {
   	    cout<<"\nNhap Vao Tu So :";
   	    is>>x.tu;
   	    cout<<"\nNhap Vao Mau So :";
   	    is>>x.mau;
   	    return is;
   }
    ostream &operator<<(ostream &os, PHANSO x)
   {
   	    os<<x.tu<<"/"<<x.mau<<endl;
   	    return os;
   }
int main()
{
	PHANSO a;
	cin>>a;
	cout<<"\nPHAN SO VUA NHAP :";
	cout<<a;
	return 0;
}
