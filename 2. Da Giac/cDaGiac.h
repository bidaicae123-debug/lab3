#include <vector>

struct Point {
    float x;
    float y;
};

class cDaGiac {
private:
    int n;                     // số đỉnh
    std::vector<Point> dsDinh; // danh sách các đỉnh

public:
    cDaGiac();                          // constructor mặc định
    void Nhap();
    void Xuat() const;
    float ChuVi() const;
    float DienTich() const;
    void TinhTien(float dx, float dy);
    void PhongTo(float k);
    void ThuNho(float k);
};


