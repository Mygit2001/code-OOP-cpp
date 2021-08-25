#include<iostream>
using namespace std;
  class date
  {
  	private:
  	   int ngay,thang,nam;
  	public:
  		void nhap();
  		void xuat();
   date()
   {
   	  ngay=thang=nam=0;
   }
      friend class sinhvien;
      friend void sapxep(date list[],int n);
  	   	
  };
  void date::nhap()
  {
  	  cout<<"\nNhap ngay: ";
  	  cin>>ngay;
  	cout<<"\nNhap thang: ";
  	  cin>>thang;
  	  cout<<"Nhap nam: ";
  	  cin>>nam;
  }
  void date::xuat()
  {
  	cout<<"NGAY SINH : "<<ngay<<"-"<<thang<<"-"<<nam<<endl;
  }
  	class sinhvien
  	{
  		private:
  			int tuoi;
  			date a;
  		public:
  			void nhap();
  			void xuat();
	  };
	  void sinhvien::nhap()
	  {
	  	cout<<"\nNhap tuoi: ";
	  	cin>>tuoi;
	  	 cout<<"\nNhap ngay: ";
  	  cin>>a.ngay;
  	cout<<"\nNhap thang: ";
  	  cin>>a.thang;
  	  cout<<"Nhap nam: ";
  	  cin>>a.nam;
	  }
	  void sinhvien::xuat()
	  {
	  	cout<<"\nTUOI :"<<tuoi<<endl;
	  	cout<<"NGAY SINH : "<<a.ngay<<"-"<<a.thang<<"-"<<a.nam<<endl;
	  }
	  void sapxep(date list[],int n)
	  {
	  	for(int i=0;i<n-1;i++)
	  	{
	  		for(int j=i+1;j<n;j++)
	  		{
	  			if(list[i].ngay<list[j].ngay)
	  			{
	  				date temp=list[i];
	  				list[i]=list[j];
	  				list[j]=temp;
				  }
			  }
		  }
	  }
  int main()
  {
      date list[3];
      for(int i=0;i<3;i++)
      {
      	cout<<"\nNhap doi tuong thu :"<<i+1<<endl;
      	list[i].nhap();
	  }
      for(int i=0;i<3;i++)
      {
      	cout<<"========================="<<endl;
      	cout<<"\nDoi tuong thu "<<i+1<<endl;
      	list[i].xuat();
	  }
	  cout<<"\nMang sau khi sap xep "<<endl;
	  sapxep(list,3);
	  for(int i=0;i<3;i++)
      {
      	cout<<"========================="<<endl;
      	cout<<"\nDoi tuong thu "<<i+1<<endl;
      	list[i].xuat();
	  }
  	return 0;
  }
