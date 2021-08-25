#include<iostream>
#include<string.h>
using namespace std;
class SACHGK;
  class IDSACH
  {
  	protected:
  	    char tensach[30];
		  char masach[30];
    public:
	     void nhap();
		 void xuat();	
		 friend void hienthi_ten(SACHGK list[],int n);
  };
     void IDSACH::nhap()
     {
     	cout<<"\nNhap vao ten sach : ";
     	fflush(stdin);
     	gets(tensach);
     	cout<<"\nNhap vao ma sach :";
     	fflush(stdin);
     	gets(masach);
	 }
	 void IDSACH::xuat()
	 {
	 	cout<<"\nTen Sach :"<<tensach<<endl;
	 	cout<<"\nMa Sach :"<<masach<<endl;
	 }
	 class tacgia
	 {
	 	private:
	 		char tentg[30];
	 		char diachi_tg[30];
	    public:
	    	friend class SACHGK;
	 };
	 class BAN
	 {
	    	private:
	    		char tennxb[30];
	    		char diachi_nxb[30];
	    	public:
	    		friend class SACHGK;
	    		friend void hienthi_nxb(SACHGK list[],int n); 
	     };
  class  SACHGK : public IDSACH
  {
  	  private:
  	  	tacgia x;
  	  	BAN y;
  	public:
  		 void nhap();
  		 void xuat();
  		 friend void hienthi_nxb(SACHGK list[],int n); 
  };
     void SACHGK::nhap()
     {
     	IDSACH::nhap();
     	cout<<"\nNhap vao ten tac gia :";
     	fflush(stdin);
     	gets(x.tentg);
     	cout<<"\nNhap vao dia chi cua tac gia :";
     	fflush(stdin);
     	gets(x.diachi_tg);
     	cout<<"\nNhap vao ten nha xuat ban :";
     	fflush(stdin);
     	gets(y.tennxb);
     	cout<<"\nNhap vao dia chi nha xuat ban :";
     	fflush(stdin);
     	gets(y.diachi_nxb);
     	
	 }
	   void SACHGK::xuat()
	   {
	   	   IDSACH::xuat();
	   	   cout<<"\nTen Tac Gia :"<<x.tentg<<endl;
	   	   cout<<"\nDia Chi Cua Tac Gia :"<<x.diachi_tg<<endl;
	   	   cout<<"\nTen Nha Xuat Ban :"<<y.tennxb<<endl;
	   	   cout<<"\nDia Chi Nha Xuat Ban :"<<y.diachi_nxb<<endl;
	   }
	   void hienthi_nxb(SACHGK list[],int n)
	   {
	   	   for(int i=0;i<n;i++)
	   	   {
	   	   	   if(strcmp(list[i].y.tennxb,"Giao Duc")==0)
	   	   	   {
	   	   	   	   list[i].xuat();
					 }
			  }
	   }
	   void hienthi_ten(SACHGK list[],int n)
	   {
	   	  for(int i=0;i<n;i++)
	   	  {
	   	  	if(strcmp(list[i].tensach,"LTHDT") ==0)
	   	  	{
	   	  		list[i].xuat();
				 }
			 }
	   }
int main()
   {
   	  
   	  int n;
   	  cout<<"\nNhap vao so sach giao khoa :";
   	  cin>>n;
   	  SACHGK list[n];
   	  for(int i=0;i<n;i++)
   	  {
   	  	  cout<<"\n\n\t\tNhap Thong Tin Sach Gia Khoa Thu "<<i+1<<endl;
   	  	  cout<<endl;
   	  	  list[i].nhap();
		 }
		for(int i=0;i<n;i++)
		{
			cout<<"-----------------------------------"<<endl;
			cout<<"\n\n\t\tThong Tin Sach Giao Khoa Thu "<<i+1<<endl;
			list[i].xuat();
		}
		cout<<"\n\n\t\tThong Tin Cac Sach Giao Khoa Hien Thi Theo Ten Nha Xuat Ban La";
		hienthi_nxb(list,n);
			cout<<"\n\n\t\tThong Tin Cac Sach Giao Khoa Hien Thi Theo Ten Sach La ";
		hienthi_ten(list,n);
   	  return 0;
   }
