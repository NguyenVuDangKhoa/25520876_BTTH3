#include <iostream>
#include <cmath>
#include <vector>
#include<string>
using namespace std;
class Point
{private:
    double x,y;
public:
// Hàm khởi tạo mặc định
    Point(){
        x=0;
        y=0;
    }
    // Hàm khởi tạo có tham số
    Point(double dx,double dy){
        x=dx;
        y=dy;
    }
    // Hàm khởi tạo sao chép
    Point(const Point &other){
        x=other.x;
        y=other.y;
    }
    void Nhap(){
        cout<<"Nhap toa do x: ";
        cin>>x;
        cout<<"Nhap toa do y: ";
        cin>>y;
    }
    void Xuat(){
        cout<<"("<<x<<","<<y<<")";
    }
    
    friend class cDaGiac;
};
class cDaGiac
{private:
    int n;
    vector<Point> ds;
public:
// Hàm khởi tạo mặc định
cDaGiac(){
     n=0;
    ds.resize(n);   
}
// Hàm khởi tạo có tham số
cDaGiac(int soluong)
{n=soluong;
ds.resize(soluong);
}
// Hàm khởi tạo sao chép
cDaGiac(const cDaGiac &other)
{
    n=other.n;
    ds=other.ds;
}
void Nhap();
void Xuat();
string kiemTra();
void TinhTien(double k, double l);
void PhongTo(double k);
void ThuNho(double k);
void Quay(double goc);
double TinhChuVi();
double TinhDienTich();
private:
// Hàm phụ để tính khoảng cách giữa hai điểm
double TinhKhoangCach(Point a, Point b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)); // Công thức khoảng cách Euclidean
}
void QuayDiem(Point &p, double rad);
// Hàm phụ để kiểm tra tính hợp lệ của đa giác
bool KiemTraDaGiacHopLe()
{
    if(n<3) // Đa giác phải có ít nhất 3 đỉnh
        return false;
     const double EPS = 1e-9; // Ngưỡng để so sánh khoảng cách

    for(int i=0;i<n;i++)
    {for(int j=i+1;j<n;j++)
    {
        if(TinhKhoangCach(ds[i], ds[j]) < EPS) // Kiểm tra 2 điểm có trùng nhau không
            return false;
    }
    }
    // Kiểm tra xem có 3 điểm nào thẳng hàng không
    for(int i=0;i<n;i++)
    {
        // Lấy 3 điểm liên tiếp (vòng quanh)
        Point a=ds[i];
        Point b=ds[(i+1)%n];
        Point c=ds[(i+2)%n];
        double cross=(b.x - a.x)*(c.y - a.y)-(b.y - a.y)*(c.x - a.x); // Tích chéo để kiểm tra thẳng hàng
        if(abs(cross) < EPS) // Nếu tích chéo gần bằng 0, 3 điểm thẳng hàng
            return false;
    }
    return true;
}
};
