#ifndef LAB_21.H
#define LAB_21.H

class NgayThangNam {
private:
    int iNgay, iThang, iNam;

public:
    void Nhap();
    void Xuat();
    bool NamNhuan(int nam);
    int SoNgayTrongThang(int thang, int nam);
    void NgayThangNamTiepTheo();
};

#endif
