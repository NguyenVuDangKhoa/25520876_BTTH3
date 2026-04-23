#include "DaThuc.h"
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int k,l;
    cout<<"Nhap da thuc a: "<<endl;
    cout<<"Nhap bac cua da thuc: ";
    cin>>k;
    cDaThuc a(k);
    a.Nhap();
    cout<<"Nhap da thuc b: "<<endl;
    cout<<"Nhap bac cua da thuc: ";
    cin>>l;
    cDaThuc b(l);
    b.Nhap();
    cout<<"Da thuc a: ";
    a.Xuat();
    cout<<"\nDa thuc b: ";
    b.Xuat();
    cout<<"\n Nhap gia tri x: ";
    int x;
    cin>>x;
    cout<<"\n Tinh gia tri da thuc a tai x=" << x << ": " << a.TinhGiaTri(x);
    cout<<"\n Tinh gia tri da thuc b tai x=" << x << ": " << b.TinhGiaTri(x);
    cout<<"\nTong 2 da thuc: ";
    cDaThuc tong=a.Cong(b);
    tong.Xuat();
    cout<<"\nHieu 2 da thuc: ";
    cDaThuc hieu=a.Tru(b);
    hieu.Xuat();
    return 0;
}
