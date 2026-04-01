#include <iostream>
#include "lab_21.h"
using namespace std;

void NgayThangNam::Nhap() {
    cin >> iNgay >> iThang >> iNam;
}

void NgayThangNam::Xuat() {
    cout << iNgay << " " << iThang << " " << iNam;
}

// hàm kiểm tra năm nhuận
bool NgayThangNam::NamNhuan(int nam) {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// hàm xem số ngày trong tháng
int NgayThangNam::SoNgayTrongThang(int thang, int nam) {
    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return NamNhuan(nam) ? 29 : 28;
        default:
            return 0;
    }
}


// hàm tính ngày tháng năm tiếp theo
void NgayThangNam::NgayThangNamTiepTheo() {
    iNgay++;

    if (iNgay > SoNgayTrongThang(iThang, iNam)) {
        iNgay = 1;
        iThang++;

        if (iThang > 12) {
            iThang = 1;
            iNam++;
        }
    }
}
