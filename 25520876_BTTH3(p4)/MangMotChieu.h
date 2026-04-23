#include<iostream>
#include<vector>
using namespace std;

class cArray {
private:
    vector<int> arr;
    int n;
public:
    // Hàm khởi tạo mặc định, khởi tạo với kích thước 0
    cArray() {
        n = 0;
        arr.resize(n);
    }
    // Hàm khởi tạo với kích thước cụ thể
    cArray(int size) {
        n = size;
        arr.resize(n);
    }
    // Hàm khởi tạo sao chép
    cArray(const cArray& other) {
        n = other.n;
        arr = other.arr;
    }
    void Xuat();
    void NgauNhien();
    int DemSoLanXuatHien(int x);
    bool KiemTraTangDan();
    int LeNhoNhat();
    int SNTLonNhat();
    void SapXepTangDan(int l, int r);
    void SapXepGiamDan(int l, int r);
    

};