#include<iostream>
#include<string>
using namespace std;

struct toKhaiYTe
{
	string hoTen;
	int nam_sinh;
	int di_chuyen;
	int tiep_xuc;
	int ngay;
};
struct csdlToKhai
{
	toKhaiYTe* ptr;
	int soLuong;
};
void loc_ngay(csdlToKhai a, int day)
{
	for (int i = 0; i < a.soLuong; i++)
	{
		if (a.ptr[i].ngay == day) {
			cout << a.ptr[i].hoTen << endl;
		}
	}
}
int so_nguoi(csdlToKhai a, int day)
{
	int dem = 0;
	for (int i = 0; i < a.soLuong; i++)
	{
		if (a.ptr[i].di_chuyen == 1 && a.ptr->ngay <= 14)
			dem++;
	}
	return dem;
}
int tiep_xuc(csdlToKhai a, int day)
{
	int dem = 0;
	for (int i = 0; i < a.soLuong; i++)
	{
		if (a.ptr[i].ngay <= day)
		{
			if ((2022 - a.ptr[i].nam_sinh) < 40 && a.ptr[i].tiep_xuc == 1)
			{
				dem++;
			}
		}
	}

	return dem;
}

int main()
{
	
}