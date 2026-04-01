#ifndef LAB_23.H
#define LAB_23.H

class SoPhuc {
private:
    double iThuc, iAo;

public:
    void Nhap();
    void Xuat();

    SoPhuc Tong(SoPhuc b);
    SoPhuc Hieu(SoPhuc b);
    SoPhuc Tich(SoPhuc b);
    SoPhuc Thuong(SoPhuc b);
};
#endif // LAB_23
