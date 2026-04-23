#include "MangMotChieu.h"
#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
// Hàm kiểm tra số nguyên dương có phải là số nguyên tố hay không
bool KieTraSNT(int x) {
    if (x < 2) { // Số nguyên dương nhỏ hơn 2 không phải là số nguyên tố
        cout << x << " khong phai la so nguyen to." << endl;
        return false; // Nếu x nhỏ hơn 2, trả về false
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) { // Nếu x chia hết cho i thì x không phải là số nguyên tố
            cout << x << " khong phai la so nguyen to." << endl;
            return false; // Nếu có một ước số nào đó khác 1 và chính nó, trả về false
        }
    }
    cout << x << " la so nguyen to." << endl;
    return true; // Nếu x không chia hết cho bất kỳ số nào từ 2 đến sqrt(x), trả về true
}
// Hàm tạo mảng ngẫu nhiên với n phần tử có giá trị từ -1000000 đến 1000000
void cArray::NgauNhien() {
    srand(time(0)); // Khởi tạo bộ sinh số ngẫu nhiên với thời gian hiện tại
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 2000001 - 1000000; // Sinh số ngẫu nhiên trong khoảng từ -1000000 đến 1000000
    }
}
// Hàm xuất mảng 
void cArray::Xuat() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Hàm đếm số lần xuất hiện của x trong mảng
int cArray::DemSoLanXuatHien(int x) {
    int count = 0; // Biến đếm số lần xuất hiện của x
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count; // Trả về số lần xuất hiện của x trong mảng
}
// Hàm kiểm tra xem mảng có theo thứ tự tăng dần hay không
bool cArray::KiemTraTangDan() {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) { // Nếu phần tử hiện tại lớn hơn phần tử kế tiếp, mảng không theo thứ tự tăng dần
            return false; // Nếu có một cặp phần tử nào đó không theo thứ tự tăng dần, trả về false
        }
    }
    return true; // Nếu tất cả các phần tử đều theo thứ tự tăng dần, trả về true
}
// Hàm tìm số lẻ nhỏ nhất trong mảng
int cArray::LeNhoNhat(){
    int min = 0; // Biến lưu giá trị lẻ nhỏ nhất, khởi tạo bằng 0 (giả sử chưa tìm thấy số lẻ nào)
    for(int i=0; i<n;i++){
        if(arr[i] % 2 != 0){ // Kiểm tra nếu phần tử hiện tại là số lẻ
            if(min == 0 || arr[i] < min){ // Nếu chưa tìm thấy số lẻ nào hoặc phần tử hiện tại nhỏ hơn min, cập nhật min
                min = arr[i];
            }
        }
    }
    return min; // Trả về số lẻ nhỏ nhất trong mảng, nếu không có số lẻ nào sẽ trả về 0

}
// Hàm tìm số nguyên dương lớn nhất trong mảng
int cArray::SNTLonNhat(){
    int max = -1; // Biến lưu giá trị số nguyên dương lớn nhất, khởi tạo bằng -1 (giả sử chưa tìm thấy số nguyên dương nào)
    for(int i=0; i<n;i++){
        if(KieTraSNT(arr[i]) && arr[i] > max){ // Kiểm tra nếu phần tử hiện tại là số nguyên dương và lớn hơn max, cập nhật max
            max = arr[i];
        }
    }
    return max; // Trả về số nguyên dương lớn nhất trong mảng, nếu không có số nguyên dương nào sẽ trả về -1
}
// Hàm sắp xếp mảng theo thứ tự tăng dần sử dụng thuật toán Quick Sort
void cArray::SapXepTangDan(int l, int r)
{
        if(l>=r) return; // Nếu chỉ còn một phần tử hoặc không còn phần tử nào, dừng đệ quy
        int x=arr[(l+r)/2]; // Chọn phần tử ở giữa làm pivot
        int i=l,j=r; //khởi tạo 2 biến i và j để duyệt mảng 
        while(i<j)
        {
            while(arr[i]<x)i++; // Di chuyển i sang phải cho đến khi gặp phần tử lớn hơn hoặc bằng pivot
            while(arr[j]>x)j--; // Di chuyển j sang trái cho đến khi gặp phần tử nhỏ hơn hoặc bằng pivot
            // Nếu i vẫn nhỏ hơn hoặc bằng j, hoán đổi hai phần tử tại i và j, sau đó di chuyển i sang phải và j sang trái
            if(i<=j)
            {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
        // Đệ quy sắp xếp phần bên trái của pivot và phần bên phải của pivot
        SapXepTangDan(l,j);
        SapXepTangDan(i,r);
    }
// Hàm sắp xếp mảng theo thứ tự giảm dần sử dụng thuật toán Quick Sort
void cArray::SapXepGiamDan(int l, int r)
{
        if(l>=r) return; // Nếu chỉ còn một phần tử hoặc không còn phần tử nào, dừng đệ quy
        int x=arr[(l+r)/2]; // Chọn phần tử ở giữa làm pivot
        int i=l,j=r; //khởi tạo 2 biến i và j để duyệt mảng
        while(i<j)
        {
            while(arr[i]>x)i++; // Di chuyển i sang phải cho đến khi gặp phần tử nhỏ hơn hoặc bằng pivot
            while(arr[j]<x)j--; // Di chuyển j sang trái cho đến khi gặp phần tử lớn hơn hoặc bằng pivot
            // Nếu i vẫn nhỏ hơn hoặc bằng j, hoán đổi hai phần tử tại i và j, sau đó di chuyển i sang phải và j sang trái
            if(i<=j)
            {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
        // Đệ quy sắp xếp phần bên trái của pivot và phần bên phải của pivot
        SapXepGiamDan(l,j);
        SapXepGiamDan(i,r);
    }
