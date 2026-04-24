 CLASS cDaThuc
 void Nhap()
 // Input:
//   Nhập từ bàn phím:
//     n+1 hệ số của đa thức:
//       từ bậc n đến bậc 0

// Output:
//   void – không trả về giá trị

// Mô tả:
//   - Nhập hệ số từ bậc cao xuống bậc thấp
//   - Lưu vào vector hs:
//       hs[i] là hệ số của x^i

void Xuat()
// Input:
//   Không có (dùng dữ liệu hs và n)

// Output:
//   void – in ra màn hình

// Mô tả:
//   - Xuất đa thức dạng:
//       a_n x^n + ... + a_1 x + a_0
//   - Bỏ qua hệ số bằng 0
//   - Tự động thêm dấu '+' nếu cần

double TinhGiaTri(double x)
// Input:
//   double x – giá trị cần tính

// Output:
//   double – giá trị của đa thức tại x

// Mô tả:
//   - Tính theo công thức:
//       P(x) = a_n*x^n + ... + a_1*x + a_0
//   - Duyệt từ bậc cao xuống thấp

cDaThuc Cong(cDaThuc b)
// Input:
//   cDaThuc b – đa thức thứ hai

// Output:
//   cDaThuc – đa thức kết quả sau khi cộng

// Mô tả:
//   - Bậc kết quả = max(n, b.n)
//   - Cộng hệ số cùng bậc:
//       kq[i] = hs[i] + b.hs[i]
//   - Nếu thiếu bậc thì xem như hệ số = 0

cDaThuc Tru(cDaThuc b)
// Input:
//   cDaThuc b – đa thức thứ hai

// Output:
//   cDaThuc – đa thức kết quả sau khi trừ

// Mô tả:
//   - Bậc kết quả = max(n, b.n)
//   - Trừ hệ số cùng bậc:
//       kq[i] = hs[i] - b.hs[i]
//```

---

