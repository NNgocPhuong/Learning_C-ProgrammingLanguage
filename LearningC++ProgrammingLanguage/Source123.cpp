#include<iostream>
#include<string>

using namespace std;

class NgaySinh
{
    int ngay;
    int thang;
    int nam;
public:
    void nhap()
    {
        cout << "Nhap ngay: "; cin >> ngay;
        cout << "Nhap thang: "; cin >> thang;
        cout << "Nhap nam: "; cin >> nam;
    }
    void xuat()
    {
        cout << ngay << "/" << thang << "/" << nam << endl;
    }
};

class NhanVien : public NgaySinh
{
    string manv;
    string hten;
    string dchi;
    double hesoluong;
    double luongcb;
public:
    void nhap()
    {
        cin.ignore();
        cout << "Nhap ho ten nhan vien: "; getline(cin, hten);
        cout << "Nhap dia chi nhan vien: "; getline(cin, dchi);
        cout << "Nhap ma nhan vien: "; getline(cin, manv);
        NgaySinh::nhap();
        cout << "Nhap he so luong co ban: "; cin >> hesoluong;
        cout << "Nhap so luong co ban: "; cin >> luongcb;
    }
    void xuat()
    {
        cout << "Ma nhan vien: " << manv << endl;
        cout << "Ho ten nhan vien: " << hten << endl;
        cout << "Ngay sinh: "; NgaySinh::xuat();
        cout << "Dia chi: " << dchi << endl;
        cout << "He so luong co ban: " << hesoluong << endl;
        cout << "Luong co ban: " << luongcb << endl;
    }
};

int main()
{
    NhanVien *dsnv;
    int n;
    cout << "Nhap so ban ghi thong tin nhan vien: ";
    cin >> n;
    dsnv = new NhanVien[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Nhap ban ghi thu " << i << endl;
        dsnv[i].nhap();
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << "Ban ghi thu " << i << endl;
        dsnv[i].xuat();
        cout << "<--------------------------------------------->" << endl;
    }
    delete[]dsnv;
    return 0;
}