#include <iostream>
#include <cmath>
#include "cDaThuc.h"
using namespace std;

cDaThuc::cDaThuc() : bac(0), hs(1,0) {}

cDaThuc::cDaThuc(int b) : bac(b), hs(b+1,0) {}

void cDaThuc::Nhap() {
    cout << "Nhap bac cua da thuc: ";
    cin >> bac;
    hs.resize(bac+1);
    cout << "Nhap cac he so tu bac " << bac << " den 0:\n";
    for (int i = 0; i <= bac; i++) {
        cout << "a" << i << " = ";
        cin >> hs[i];
    }
}

void cDaThuc::Xuat() const {
    cout << "P(x) = ";
    for (int i = 0; i <= bac; i++) {
        if (hs[i] != 0) {
            cout << hs[i];
            if (bac - i > 0) cout << "x^" << (bac - i);
            if (i < bac) cout << " + ";
        }
    }
    cout << endl;
}

double cDaThuc::GiaTri(double x) const {
    double val = 0;
    for (int i = 0; i <= bac; i++) {
        val += hs[i] * pow(x, bac - i);
    }
    return val;
}

cDaThuc cDaThuc::Cong(const cDaThuc& dt) const {
    int maxBac = max(bac, dt.bac);
    cDaThuc kq(maxBac);
    for (int i = 0; i <= maxBac; i++) {
        double h1 = (i <= bac ? hs[i] : 0);
        double h2 = (i <= dt.bac ? dt.hs[i] : 0);
        kq.hs[i] = h1 + h2;
    }
    return kq;
}

cDaThuc cDaThuc::Tru(const cDaThuc& dt) const {
    int maxBac = max(bac, dt.bac);
    cDaThuc kq(maxBac);
    for (int i = 0; i <= maxBac; i++) {
        double h1 = (i <= bac ? hs[i] : 0);
        double h2 = (i <= dt.bac ? dt.hs[i] : 0);
        kq.hs[i] = h1 - h2;
    }
    return kq;
}
