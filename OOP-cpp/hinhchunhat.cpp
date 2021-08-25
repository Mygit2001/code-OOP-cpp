#include<iostream>
  using namespace std;
  class hinhchunhat
  {
  	 private:
  	 	float cdai;
  	 	float crong;
  	 	float ccao;
  	public:
  	     float tinhV()
     {
     	return cdai*crong*ccao;
	 }
  		hinhchunhat()
  		{
  			cdai=crong=ccao=0;
  		  }
  		 hinhchunhat(float cdai,float crong,float ccao)
		   {
		   	   this->cdai=cdai;
		   	   this->crong=crong;
		   	   this->ccao=ccao;
			} 
		friend ostream &operator<<(ostream &os,hinhchunhat x);
		hinhchunhat operator+(int d);
  };
     float tinhV(float cdai,float crong,float ccao)
     {
     	return cdai*crong*ccao;
	 }
    ostream &operator<<(ostream &os,hinhchunhat x)
    {
        os<<x.tinhV();
        return os;
	}
	hinhchunhat hinhchunhat::operator+(int d)
	{
		hinhchunhat x;
		x.cdai = this->cdai+d;
		x.crong = this->crong+d;
		x.ccao = this->ccao+d;
		return x;
	}
  int main()
  {
  	hinhchunhat V= hinhchunhat(2,3,4);
  	hinhchunhat V2;
  	cout<<"\nThe tich la :"<<V;
  	float d;
  	cout<<"\nNhap Vao d: ";
  	cin>>d;
  	cout<<"\The tich sau la :";
  	V2=V+d;
  	cout<<V2;
  	return 0;
  }
