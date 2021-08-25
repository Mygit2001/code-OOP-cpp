#include<iostream>
using namespace std;
class sophuc
{
   private:
     int thuc;
	 int ao;
   public:
   		 sophuc()
   		 {
   		 	thuc=5;
   		 	ao=3;
		 }
   	void xuat()
   {
       cout<<thuc<<","<<ao<<endl;
	}	
  friend void Conghaisophuc(sophuc a,sophuc b);//ham ban (friend) choi voi class nao thi co the nhin thay dc moi thanh vien trong class day
};
  void Conghaisophuc(sophuc a,sophuc b)
  {
  	sophuc c;
  	c.thuc = a.thuc + b.thuc;
  	c.ao = a.ao + b.ao;
  	c.xuat();
  }
int main()
{
	sophuc a,b,c;
	return 0;
}
