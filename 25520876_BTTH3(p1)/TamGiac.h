#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class Point
{
    private:
    double x,y;
    public:
    Point()
    {
        x=0;
        y=0;
    }
    Point(double dx, double dy)
    {
        x=dx;
        y=dy;
    }
    Point (Point &other)
    {
        x=other.x;
        y=other.y;
    }
    void Nhap()
    {
        cout<<"Nhap x: ";
        cin>>x;
        cout<<"Nhap y: ";
        cin>>y;
    }
    void Xuat()
    {
        cout<<"("<<x<<","<<y<<")";
    }
    
   
    friend class cTamGiac;
};

class cTamGiac
{
    private:
    Point A,B,C;
    
    public:
    //Hàm khởi tạo mặc định
    cTamGiac()
    {
        A=Point();
        B=Point();
        C=Point();
    }
    //Hàm khởi tạo có tham số
    cTamGiac(Point dA, Point dB, Point dC)
    {
        A=dA;
        B=dB;
        C=dC;
    }
    //Hàm khởi tạo sao chép
    cTamGiac(cTamGiac &other)
    {
        A=other.A;
        B=other.B;
        C=other.C;
    }
   

    void Nhap();
    void Xuat();
    string KiemTra();
    double TinhChuVi();
    double TinhDienTich();
    void TinhTien(double k, double l);
    void PhongTo(double k);
    void ThuNho(double k);
    void Quay(double goc);
    private:
    void QuayDiem(Point &P, double rad);
    double TinhKhoangCach(Point P1, Point P2) // Hàm tính khoảng cách giữa 2 điểm P1 và P2
    {
        return sqrt(pow(P2.x - P1.x, 2) + pow(P2.y - P1.y, 2)); // Công thức khoảng cách giữa 2 điểm trong mặt phẳng Oxy
    }
};
