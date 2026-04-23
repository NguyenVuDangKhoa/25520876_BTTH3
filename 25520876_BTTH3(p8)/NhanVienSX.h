#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cNhanVienSX {
private:
    string maNV, hoTen, ngaySinh;
    int soSP;
    double donGia;

public:
// Hàm khởi tạo mặc định
    cNhanVienSX() {
        maNV = hoTen = ngaySinh = "";
        soSP = 0;
        donGia = 0;
    }
    // Hàm khởi tạo có tham số
    cNhanVienSX(string ma, string ten, string ns, int sp, double dg) {
        maNV = ma;
        hoTen = ten;
        ngaySinh = ns;
        soSP = sp;
        donGia = dg;
    }
    // Hàm khởi tạo sao chép
    cNhanVienSX(const cNhanVienSX& nv) {
        maNV = nv.maNV;
        hoTen = nv.hoTen;
        ngaySinh = nv.ngaySinh;
        soSP = nv.soSP;
        donGia = nv.donGia;
    }
    void Nhap() ;

    void Xuat() ;
    double TinhLuong()  ;
 // Các hàm getter
    string GetNgaySinh();
    string GetMaNV(); 
};


class cQuanLyNhanVien {
private:
    vector<cNhanVienSX> ds;
int n;
public:
// Hàm khởi tạo mặc định
cQuanLyNhanVien() {
        n = 0;
        ds.resize(n);
    }
    // Hàm khởi tạo có tham số
    cQuanLyNhanVien(int soluong) {
        n = soluong;
        ds.resize(soluong);
    }
    // Hàm khởi tạo sao chép
    cQuanLyNhanVien(const cQuanLyNhanVien& ql) {
        n = ql.n;
        ds = ql.ds;
    }
    void Nhap() ;

    void Xuat()  ;

    void LuongThapNhat()  ;
        

    double TongLuong() ;

    void LonTuoiNhat() ;

    void SapXepTheoLuong() ;
    
    
};