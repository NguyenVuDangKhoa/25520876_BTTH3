 CLASS Point
 void Nhap()
 // Input:
//   Nhập từ bàn phím:
//     double x – hoành độ của điểm
//     double y – tung độ của điểm

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - In yêu cầu nhập x, đọc giá trị vào biến x
//   - In yêu cầu nhập y, đọc giá trị vào biến y
//   - Lưu trực tiếp vào thuộc tính của object Point
//   - Sau khi gọi hàm, object chứa tọa độ (x, y)

void Xuat()
// Input:
//   Không có tham số (sử dụng dữ liệu x, y của object)

// Output:
//   void – in ra màn hình

// Mô tả:
//   - Xuất tọa độ theo dạng (x, y)
//   - Không làm thay đổi dữ liệu object

 CLASS cTamGiac
 void Nhap()
 // Input:
//   Nhập từ bàn phím:
//     3 điểm A, B, C (mỗi điểm gồm x, y)

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - Nhập lần lượt 3 điểm A, B, C
//   - Nếu có 2 điểm trùng nhau thì nhập lại
//   - Lặp đến khi 3 điểm hợp lệ (phân biệt)

void Xuat()
// Input:
//   Không có tham số

// Output:
//   void – in ra màn hình

// Mô tả:
//   - In ra tọa độ 3 đỉnh A, B, C của tam giác

string KiemTra()
// Input:
//   Không có tham số

// Output:
//   string – loại tam giác:
//     "Tam giac deu"
//     "Tam giac vuong can"
//     "Tam giac can"
//     "Tam giac vuong"
//     "Tam giac thuong"

// Mô tả:
//   - Tính độ dài 3 cạnh AB, BC, CA
//   - So sánh với sai số eps
//   - Phân loại tam giác dựa trên cạnh và định lý Pythagore

double TinhChuVi()
// Input:
//   Không có tham số

// Output:
//   double – chu vi tam giác

// Mô tả:
//   - Tính độ dài 3 cạnh AB, BC, CA
//   - Trả về tổng AB + BC + CA

double TinhDienTich()
// Input:
//   Không có tham số

// Output:
//   double – diện tích tam giác

// Mô tả:
//   - Tính độ dài 3 cạnh
//   - Áp dụng công thức Heron:
//       p = (a + b + c) / 2
//       S = sqrt(p * (p - a) * (p - b) * (p - c))

void TinhTien(double dx, double dy)
// Input:
//   double dx – độ dời theo trục x
//   double dy – độ dời theo trục y

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - Cộng dx vào x và dy vào y của A, B, C
//   - Tịnh tiến toàn bộ tam giác

void PhongTo(double k)
// Input:
//   double k – hệ số phóng to (k > 0)

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - Nhân tọa độ A, B, C với k
//   - Tam giác được phóng to từ gốc tọa độ

void ThuNho(double k)
// Input:
//   double k – hệ số thu nhỏ (k > 0)

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - Chia tọa độ A, B, C cho k
//   - Tam giác được thu nhỏ lại

void Quay(double goc)
// Input:
//   double goc – góc quay (đơn vị: độ)

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - Chuyển góc từ độ sang radian
//   - Gọi hàm QuayDiem cho A, B, C
//   - Quay tam giác quanh gốc tọa độ

void QuayDiem(Point &P, double rad)
// Input:
//   Point &P – điểm cần quay
//   double rad – góc quay (radian)

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - Áp dụng công thức:
//       x' = x*cos(rad) - y*sin(rad)
//       y' = x*sin(rad) + y*cos(rad)
//   - Cập nhật lại tọa độ của điểm

double TinhKhoangCach(Point P1, Point P2)
// Input:
//   Point P1, Point P2 – hai điểm

// Output:
//   double – khoảng cách giữa hai điểm

// Mô tả:
//   - Tính theo công thức:
//       sqrt((x2 - x1)^2 + (y2 - y1)^2)
