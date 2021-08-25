#include<iostream>
#include<string.h>
using namespace std;
/*
   de:  Cho 3 nguoi voi ba cong viec khac nhau: NHAN VIEN SUA ONG NUOC, NHAN VIEN GIAO HANG VA NHAN VIEN XE OM CONG NGHE
   -Hay phan tich va mo ta cac thong tin can thiet de quan ly ba nhan vien tren
   -Tinh tien luong hang thang cua ba nhan vien biet:
   ->NHAN VIEN SUA ONG NUOC: So gio *50000
   -> NHAN VIEN GIAO HANG : So mat hang*30500
   ->NHAN VIEN XE OM CONG NGHE:So km *10000
     3 nhan vien quyet dinh thanh lap cong ty va cho tuyen them nhieu nhan vien n?a
     -Hay giup cong ty viet mot ung dung quan li cac nhan vien da de cap
     -Tinh tong tien luong hang thang cua cac nhan vien
     -thong ke cac nhan vien giam dan theo luong
*/
 class NhanVienSuaOngNuoc
 {
     private:
	    string hoten;
		int tuoi;
		string gioitinh;
		string diachi;
		string sdt;
		float sogio;
	public:
	   	void nhapthongtin();
	   	void xuatthongtin();
	   	float Tinhluong();
	NhanVienSuaOngNuoc();
	~NhanVienSuaOngNuoc();
 };
   //ham nhap thong tin nhan vien sua ong nuoc
     void NhanVienSuaOngNuoc::nhapthongtin()
     {
     	cout<<"\nNhap ho ten: ";
     	fflush(stdin);
     	getline(cin,hoten);
     	cout<<"\nNhap tuoi: ";
     	cin>>tuoi;
     	cout<<"\nNhap gioi tinh: ";
     	fflush(stdin);
     	getline(cin,gioitinh);
     	cout<<"\nNhap dia chi: ";
     	fflush(stdin);
     	getline(cin,diachi);
     	cout<<"\nNhap so dien thoai: ";
     	getline(cin,sdt);
	 }
	  //ham xuat thong tin nhan vien sua ong nuoc
     void NhanVienSuaOngNuoc::xuatthongtin()
     {
     	cout<<"\Ho ten: "<<hoten;
     	cout<<"\nTuoi: "<<tuoi;
     	cout<<"\nGioi tinh: "<<gioitinh;
     	cout<<"\nDia chi: "<<diachi;
     	cout<<"\nSo dien thoai: "<<sdt;
	 }
	 float NhanVienSuaOngNuoc::Tinhluong()
	 {
	 	return sogio*50000;
	 }
	 //ham tao
	 NhanVienSuaOngNuoc::NhanVienSuaOngNuoc()
	 {
	 	
	 }
	 //ham huy
	 NhanVienSuaOngNuoc::~NhanVienSuaOngNuoc()
	 {
	 	
	 }
	 class NhanVienGiaoHang
 {
     private:
	    string hoten;
		int tuoi;
		string gioitinh;
		string diachi;
		string sdt;
		int sohang;
	public:
	   	void nhapthongtin();
	   	void xuatthongtin();
	   	float Tinhluong();
	NhanVienGiaoHang();
	~NhanVienGiaoHang();
 };
   //ham nhap thong tin nhan vien giao hang
     void NhanVienGiaoHang::nhapthongtin()
     {
     	cout<<"\nNhap ho ten: ";
     	fflush(stdin);
     	getline(cin,hoten);
     	cout<<"\nNhap tuoi: ";
     	cin>>tuoi;
     	cout<<"\nNhap gioi tinh: ";
     	fflush(stdin);
     	getline(cin,gioitinh);
     	cout<<"\nNhap dia chi: ";
     	fflush(stdin);
     	getline(cin,diachi);
     	cout<<"\nNhap so dien thoai: ";
     	getline(cin,sdt);
	 }
	  //ham xuat thong tin nhan vien giao hang
     void NhanVienGiaoHang::xuatthongtin()
     {
     	cout<<"\Ho ten: "<<hoten;
     	cout<<"\nTuoi: "<<tuoi;
     	cout<<"\nGioi tinh: "<<gioitinh;
     	cout<<"\nDia chi: "<<diachi;
     	cout<<"\nSo dien thoai: "<<sdt;
	 }
	 float NhanVienGiaoHang::Tinhluong()
	 {
	 	return sohang*30500;
	 }
	 //ham tao
	 NhanVienGiaoHang::NhanVienGiaoHang()
	 {
	 	
	 }
	 //ham huy
	 NhanVienGiaoHang::~NhanVienGiaoHang()
	 {
	 	
	 }
	  class NhanVienXeOmCongNghe
 {
     private:
	    string hoten;
		int tuoi;
		string gioitinh;
		string diachi;
		string sdt;
		float sokm;
	public:
	   	void nhapthongtin();
	   	void xuatthongtin();
	   	float Tinhluong();
	NhanVienXeOmCongNghe();
	~NhanVienXeOmCongNghe();
 };
   //ham nhap thong tin nhan vien xe om cong nghe
     void NhanVienXeOmCongNghe::nhapthongtin()
     {
     	cout<<"\nNhap ho ten: ";
     	fflush(stdin);
     	getline(cin,hoten);
     	cout<<"\nNhap tuoi: ";
     	cin>>tuoi;
     	cout<<"\nNhap gioi tinh: ";
     	fflush(stdin);
     	getline(cin,gioitinh);
     	cout<<"\nNhap dia chi: ";
     	fflush(stdin);
     	getline(cin,diachi);
     	cout<<"\nNhap so dien thoai: ";
     	getline(cin,sdt);
	 }
	  //ham xuat thong tin nhan vien xe om cong nghe
     void NhanVienXeOmCongNghe::xuatthongtin()
     {
     	cout<<"\Ho ten: "<<hoten;
     	cout<<"\nTuoi: "<<tuoi;
     	cout<<"\nGioi tinh: "<<gioitinh;
     	cout<<"\nDia chi: "<<diachi;
     	cout<<"\nSo dien thoai: "<<sdt;
	 }
	  float NhanVienXeOmCongNghe::Tinhluong()
	 {
	 	return sokm*10000;
	 }
	 //ham tao
	 NhanVienXeOmCongNghe::NhanVienXeOmCongNghe()
	 {
	 	
	 }
	 //ham huy
	 NhanVienXeOmCongNghe::~NhanVienXeOmCongNghe()
	 {
	 	
	 }
	 // thiet ke menu
	 void menu(NhanVienSuaOngNuoc ds_nvsuaongnuoc[], NhanVienGiaoHang ds_nvgiaohang[], NhanVienXeOmCongNghe ds_nvxeom[],int m,int n,int l)
	 {
	 	while(true)
	 	{
	 		int luachon;
	 		cout<<"\n\n\t\t======CHUONG TRINH QUAN LY=====";
	 		cout<<"\n1.Nhap thong tin nhan vien SUA ONG NUOC ";
	 		cout<<"\n2.Nhap thong tin nhan vien GIAO HANG ";
	 		cout<<"\n3.Nhap thong tin nhan vien XE OM CONG NGHE ";
	 		cout<<"\n4.Xuat danh sach thong tin nhan vien SUA ONG NUOC ";
	 		cout<<"\n5.Xuat danh sach thong tin nhan vien GIAO HANG ";
	 		cout<<"\n6.Xuat danh sach thong tin nhan vien XE OM CONG NGHE ";
	 		cout<<"\n\n\t\t============END============";
	 		cout<<"\nNHap lua chon cua ban :";
	 		cin>>luachon;
	 		if(luachon<1 || luachon>6)
	 		{
	 			cout<<"\n\n\t\tLUA CHON CUA BAN KHONG THOA MAN !";
			 }
	 		else if(luachon==1)
	 		{
	 			NhanVienSuaOngNuoc nvsuaongnuoc;//doi tuong gia tri
	 			cout<<"\n\n\t\tNHAP THONG TIN CUA NHAN VIEN SUA ONG NUOC ";
	 			nvsuaongnuoc.nhapthongtin();
	 			
	 			//them doi tuong nhan vien sua ong nuoc vao danh sach nv sua ong nuoc
	 			ds_nvsuaongnuoc[n]= nvsuaongnuoc;
	 			n++;
			 }
			 else if(luachon==2)
	 		{
	 			NhanVienGiaoHang nvgiaohang;//doi tuong gia tri
	 			cout<<"\n\n\t\tNHAP THONG TIN CUA NHAN VIEN GIAO HANG ";
	 			nvgiaohang.nhapthongtin();
	 			
	 			//them doi tuong nhan vien giao hang vao danh sach nv giao hang
	 			ds_nvgiaohang[m]= nvgiaohang;
	 			n++;
			 }
			 	else if(luachon==3)
	 		{
	 			NhanVienXeOmCongNghe nvxeom;//doi tuong gia tri
	 			cout<<"\n\n\t\tNHAP THONG TIN CUA NHAN VIEN XE OM CONG NGHE ";
	 			nvxeom.nhapthongtin();
	 			
	 			//them doi tuong nhan vien xe om vao danh sach nv xe om
	 			ds_nvxeom[l]= nvxeom;
	 			n++;
			 }
			 else if(luachon==4)
			 {
			 	cout<<"\n\n\t\tDANH SACH THONG TIN NHAN VIEN SUA ONG NUOC ";
			 	for(int i=0;i<n;i++)
			 	{
			 		cout<<"\n\n\t\tTHONG TIN NHAN VIEN SUA ONG NUOC THU "<<i+1;
			 		ds_nvsuaongnuoc[i].xuatthongtin();
				 }
			 }
			  else if(luachon==5)
			 {
			 	cout<<"\n\n\t\tDANH SACH THONG TIN NHAN VIEN GIAO HANG ";
			 	for(int i=0;i<m;i++)
			 	{
			 		cout<<"\n\n\t\tTHONG TIN NHAN VIEN GIAO HANG THU "<<i+1;
			 		ds_nvgiaohang[i].xuatthongtin();
				 }
			 }
			  else if(luachon==6)
			 {
			 	cout<<"\n\n\t\tDANH SACH THONG TIN NHAN VIEN XE OM ";
			 	for(int i=0;i<l;i++)
			 	{
			 		cout<<"\n\n\t\tTHONG TIN NHAN VIEN XE OM THU "<<i+1;
			 		ds_nvxeom[i].xuatthongtin();
				 }
			 }
			
		 }
	 }
 int main()
 {
 /*	NhanVienSuaOngNuoc nvsuaongnuoc;
 	NhanVienGiaoHang nvgiaohang;
 	NhanVienXeOmCongNghe nvxeom;*/
// 	cout<<"\n\n\t\tNHAP THONG TIN NHAN VIEN SUA ONG NUOC\n";
// 	nvsuaongnuoc.nhapthongtin();
// 	cout<<"\n\n\t\tNHAP THONG TIN NHAN VIEN SUA GIAO HANG\n";
// 	nvgiaohang.nhapthongtin();
// 	cout<<"\n\n\t\tNHAP THONG TIN NHAN VIEN XE OM 4.0\n";
// 	nvxeom.nhapthongtin();
// 	
// 	cout<<"\n\n\t\t THONG TIN NHAN VIEN SUA ONG NUOC\n";
// 	nvsuaongnuoc.xuatthongtin();
// 	cout<<"\nTIEN LUONG : "<<nvsuaongnuoc.Tinhluong();
// 	
// 	cout<<"\n\n\t\t THONG TIN NHAN VIEN SUA GIAO HANG\n";
// 	nvgiaohang.xuatthongtin();
// 	cout<<"\nTIEN LUONG : "<<nvgiaohang.Tinhluong();
// 	
// 	cout<<"\n\n\t\t THONG TIN NHAN VIEN XE OM 4.0\n";
// 	nvxeom.xuatthongtin();
// 	cout<<"\nTIEN LUONG  : "<<nvxeom.Tinhluong();
     int n=0;
     int m=0;
     int l=0;
     NhanVienSuaOngNuoc ds_nvsuaongnuoc[100];
     NhanVienGiaoHang ds_nvgiaohang[100];
     NhanVienXeOmCongNghe ds_nvxeom[100];
     menu(ds_nvsuaongnuoc, ds_nvgiaohang,ds_nvxeom,n,m,l);
 	return 0;
 }
 
