#include <iostream>
#include <cmath>
#include <vector>
#include<string>
#include "DaGiac.h"
using namespace std;
void cDaGiac::Nhap()
{
    cout<<"Nhap so luong dinh: ";
    cin>>n;
    ds.resize(n);
     bool hopLe; // lưu trữ kết quả kiểm tra tính hợp lệ của đa giác

    do {
        for(int i = 0; i < n; i++)
        {
            cout << "Nhap toa do dinh " << i + 1 << ": ";
            ds[i].Nhap();
        }

        hopLe = KiemTraDaGiacHopLe();

        if (!hopLe)  
            cout << " Da giac khong hop le! Vui long nhap lai.\n";

    } while(!hopLe); // Lặp lại cho đến khi đa giác hợp lệ được nhập
}
void cDaGiac::Xuat()
{
    cout<<"Cac dinh cua da giac la: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Dinh "<<i+1<<": ";
        ds[i].Xuat();
        cout<<endl;
    }
}
// Hàm kiểm tra loại đa giác
string cDaGiac::kiemTra()
{
    if(n<3) 
        return "Khong phai la da giac";
    else if(n==3)
        return "La tam giac";
    else if(n==4)
        return "La tu giac";
    else
        return "La da giac co hon 4 dinh";
}
// Tịnh tiến đa giác theo vector (k,l)
void cDaGiac::TinhTien(double k, double l)
{
    for(int i=0;i<n;i++)
    {
        // Cộng k vào x và l vào y của mỗi điểm
        ds[i].x+=k;
        ds[i].y+=l;
    }
}
// Phóng to đa giác theo hệ số k
void cDaGiac::PhongTo(double k)
{
    for(int i=0;i<n;i++)
    {
        // Nhân x và y của mỗi điểm với hệ số k
        ds[i].x*=k;
        ds[i].y*=k;
    }
}
// Thu nhỏ đa giác theo hệ số k
void cDaGiac::ThuNho(double k)
{
    for(int i=0;i<n;i++)
    {
        // Chia x và y của mỗi điểm cho hệ số k
        ds[i].x/=k;
        ds[i].y/=k;
    }
}
// Hàm phụ để quay một điểm quanh gốc tọa độ theo góc rad (radian)
void cDaGiac::QuayDiem(Point &p, double rad)
{
    double x_new=p.x*cos(rad)-p.y*sin(rad); // công thức quay điểm quanh gốc tọa độ
    double y_new=p.x*sin(rad)+p.y*cos(rad);
    // Cập nhật lại tọa độ của điểm sau khi quay
    p.x=x_new;
    p.y=y_new;
}
// Quay đa giác quanh gốc tọa độ theo góc goc (đơn vị độ)
void cDaGiac::Quay(double goc)
{
    double rad=goc* 3.141592653589793/180; // Chuyển góc từ độ sang radian
    for(int i=0;i<n;i++)
    {
        QuayDiem(ds[i],rad);
    }
}
double cDaGiac::TinhChuVi()
{
    double chuVi=0;
    for(int i=0;i<n;i++)
    {
        chuVi+=TinhKhoangCach(ds[i], ds[(i+1)%n]);// Tính Chu vi bằng cách cộng khoảng cách giữa các điểm liên tiếp (vòng quanh)
    }
    return chuVi; // tra về chu vi đã tính
}
double cDaGiac::TinhDienTich()
{
    double dienTich=0;
    for(int i=0;i<n;i++)
    {
        dienTich+=ds[i].x*ds[(i+1)%n].y-ds[(i+1)%n].x*ds[i].y; // Tính diện tích bằng công thức Shoelace, công thức này tính diện tích của đa giác dựa trên tọa độ của các đỉnh. Kết quả có thể âm nếu các điểm được nhập theo chiều kim đồng hồ, nên ta lấy giá trị tuyệt đối để đảm bảo diện tích luôn dương.
    }
    return abs(dienTich)/2; // Trả về diện tích đã tính
}