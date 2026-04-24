 CLASS Point
void Nhap()
// Input:
//   Nhập từ bàn phím:
//     double x – hoành độ
//     double y – tung độ

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - Yêu cầu nhập x và y
//   - Lưu trực tiếp vào thuộc tính của object Point

void Xuat()
// Input:
//   Không có (dùng dữ liệu của object)

// Output:
//   void – in ra màn hình

// Mô tả:
//   - In tọa độ theo dạng (x, y)

 CLASS cDaGiac
 void Nhap()
 // Input:
//   Nhập từ bàn phím:
//     int n – số lượng đỉnh
//     n điểm (x, y)

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - Nhập số đỉnh n
//   - Nhập lần lượt n điểm
//   - Kiểm tra tính hợp lệ:
//       + n >= 3
//       + Không có điểm trùng
//       + Không có 3 điểm liên tiếp thẳng hàng
//   - Nếu không hợp lệ → nhập lại

void Xuat()
// Input:
//   Không có

// Output:
//   void – in ra màn hình

// Mô tả:
//   - In danh sách các đỉnh của đa giác

string kiemTra()
// Input:
//   Không có

// Output:
//   string:
//     "Khong phai la da giac"
//     "La tam giac"
//     "La tu giac"
//     "La da giac co hon 4 dinh"

// Mô tả:
//   - Phân loại đa giác dựa vào số đỉnh n

void TinhTien(double k, double l)
// Input:
//   double k – tịnh tiến theo trục x
//   double l – tịnh tiến theo trục y

// Output:
//   void

// Mô tả:
//   - Cộng k vào x và l vào y của tất cả các đỉnh

void PhongTo(double k)
// Input:
//   double k – hệ số phóng to (k > 0)

// Output:
//   void

// Mô tả:
//   - Nhân tọa độ tất cả các đỉnh với k

void ThuNho(double k)
// Input:
//   double k – hệ số thu nhỏ (k > 0)

// Output:
//   void

// Mô tả:
//   - Chia tọa độ tất cả các đỉnh cho k

void Quay(double goc)
// Input:
//   double goc – góc quay (đơn vị: độ)

// Output:
//   void

// Mô tả:
//   - Đổi góc sang radian
//   - Quay toàn bộ các đỉnh quanh gốc tọa độ

double TinhChuVi()
// Input:
//   Không có

// Output:
//   double – chu vi đa giác

// Mô tả:
//   - Cộng khoảng cách giữa các đỉnh liên tiếp
//   - Có tính cạnh cuối nối về đỉnh đầu

double TinhDienTich()
// Input:
//   Không có

// Output:
//   double – diện tích đa giác

// Mô tả:
//   - Áp dụng công thức Shoelace:
//       S = 1/2 * |Σ(x_i*y_{i+1} - x_{i+1}*y_i)|
//   - Đảm bảo diện tích luôn dương bằng giá trị tuyệt đối

double TinhKhoangCach(Point a, Point b)
// Input:
//   Point a, b – hai điểm

// Output:
//   double – khoảng cách giữa hai điểm

// Mô tả:
//   - Tính theo công thức Euclid:
//     sqrt((x2 - x1)^2 + (y2 - y1)^2)

void QuayDiem(Point &p, double rad)
// Input:
//   Point &p – điểm cần quay
//   double rad – góc quay (radian)

// Output:
//   void

// Mô tả:
//   - Áp dụng công thức quay:
//       x' = x*cos(rad) - y*sin(rad)
//       y' = x*sin(rad) + y*cos(rad)
//   - Cập nhật lại tọa độ điểm

bool KiemTraDaGiacHopLe()
// Input:
//   Không có

// Output:
//   bool:
//     true  – đa giác hợp lệ
//     false – không hợp lệ

// Mô tả:
//   - Kiểm tra:
//       + n >= 3
//       + Không có điểm trùng nhau
//       + Không có 3 điểm liên tiếp thẳng hàng (dùng tích có hướng)
//   - Nếu vi phạm bất kỳ điều kiện nào → false
