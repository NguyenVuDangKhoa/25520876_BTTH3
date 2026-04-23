#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
class cDaThuc
{private:
    vector<double> hs;
    int n;
public:
//Hàm khởi tạo mặc định
    cDaThuc()
    {
        n=0;
        hs.resize(0);
    }
    //Hàm khởi tạo có tham số
    cDaThuc(int k)
    {
        n=k;
        hs.resize(n+1, 0); //Khởi tạo vector với kích thước n+1 (vì còn hệ số tự do) và giá trị mặc định là 0    
    }
    //Hàm khởi tạo sao chép
    cDaThuc(const cDaThuc &dt)
    {        n=dt.n;
        hs=dt.hs;
    }
    void Nhap();
    void Xuat();
    double TinhGiaTri(double x);
    cDaThuc Cong(cDaThuc b);
    cDaThuc Tru(cDaThuc b);
};