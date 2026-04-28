#include <string>
using namespace std;

class cNhanVienSX {
private:
    string maNV;
    string hoTen;
    string ngaySinh; // dạng dd/mm/yyyy
    int soSP;
    double donGia;

public:
    cNhanVienSX();
    void Nhap();
    void Xuat() const;
    double TinhLuong() const;
    int GetTuoi() const;
};


