#include<iostream>
#include<cmath>
#include<vector>
#include "DaThuc.h"
using namespace std;
//Hàm nhập hệ số của đa thức
void cDaThuc::Nhap()
{
    cout<<"Nhap cac he so tu bac cao den bac thap: "<<endl;
    //Nhập hệ số từ bậc cao đến bậc thấp
    for(int i=n;i>=0;i--)
    {
        cout<<"He so bac "<<i<<": ";
        cin>>hs[i];
    }
}
//Hàm xuất đa thức
void cDaThuc::Xuat()
{
    //Xuất đa thức từ bậc cao đến bậc thấp
    for(int i=n;i>=0;i--)
    {
        if(hs[i]!=0) //Chỉ xuất các hệ số khác 0
        {
            if(i!=n && hs[i]>0) //Thêm dấu + giữa các hệ số dương (trừ hệ số đầu tiên)
                cout<<"+";
            if(i==0) //Hệ số tự do
                cout<<hs[i];
            else if(i==1) //Hệ số của x
                cout<<hs[i]<<"x";
            else
                cout<<hs[i]<<"x^"<<i; //Hệ số của x^i
        }
    }
}
double cDaThuc::TinhGiaTri(double x)
{
    double kq=0; //Tạo biến để lưu giá trị của đa thức tại x
    for(int i=n;i>=0;i--)
    {
        kq+=hs[i]*pow(x,i); //Công thức tính giá trị của đa thức: P(x) = a_n*x^n + a_(n-1)*x^(n-1) + ... + a_1*x + a_0
    }
    return kq; //Trả về giá trị của đa thức tại x
}
cDaThuc cDaThuc::Cong(cDaThuc b)
{

    cDaThuc kq; //Tạo biến để lưu kết quả của phép cộng
    kq.n = max(n, b.n); //Bậc của đa thức kết quả sẽ là bậc lớn nhất giữa hai đa thức
    kq.hs.resize(kq.n + 1, 0);

    for(int i = 0; i <= kq.n; i++)
    {
        if(i <= n) //Nếu bậc i tồn tại trong đa thức hiện tại, cộng hệ số vào kết quả
            kq.hs[i] += hs[i];

        if(i <= b.n) //Nếu bậc i tồn tại trong đa thức b, cộng hệ số vào kết quả
            kq.hs[i] += b.hs[i];
    }

    return kq; //Trả về đa thức kết quả sau khi cộng

}
cDaThuc cDaThuc::Tru(cDaThuc b)
{
    cDaThuc kq; //Tạo biến để lưu kết quả của phép trừ
    kq.n = max(n, b.n); //Bậc của đa thức kết quả sẽ là bậc lớn nhất giữa hai đa thức
    kq.hs.resize(kq.n + 1, 0);

    for(int i = 0; i <= kq.n; i++)
    {
        if(i <= n) //Nếu bậc i tồn tại trong đa thức hiện tại, cộng hệ số vào kết quả
            kq.hs[i] += hs[i];

        if(i <= b.n) //Nếu bậc i tồn tại trong đa thức b, trừ hệ số vào kết quả
            kq.hs[i] -= b.hs[i];
    }

    return kq; //Trả về đa thức kết quả sau khi trừ
}
