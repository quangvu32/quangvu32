#include <iostream>

using namespace std;


struct PhanSo
{
    double TuSo;
    double MauSo;
};


void NhapPS1(PhanSo &ps)
{
    cout << "Nhap tu so 1: ";
    cin >> ps.TuSo;
    cout<<"Nhap mau so 1: ";
    cin >> ps.MauSo;
}

void NhapPS2(PhanSo &ps)
{
    cout << "Nhap tu so 2: ";
    cin >> ps.TuSo;
    cout<<"Nhap mau so 2: ";
    cin >> ps.MauSo;
}

void Xuat(PhanSo ps1, PhanSo ps2)
{
    cout << "Phan so thu nhat vua nhap la: ";
    cout << ps1.TuSo << "/" << ps1.MauSo << "\n";
    cout << "Phan so thu hai vua nhap la: ";
    cout << ps2.TuSo << "/" << ps2.MauSo << "\n";
}
PhanSo max(PhanSo ps1, PhanSo ps2)
{
    int MAX;
    if( ps1.TuSo / ps1.MauSo > ps2.TuSo / ps2.MauSo )
    {
        cout << "Gia tri MAX: " << ps1.TuSo << "/" << ps1.MauSo;
    }
    else
    {
        cout << "Gia tri Max: " << ps2.TuSo << "/" << ps2.MauSo;
    }
}

int main()
{
    PhanSo ps1, ps2;
    NhapPS1(ps1);
    NhapPS2(ps2);
    Xuat(ps1,ps2);
    max(ps1,ps2);

    return 0;
}
