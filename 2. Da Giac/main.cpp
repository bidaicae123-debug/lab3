#include <iostream>
#include "cDaGiac.h"
using namespace std;

int main() {
    cDaGiac dg;
    dg.Nhap();
    dg.Xuat();

    cout << "Chu vi: " << dg.ChuVi() << endl;
    cout << "Dien tich: " << dg.DienTich() << endl;

    dg.TinhTien(2,3);
    cout << "Sau khi tinh tien (2,3): ";
    dg.Xuat();

    dg.PhongTo(2);
    cout << "Sau khi phong to x2: ";
    dg.Xuat();

    dg.ThuNho(2);
    cout << "Sau khi thu nho /2: ";
    dg.Xuat();

    return 0;
}
