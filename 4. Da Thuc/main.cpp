#include <iostream>
#include "cDaThuc.h"
using namespace std;

int main() {
    cDaThuc dt1, dt2;
    cout << "Nhap da thuc 1:\n";
    dt1.Nhap();
    dt1.Xuat();

    cout << "Nhap da thuc 2:\n";
    dt2.Nhap();
    dt2.Xuat();

    double x;
    cout << "Nhap gia tri x: ";
    cin >> x;
    cout << "Gia tri da thuc 1 tai x = " << x << " la: " << dt1.GiaTri(x) << endl;
    cout << "Gia tri da thuc 2 tai x = " << x << " la: " << dt2.GiaTri(x) << endl;

    cDaThuc tong = dt1.Cong(dt2);
    cout << "Tong hai da thuc: ";
    tong.Xuat();

    cDaThuc hieu = dt1.Tru(dt2);
    cout << "Hieu hai da thuc: ";
    hieu.Xuat();

    return 0;
}
