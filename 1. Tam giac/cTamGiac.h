#include <string>
using namespace std;

class cTamGiac {
private:
    double xA, yA;
    double xB, yB;
    double xC, yC;

    double KhoangCach(double x1, double y1, double x2, double y2);

public:
    void Nhap();
    void Xuat();
    string KiemTraLoai();
    double ChuVi();
    double DienTich();
    void TinhTien(double dx, double dy);
    void PhongTo(double k);
    void ThuNho(double k);
};


