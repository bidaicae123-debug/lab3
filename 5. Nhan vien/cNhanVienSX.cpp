#include <iostream>
#include <sstream>
#include <ctime>
#include "cNhanVienSX.h"
using namespace std;

cNhanVienSX::cNhanVienSX() : soSP(0), donGia(0) {}

void cNhanVienSX::Nhap() {
    cout << "Nhap ma nhan vien: ";
    cin >> maNV;
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap ngay sinh (dd/mm/yyyy): ";
    getline(cin, ngaySinh);
    cout << "Nhap so san pham: ";
    cin >> soSP;
    cout << "Nhap don gia 1 san pham: ";
    cin >> donGia;
}

void cNhanVienSX::Xuat() const {
    cout << "MaNV: " << maNV
         << ", HoTen: " << hoTen
         << ", NgaySinh: " << ngaySinh
         << ", SoSP: " << soSP
         << ", DonGia: " << donGia
         << ", Luong: " << TinhLuong() << endl;
}

double cNhanVienSX::TinhLuong() const {
    return soSP * donGia;
}

int cNhanVienSX::GetTuoi() const {
    int d,m,y;
    char sep;
    stringstream ss(ngaySinh);
    ss >> d >> sep >> m >> sep >> y;

    time_t now = time(0);
    tm *ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;

    return currentYear - y;
}
