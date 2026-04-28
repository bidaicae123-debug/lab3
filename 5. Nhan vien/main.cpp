#include <iostream>
#include <vector>
#include <algorithm>
#include "cNhanVienSX.h"
using namespace std;

int main() {
    int n;
    cout << "Nhap so nhan vien: ";
    cin >> n;

    vector<cNhanVienSX> ds(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhap nhan vien thu " << i+1 << ":\n";
        ds[i].Nhap();
    }

    cout << "\nDanh sach nhan vien:\n";
    for (auto &nv : ds) nv.Xuat();

    // Nhân viên có lương thấp nhất
    auto minLuong = min_element(ds.begin(), ds.end(),
        [](const cNhanVienSX& a, const cNhanVienSX& b){
            return a.TinhLuong() < b.TinhLuong();
        });
    cout << "\nNhan vien co luong thap nhat:\n";
    minLuong->Xuat();

    // Tổng lương
    double tongLuong = 0;
    for (auto &nv : ds) tongLuong += nv.TinhLuong();
    cout << "\nTong luong cong ty phai tra: " << tongLuong << endl;

    // Nhân viên có tuổi cao nhất
    auto maxTuoi = max_element(ds.begin(), ds.end(),
        [](const cNhanVienSX& a, const cNhanVienSX& b){
            return a.GetTuoi() < b.GetTuoi();
        });
    cout << "\nNhan vien co tuoi cao nhat:\n";
    maxTuoi->Xuat();

    // Sắp xếp tăng dần theo lương
    sort(ds.begin(), ds.end(),
        [](const cNhanVienSX& a, const cNhanVienSX& b){
            return a.TinhLuong() < b.TinhLuong();
        });
    cout << "\nDanh sach sau khi sap xep tang dan theo luong:\n";
    for (auto &nv : ds) nv.Xuat();

    return 0;
}
