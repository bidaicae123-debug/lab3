#include <vector>

class cDaThuc {
private:
    int bac;
    std::vector<double> hs; // hệ số từ bậc cao xuống thấp

public:
    cDaThuc();
    cDaThuc(int b);

    void Nhap();
    void Xuat() const;
    double GiaTri(double x) const;
    cDaThuc Cong(const cDaThuc& dt) const;
    cDaThuc Tru(const cDaThuc& dt) const;
};


