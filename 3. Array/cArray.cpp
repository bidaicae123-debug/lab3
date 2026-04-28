#include <iostream>
#include <algorithm>
#include "cArray.h"
using namespace std;

cArray::cArray() : n(0) {}

void cArray::Nhap(int size) {
    n = size;
    arr.resize(n);
    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void cArray::Xuat() const {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int cArray::Dem(int x) const {
    int count = 0;
    for (int val : arr) {
        if (val == x) count++;
    }
    return count;
}

bool cArray::KiemTraTangDan() const {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) return false;
    }
    return true;
}

int cArray::PhanLeNhoNhat() const {
    int minOdd = -1;
    for (int val : arr) {
        if (val % 2 != 0) {
            if (minOdd == -1 || val < minOdd) minOdd = val;
        }
    }
    return minOdd;
}

bool cArray::LaNguyenTo(int x) const {
    if (x < 2) return false;
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int cArray::SoNguyenToLonNhat() const {
    int maxPrime = -1;
    for (int val : arr) {
        if (LaNguyenTo(val)) {
            if (val > maxPrime) maxPrime = val;
        }
    }
    return maxPrime;
}

void cArray::SapXepTangDan() {
    sort(arr.begin(), arr.end());
}

void cArray::SapXepGiamDan() {
    sort(arr.begin(), arr.end(), greater<int>());
}
