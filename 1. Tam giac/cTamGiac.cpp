#include <iostream>
#include <cmath>
#include "cTamGiac.h"
using namespace std;

double cTamGiac::KhoangCach(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

void cTamGiac::Nhap() {
    cout << "Nhap toa do diem A (x y): ";
    cin >> xA >> yA;
    cout << "Nhap toa do diem B (x y): ";
    cin >> xB >> yB;
    cout << "Nhap toa do diem C (x y): ";
    cin >> xC >> yC;
}

void cTamGiac::Xuat() {
    cout << "A(" << xA << "," << yA << "), "
         << "B(" << xB << "," << yB << "), "
         << "C(" << xC << "," << yC << ")";
}

string cTamGiac::KiemTraLoai() {
    double AB = KhoangCach(xA,yA,xB,yB);
    double BC = KhoangCach(xB,yB,xC,yC);
    double CA = KhoangCach(xC,yC,xA,yA);

    if (fabs(AB-BC)<1e-6 && fabs(BC-CA)<1e-6) return "Tam giac deu";

    if (fabs(AB-BC)<1e-6 || fabs(BC-CA)<1e-6 || fabs(CA-AB)<1e-6) {
        if (fabs(AB*AB + BC*BC - CA*CA)<1e-6 ||
            fabs(BC*BC + CA*CA - AB*AB)<1e-6 ||
            fabs(CA*CA + AB*AB - BC*BC)<1e-6)
            return "Tam giac vuong can";
        return "Tam giac can";
    }

    if (fabs(AB*AB + BC*BC - CA*CA)<1e-6 ||
        fabs(BC*BC + CA*CA - AB*AB)<1e-6 ||
        fabs(CA*CA + AB*AB - BC*BC)<1e-6)
        return "Tam giac vuong";

    return "Tam giac thuong";
}

double cTamGiac::ChuVi() {
    double AB = KhoangCach(xA,yA,xB,yB);
    double BC = KhoangCach(xB,yB,xC,yC);
    double CA = KhoangCach(xC,yC,xA,yA);
    return AB + BC + CA;
}

double cTamGiac::DienTich() {
    return fabs((xA*(yB-yC) + xB*(yC-yA) + xC*(yA-yB))/2.0);
}

void cTamGiac::TinhTien(double dx, double dy) {
    xA += dx; yA += dy;
    xB += dx; yB += dy;
    xC += dx; yC += dy;
}

void cTamGiac::PhongTo(double k) {
    xA *= k; yA *= k;
    xB *= k; yB *= k;
    xC *= k; yC *= k;
}

void cTamGiac::ThuNho(double k) {
    xA /= k; yA /= k;
    xB /= k; yB /= k;
    xC /= k; yC /= k;
}
