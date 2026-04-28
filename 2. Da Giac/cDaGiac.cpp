#include <iostream>
#include <cmath>
#include "cDaGiac.h"
using namespace std;

cDaGiac::cDaGiac() : n(0) {}

void cDaGiac::Nhap() {
    cout << "Nhap so dinh: ";
    cin >> n;
    dsDinh.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do dinh " << i+1 << " (x y): ";
        cin >> dsDinh[i].x >> dsDinh[i].y;
    }
}

void cDaGiac::Xuat() const {
    cout << "Da giac: ";
    for (int i = 0; i < n; i++) {
        cout << "(" << dsDinh[i].x << "," << dsDinh[i].y << ")";
        if (i < n-1) cout << ", ";
    }
    cout << endl;
}

float cDaGiac::ChuVi() const {
    float cv = 0;
    for (int i = 0; i < n; i++) {
        int j = (i+1) % n;
        float dx = dsDinh[j].x - dsDinh[i].x;
        float dy = dsDinh[j].y - dsDinh[i].y;
        cv += sqrt(dx*dx + dy*dy);
    }
    return cv;
}

float cDaGiac::DienTich() const {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        int j = (i+1) % n;
        sum += dsDinh[i].x * dsDinh[j].y - dsDinh[j].x * dsDinh[i].y;
    }
    return fabs(sum) / 2.0;
}

void cDaGiac::TinhTien(float dx, float dy) {
    for (int i = 0; i < n; i++) {
        dsDinh[i].x += dx;
        dsDinh[i].y += dy;
    }
}

void cDaGiac::PhongTo(float k) {
    for (int i = 0; i < n; i++) {
        dsDinh[i].x *= k;
        dsDinh[i].y *= k;
    }
}

void cDaGiac::ThuNho(float k) {
    for (int i = 0; i < n; i++) {
        dsDinh[i].x /= k;
        dsDinh[i].y /= k;
    }
}
