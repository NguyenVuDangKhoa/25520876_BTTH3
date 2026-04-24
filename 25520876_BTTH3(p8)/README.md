 CLASS cNhanVienSX
 void Nhap()
 // Input:
//   Nhập từ bàn phím:
//     string maNV     – mã nhân viên
//     string hoTen    – họ tên
//     string ngaySinh – ngày sinh (yyyy-mm-dd)
//     int soSP        – số sản phẩm
//     double donGia   – đơn giá

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - Nhập đầy đủ thông tin của một nhân viên
//   - Dữ liệu được lưu vào các thuộc tính của object

void Xuat()
// Input:
//   Không có (dùng dữ liệu object)

// Output:
//   void – in ra màn hình

// Mô tả:
//   - In thông tin nhân viên:
//       maNV | hoTen | ngaySinh | soSP | donGia | luong
//   - Lương được tính bằng hàm TinhLuong()

double TinhLuong()
// Input:
//   Không có

// Output:
//   double – lương của nhân viên

// Mô tả:
//   - Công thức:
//       lương = soSP * donGia

string GetNgaySinh()
// Input:
//   Không có

// Output:
//   string – ngày sinh

// Mô tả:
//   - Trả về ngày sinh của nhân viên

string GetMaNV()
// Input:
//   Không có

// Output:
//   string – mã nhân viên

// Mô tả:
//   - Trả về mã nhân viên

 CLASS cQuanLyNhanVien
 void Nhap()
 // Input:
//   Nhập từ bàn phím:
//     n nhân viên (thông qua Nhap() của cNhanVienSX)

// Output:
//   void

// Mô tả:
//   - Nhập thông tin cho n nhân viên
//   - Kiểm tra trùng mã nhân viên:
//       + Nếu trùng → nhập lại
//       + Nếu không → chấp nhận

void Xuat()
// Input:
//   Không có

// Output:
//   void – in ra màn hình

// Mô tả:
//   - In toàn bộ danh sách nhân viên

double TongLuong()
// Input:
//   Không có

// Output:
//   double – tổng lương tất cả nhân viên

// Mô tả:
//   - Duyệt danh sách
//   - Cộng lương từng nhân viên

void LuongThapNhat()
// Input:
//   Không có

// Output:
//   void – in ra màn hình

// Mô tả:
//   - Sao chép danh sách
//   - Sắp xếp theo lương tăng dần (QuickSort)
//   - In nhân viên có lương thấp nhất

void LonTuoiNhat()
// Input:
//   Không có

// Output:
//   void – in ra màn hình

// Mô tả:
//   - Sao chép danh sách
//   - Sắp xếp theo ngày sinh (từ già → trẻ)
//   - In nhân viên lớn tuổi nhất

void SapXepTheoLuong()
// Input:
//   Không có

// Output:
//   void – in ra màn hình

// Mô tả:
//   - Sắp xếp trực tiếp danh sách theo lương tăng dần
//   - In lại danh sách sau khi sắp xếp

QuickSortLuong(vector<cNhanVienSX>& a, int l, int r)
// Input:
//   vector<cNhanVienSX>& a – danh sách nhân viên
//   int l, r – chỉ số trái/phải

// Output:
//   void

// Mô tả:
//   - Sắp xếp nhân viên theo lương tăng dần
//   - Dùng thuật toán Quick Sort

QuickSortTuoi(vector<cNhanVienSX>& a, int l, int r)
// Input:
//   vector<cNhanVienSX>& a – danh sách nhân viên
//   int l, r – chỉ số trái/phải

// Output:
//   void

// Mô tả:
//   - Sắp xếp theo ngày sinh (yyyy-mm-dd)
//   - Chuỗi nhỏ hơn → lớn tuổi hơn
//   - Kết quả: từ già → trẻ
