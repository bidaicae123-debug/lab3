#include <iostream>
#include "cTamGiac.h"
using namespace std;

int main() {
    cTamGiac tg;
    tg.Nhap();

    cout << "\nTam giac: ";
    tg.Xuat();

    cout << "\nLoai: " << tg.KiemTraLoai();
    cout << "\nChu vi: " << tg.ChuVi();
    cout << "\nDien tich: " << tg.DienTich();

    tg.TinhTien(2,3);
    cout << "\nSau khi tinh tien (2,3): ";
    tg.Xuat();

    tg.PhongTo(2);
    cout << "\nSau khi phong to x2: ";
    tg.Xuat();

    tg.ThuNho(2);
    cout << "\nSau khi thu nho /2: ";
    tg.Xuat();

    return 0;
}
