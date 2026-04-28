#include <vector>

class cArray {
private:
    int n;
    std::vector<int> arr;

    bool LaNguyenTo(int x) const;

public:
    cArray();
    void Nhap(int size);
    void Xuat() const;
    int Dem(int x) const;
    bool KiemTraTangDan() const;
    int PhanLeNhoNhat() const;
    int SoNguyenToLonNhat() const;
    void SapXepTangDan();
    void SapXepGiamDan();
};

