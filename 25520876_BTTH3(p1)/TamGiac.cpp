#include "TamGiac.h"
#include<cmath>
#include<iostream>
#include<string>
using namespace std;
void cTamGiac::Nhap() // Nhập 3 điểm A, B, C và kiểm tra nếu 3 điểm trùng nhau thì nhập lại
{do{
    cout<<"Nhap diem A: "<<endl;
    A.Nhap();
    cout<<"Nhap diem B: "<<endl;
    B.Nhap();
    cout<<"Nhap diem C: "<<endl;
    C.Nhap();}
while(A.x == B.x && A.y == B.y || A.x == C.x && A.y == C.y || B.x == C.x && B.y == C.y); // Kiểm tra nếu 3 điểm trùng nhau thì nhập lại
}
void cTamGiac::Xuat() // Xuat 3 diem A, B, C
{
    cout<<"Tam giac ABC co cac dinh: "<<endl;
    cout<<"A: ";
    A.Xuat();
    cout<<endl;
    cout<<"B: ";
    B.Xuat();
    cout<<endl;
    cout<<"C: ";
    C.Xuat();
    cout<<endl;
}
// Tịnh tiến tam giác theo vector (dx, dy)
void cTamGiac::TinhTien(double dx, double dy)
{
    // Cộng dx vào x và dy vào y của các điểm A, B, C để tịnh tiến tam giác
    A.x +=dx;
    A.y +=dy;
    B.x +=dx;
    B.y +=dy;
    C.x +=dx;
    C.y +=dy;
}
// Phóng to tam giác theo tỉ lệ k
void cTamGiac::PhongTo(double k)
{
    // nhân tọa độ của các điểm A, B, C với k để phóng to tam giác
    A.x *=k;
    A.y *=k;
    B.x *=k;
    B.y *=k;
    C.x *=k;
    C.y *=k;
}
// Thu nhỏ tam giác theo tỉ lệ k
void cTamGiac::ThuNho(double k)
{
    // chia tọa độ của các điểm A, B, C cho k để thu nhỏ tam giác
    A.x /=k;
    A.y /=k;
    B.x /=k;
    B.y /=k;
    C.x /=k;
    C.y /=k;
}
void cTamGiac::QuayDiem(Point &P, double rad) // Quay một điểm P quanh gốc tọa độ theo góc rad
{
    double x = P.x*cos(rad) - P.y*sin(rad); // Công thức quay điểm quanh gốc tọa độ
    double y = P.x*sin(rad) + P.y*cos(rad);
    // Cập nhật lại tọa độ của điểm sau khi quay
    P.x = x; 
    P.y = y;
}
// Quay tam giác quanh gốc tọa độ theo góc goc
void cTamGiac::Quay(double goc)
{
    double rad = goc * 3.141592653589793/ 180.0; // Chuyển góc từ độ sang radian
    QuayDiem(A, rad);
    QuayDiem(B, rad);
    QuayDiem(C, rad);
}
string cTamGiac::KiemTra()
{
    const double eps = 1e-6;

    double AB = TinhKhoangCach(A, B);
    double BC = TinhKhoangCach(B, C);
    double CA = TinhKhoangCach(C, A);

    bool can = (abs(AB - BC) < eps) ||
               (abs(BC - CA) < eps) ||
               (abs(AB - CA) < eps);

    bool deu = (abs(AB - BC) < eps) &&
               (abs(BC - CA) < eps);

    bool vuong =
        abs(AB*AB + BC*BC - CA*CA) < eps ||
        abs(AB*AB + CA*CA - BC*BC) < eps ||
        abs(BC*BC + CA*CA - AB*AB) < eps;

    if (deu) return "Tam giac deu";
    if (can && vuong) return "Tam giac vuong can";
    if (can) return "Tam giac can";
    if (vuong) return "Tam giac vuong";

    return "Tam giac thuong";
}

double cTamGiac::TinhChuVi()
{
    // Tính độ dài các cạnh của tam giác
    double AB = TinhKhoangCach(A, B);
    double BC = TinhKhoangCach(B, C);
    double CA = TinhKhoangCach(C, A);
    return AB + BC + CA; // Chu vi bằng tổng độ dài các cạnh
}
double cTamGiac::TinhDienTich()
{
    // Tính độ dài các cạnh của tam giác
    double AB = TinhKhoangCach(A, B);
    double BC = TinhKhoangCach(B, C);
    double CA = TinhKhoangCach(C, A);
    double p = (AB + BC + CA) / 2;
    // Diện tích được tính bằng công thức Heron: S = sqrt(p * (p - AB) * (p - BC) * (p - CA))
    return sqrt(p * (p - AB) * (p - BC) * (p - CA));
}
