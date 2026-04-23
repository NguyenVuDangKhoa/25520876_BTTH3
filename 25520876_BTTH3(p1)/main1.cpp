#include<iostream>
#include "TamGiac.h"
using namespace std;
int main()
{
    cTamGiac t;
    t.Nhap();
    t.Xuat();
    cout<<"Loai tam giac: "<<t.KiemTra()<<endl;
    double dx, dy;
    cout<<"Nhap dx va dy de tinh tien: ";
    cin>>dx>>dy;
    t.TinhTien(dx, dy);
    cout<<"Tam giac sau khi tinh tien: "<<endl;
    t.Xuat();
    double k;
    cout<<"Nhap k de phong to: ";
    cin>>k;
    t.PhongTo(k);
    cout<<"Tam giac sau khi phong to: "<<endl;
    t.Xuat();
    cout<<"Nhap k de thu nho: ";
    cin>>k;
    t.ThuNho(k);
    cout<<"Tam giac sau khi thu nho: "<<endl;
    t.Xuat();
    double goc;
    cout<<"Nhap goc quay (do): ";
    cin>>goc;
    t.Quay(goc);
    cout<<"Tam giac sau khi quay: "<<endl;
    t.Xuat();
    cout<<"Chu vi tam giac: "<<t.TinhChuVi()<<endl;
    cout<<"Dien tich tam giac: "<<t.TinhDienTich()<<endl;
    return 0;
}
