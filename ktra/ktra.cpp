#include<iostream>
#include<string>
using namespace std;

class DATE {
	int day;
	int month;
	int year;
public:
	// nhập ngày tháng năm
	void setInfor()
	{
		cin >> day >> month >> year;
	}
	// xuất ngày tháng năm 
	void showInfor()
	{
		cout << day << "  " << month << "  " << year;
	}
};
// lớp nhân viên kế thừa của lớp date
class NHANVIEN : public DATE {
	string name;
	DATE ngay_sinh;
	int CMND;
public:
	// nhập thông tin cho nhân viên 
	void nhap()
	{
		cout << "Nhap lan luot ten, ngay sinh va so CMND: " << endl;
		getline(cin, name);
		DATE::setInfor();
		cin >> CMND;
		cin.ignore();
	}
	// xuất thông tin cho nhân viên
	void xuat() {
		cout << "HO TEN: " << name << endl;
		cout << "Ngay sinh: " << endl;
		DATE::showInfor();
		cout << "\nSo CMND: " << CMND << endl;
	}
};

int main()
{
	NHANVIEN a[10]; // khai báo một mảng gồm 10 nhân viên 
	// sử dụng vòng lặp for với 10 vòng lặp để nhập thông tin cho 10 nhân viên 
	for (int i = 0; i < 2; i++)
	{
		cout << "Hay nhap thong tin cua nhan vien thu " << i + 1 << ": " << endl;
		a[i].nhap();
	}
	cout << "\nThong tin cua cac nhan vien: " << endl;
	// sử dụng vòng lặp for với 10 vòng lặp để xuất thông tin cho 10 nhân viên 
	for (int i = 0; i < 2; i++)
	{
		cout << "Thong tin cua sinh vien " << i + 1 << " la: " << endl;
		a[i].xuat();
	}
	return 0;
}
