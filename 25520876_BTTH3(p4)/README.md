 CLASS cArray
 void NgauNhien()
 // Input:
//   Không có tham số (sử dụng n đã có)

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - Sinh ngẫu nhiên n phần tử cho mảng
//   - Giá trị trong khoảng [-1000000, 1000000]
//   - Gán trực tiếp vào vector arr

void Xuat()
// Input:
//   Không có (dùng dữ liệu arr)

// Output:
//   void – in ra màn hình

// Mô tả:
//   - In tất cả phần tử của mảng trên 1 dòng

int DemSoLanXuatHien(int x)
// Input:
//   int x – giá trị cần đếm

// Output:
//   int – số lần x xuất hiện trong mảng

// Mô tả:
//   - Duyệt toàn bộ mảng
//   - Đếm số phần tử bằng x

int LeNhoNhat()
// Input:
//   Không có

// Output:
//   int – số lẻ nhỏ nhất trong mảng
//         (trả về 0 nếu không có)

// Mô tả:
//   - Duyệt mảng
//   - Kiểm tra số lẻ (arr[i] % 2 != 0)
//   - Cập nhật giá trị nhỏ nhất

int SNTLonNhat()
// Input:
//   Không có

// Output:
//   int – số nguyên tố lớn nhất trong mảng
//         (trả về -1 nếu không có)

// Mô tả:
//   - Duyệt mảng
//   - Kiểm tra số nguyên tố bằng hàm KieTraSNT
//   - Lấy giá trị lớn nhất

void SapXepTangDan(int l, int r)
// Input:
//   int l – chỉ số trái
//   int r – chỉ số phải

// Output:
//   void

// Mô tả:
//   - Sắp xếp mảng theo thứ tự tăng dần
//   - Dùng thuật toán Quick Sort:
//       + Chọn pivot ở giữa
//       + Chia mảng thành 2 phần
//       + Đệ quy xử lý hai phần

void SapXepGiamDan(int l, int r)
// Input:
//   int l – chỉ số trái
//   int r – chỉ số phải

// Output:
//   void

// Mô tả:
//   - Sắp xếp mảng theo thứ tự giảm dần
//   - Tương tự Quick Sort nhưng đảo điều kiện so sánh

bool KieTraSNT(int x)
// Input:
//   int x – số cần kiểm tra

// Output:
//   bool:
//     true  – là số nguyên tố
//     false – không phải

// Mô tả:
//   - Nếu x < 2 → không phải SNT
//   - Kiểm tra chia hết từ 2 đến sqrt(x)
//   - In thông báo ra màn hình
