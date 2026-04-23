#include<iostream>
#include "NhanVienSX.h"
#include <vector>
#include<string>
using namespace std;
// Hàm sắp xếp nhanh theo tuổi theo định dạng yyyy-mm-dd
// Sắp xếp theo thuat toán quicksort
void QuickSortTuoi(vector<cNhanVienSX>& a, int l, int r) {
    if (l >= r) return;

    string x = a[(l + r) / 2].GetNgaySinh(); 
    int i = l, j = r;
    // Sắp xếp từ già đến trẻ ( năm nhỏ đến lớn)
    while (i < j) {
        while (a[i].GetNgaySinh() < x) i++; // Nếu ngày sinh của nhân viên i nhỏ hơn x (già hơn) thì tiếp tục tăng i
        while (a[j].GetNgaySinh() > x) j--; // Nếu ngày sinh của nhân viên j lớn hơn x (trẻ hơn) thì tiếp tục giảm j

        if (i <= j) {
            swap(a[i], a[j]); // Hoán đổi vị trí của nhân viên i và j
            i++;
            j--;
        }
    }
// Đệ quy sắp xếp phần bên trái và bên phải của pivot
    QuickSortTuoi(a, l, j);
    QuickSortTuoi(a, i, r);
}
// Hàm sắp xếp nhanh theo lương
// Sắp xếp theo thuat toán quicksort
void QuickSortLuong(vector<cNhanVienSX>& a, int l, int r) {
    if (l >= r) return;

    double x = a[(l + r) / 2].TinhLuong(); 
    int i = l, j = r;
// Sắp xếp từ thấp đến cao
    while (i < j) {
        while (a[i].TinhLuong() < x) i++; // Nếu lương của nhân viên i nhỏ hơn x thì tiếp tục tăng i
        while (a[j].TinhLuong() > x) j--; // Nếu lương của nhân viên j lớn hơn x thì tiếp tục giảm j

        if (i <= j) {
            swap(a[i], a[j]); // Hoán đổi vị trí của nhân viên i và j
            i++;
            j--;
        }
    }
// Đệ quy sắp xếp phần bên trái và bên phải của pivot
    QuickSortLuong(a, l, j);
    QuickSortLuong(a, i, r);
}
void cNhanVienSX::Nhap(){
    cin.ignore();
        cout << "Ma NV: "; getline(cin, maNV);
        cout << "Ho ten: "; getline(cin, hoTen);
        cout << "Ngay sinh (yyyy-mm-dd): "; getline(cin, ngaySinh);
        cout << "So san pham: "; cin >> soSP;
        cout << "Don gia: "; cin >> donGia;
}
void cNhanVienSX::Xuat()  {
        cout << maNV << " | " << hoTen << " | " << ngaySinh
             << " | SP: " << soSP
             << " | Don gia: " << donGia
             << " | Luong: " << TinhLuong() << endl;
}
//Hàm tính lương = số sản phẩm * đơn giá
double cNhanVienSX::TinhLuong()  {
        return soSP * donGia; // Trả về lương tính được
}
// Các hàm getter
string cNhanVienSX::GetNgaySinh()  {
        return ngaySinh; // Trả về ngày sinh 
}
string cNhanVienSX::GetMaNV()  {
        return maNV; // Trả về mã nhân viên
}
void cQuanLyNhanVien::Nhap() {
for (int i = 0; i < n; i++) {
    cout << "\nNhan vien thu " << i + 1 << ":\n";
// Vòng lặp để nhập thông tin cho từng nhân viên, đồng thời kiểm tra mã nhân viên có bị trùng hay không
    while (true) { // Vòng lặp vô hạn, sẽ chỉ thoát khi nhập mã nhân viên không trùng
        ds[i].Nhap();

        bool trung = false; // Biến kiểm tra trùng mã nhân viên

        for (int j = 0; j < i; j++) {
            // Kiểm tra nếu mã nhân viên vừa nhập trùng với tất cả mã nào đã nhập trước đó
            if (ds[i].GetMaNV() == ds[j].GetMaNV()) {
                trung = true;
                break;
            }
        }
// Nếu trùng mã nhân viên, yêu cầu nhập lại, nếu không thì thoát vòng lặp
        if (trung)
            cout << "Ma NV da ton tai, vui long nhap lai!\n";
        else
            break;
    }
}
            
        }

// Hàm xuất thông tin của tất cả nhân viên trong danh sách
void cQuanLyNhanVien::Xuat()  {
        cout << "\nDanh sach nhan vien:\n";
        for (int i=0; i < n; i++) {
            ds[i].Xuat();
        }
}
// Hàm tính tổng lương của tất cả nhân viên trong danh sách 
double cQuanLyNhanVien::TongLuong()  {
        double tong = 0; // Biến để lưu tổng lương
        for ( auto &dt : ds)
            tong += dt.TinhLuong(); // Cộng dồn lương của từng nhân viên vào tổng lương
        return tong; // Trả về tổng lương sau khi đã tính xong
}
// Hàm tìm và xuất thông tin của nhân viên có lương thấp nhất trong danh sách
void cQuanLyNhanVien::LuongThapNhat(){
    if (ds.empty()) return; // Nếu danh sách rỗng thì không làm gì
    vector<cNhanVienSX> kq = ds; // Tạo một bản sao của danh sách nhân viên để sắp xếp mà không làm thay đổi danh sách gốc

    QuickSortLuong(kq, 0, kq.size() - 1); // Sắp xếp danh sách nhân viên theo lương từ thấp đến cao

    cout << "\nNhan vien luong thap nhat:\n";
    kq[0].Xuat(); // Xuất thông tin của nhân viên có lương thấp nhất (sau khi đã sắp xếp, nhân viên này sẽ nằm ở vị trí đầu tiên của danh sách)

}
// Hàm tìm và xuất thông tin của nhân viên có tuổi cao nhất trong danh sách
void cQuanLyNhanVien::LonTuoiNhat() {
    if (ds.empty()) return; // Nếu danh sách rỗng thì không làm gì
    vector<cNhanVienSX> kq = ds; // Tạo một bản sao của danh sách nhân viên để sắp xếp mà không làm thay đổi danh sách gốc

    QuickSortTuoi(kq, 0, kq.size() - 1); // Sắp xếp danh sách nhân viên theo tuổi từ già đến trẻ (năm sinh nhỏ đến lớn)

    cout << "\nNhan vien lon tuoi nhat:\n";
    kq[0].Xuat(); // Xuất thông tin của nhân viên có tuổi cao nhất (sau khi đã sắp xếp, nhân viên này sẽ nằm ở vị trí đầu tiên của danh sách)
}
// Hàm sắp xếp danh sách nhân viên theo lương từ thấp đến cao
void cQuanLyNhanVien::SapXepTheoLuong() {
    if (ds.empty()) return; // Nếu danh sách rỗng thì không làm gì

    QuickSortLuong(ds, 0, ds.size() - 1); // Sắp xếp danh sách nhân viên theo lương từ thấp đến cao

    cout << "\nDanh sach nhan vien sau khi sap xep theo luong:\n";
    for(int i=0; i < n; i++) {
            ds[i].Xuat(); // Xuất thông tin của từng nhân viên sau khi đã sắp xếp
        }
}