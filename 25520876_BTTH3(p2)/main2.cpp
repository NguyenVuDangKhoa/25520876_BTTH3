#include <iostream>
#include "DaGiac.h"
#include <cmath>
#include <vector>
#include<string>
using namespace std;
int main()
{
    cDaGiac dg;
    dg.Nhap();
    dg.Xuat();
    cout<<dg.kiemTra()<<endl;
    double k,l;
    cout<<"Nhap vector tinh tien (k,l): ";
    cin>>k>>l;
    dg.TinhTien(k,l);
    cout<<"Da giac sau khi tinh tien: "<<endl;
    dg.Xuat();
    double p;
    cout<<"Nhap he so phong to: ";
    cin>>p;
    dg.PhongTo(p);
    cout<<"Da giac sau khi phong to: "<<endl;
    dg.Xuat();
    double q;
    cout<<"Nhap he so thu nho: ";
    cin>>q;
    dg.ThuNho(q);
    cout<<"Da giac sau khi thu nho: "<<endl;
    dg.Xuat();
    double goc;
    cout<<"Nhap goc quay (do): ";
    cin>>goc;
    dg.Quay(goc);
    cout<<"Da giac sau khi quay: "<<endl;
    dg.Xuat();
    cout<<"Chu vi da giac: "<<dg.TinhChuVi()<<endl;
    cout<<"Dien tich da giac: "<<dg.TinhDienTich()<<endl;
    return 0;
}