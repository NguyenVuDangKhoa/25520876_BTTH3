#include<iostream>
#include"MangMotChieu.h"
#include<vector>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
int main() {
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    cArray arr(n);
    arr.NgauNhien();
    cout << "Mang ngau nhien: ";
    arr.Xuat();
    int x;
    cout << "Nhap gia tri can dem: ";
    cin >> x;
    cout << "So lan xuat hien cua " << x << ": " << arr.DemSoLanXuatHien(x) << endl;
    if (arr.KiemTraTangDan()) {
        cout << "Mang tang dan." << endl;
    }
    else {
        cout << "Mang khong tang dan." << endl;
    }
    
    int minLe = arr.LeNhoNhat(); //tạo bién minLe để lưu giá trị số lẻ nhỏ nhất trong mảng bằng cách gọi hàm LeNhoNhat()
    if (minLe != 0) { // Nếu minLe khác 0, tức là đã tìm thấy số lẻ nhỏ nhất trong mảng, in ra giá trị đó
        cout << "So le nho nhat trong mang: " << minLe << endl;
    }
    else {
        cout << "Khong co so le trong mang." << endl;
    }
    int maxSNT = arr.SNTLonNhat(); //tạo biến maxSNT để lưu giá trị số nguyên dương lớn nhất trong mảng bằng cách gọi hàm SNTLonNhat()
    if (maxSNT != -1) { // Nếu maxSNT khác -1, tức là đã tìm thấy số nguyên dương lớn nhất trong mảng, in ra giá trị đó
        cout << "So nguyen to lon nhat trong mang: " << maxSNT << endl;
    }
    else {
        cout << "Khong co so nguyen to trong mang." << endl;
    }
    arr.SapXepTangDan(0, n - 1);
    cout << "Mang sau khi sap xep tang dan: ";
    arr.Xuat();
    arr.SapXepGiamDan(0, n - 1);
    cout << "Mang sau khi sap xep giam dan: ";
    arr.Xuat();

    return 0;
}