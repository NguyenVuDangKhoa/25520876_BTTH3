#include<iostream>
#include "NhanVienSX.h"
#include <vector>
#include<string>
using namespace std;
int main(){
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    cQuanLyNhanVien ql(n);
    ql.Nhap();

    ql.Xuat();

    ql.LuongThapNhat();

    cout << "\nTong luong: " << ql.TongLuong() << endl;

    ql.LonTuoiNhat();
    
    ql.SapXepTheoLuong();
    return 0;
}