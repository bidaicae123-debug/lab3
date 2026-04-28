#include <iostream>
#include "cArray.h"
using namespace std;

int main() {
    cArray a;
    int n;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    a.Nhap(n);

    cout << "Mang vua nhap: ";
    a.Xuat();

    int x;
    cout << "Nhap gia tri x de dem: ";
    cin >> x;
    cout << "So lan xuat hien cua " << x << ": " << a.Dem(x) << endl;

    cout << "Mang co tang dan khong? " << (a.KiemTraTangDan() ? "Co" : "Khong") << endl;
    cout << "Phan le nho nhat: " << a.PhanLeNhoNhat() << endl;
    cout << "So nguyen to lon nhat: " << a.SoNguyenToLonNhat() << endl;

    a.SapXepTangDan();
    cout << "Mang sau khi sap xep tang dan: ";
    a.Xuat();

    a.SapXepGiamDan();
    cout << "Mang sau khi sap xep giam dan: ";
    a.Xuat();

    return 0;
}
