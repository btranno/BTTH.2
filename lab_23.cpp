#include <iostream>
#include "lab_23.h"
using namespace std;

void SoPhuc::Nhap() {
    cin >> iThuc >> iAo;
}

void SoPhuc::Xuat() {
    if (iAo >= 0)
        cout << iThuc << " + " << iAo << "i";
    else
        cout << iThuc << " - " << -iAo << "i";
}
/* giả sử số phức là: z1​=a+bi,z2​=c+di
Cộng số phức
𝑧1 + z2 =(a+c)+(b+d)i

Trừ số phức
𝑧1 - z2 =(a−c)+(b−d)i


Nhân số phức
𝑧1 x z2 =(ac−bd)+(ad+bc)i


 Chia số phức
z1 / z2 = ((ac+bd)+(bc−ad)i) / ( cc + dd )
*/
SoPhuc SoPhuc::Tong(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc + b.iThuc;
    kq.iAo = iAo + b.iAo;
    return kq;
}

SoPhuc SoPhuc::Hieu(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc - b.iThuc;
    kq.iAo = iAo - b.iAo;
    return kq;
}

SoPhuc SoPhuc::Tich(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc * b.iThuc - iAo * b.iAo;
    kq.iAo   = iThuc * b.iAo + iAo * b.iThuc;
    return kq;
}

SoPhuc SoPhuc::Thuong(SoPhuc b) {
    SoPhuc kq;
    double mau = b.iThuc * b.iThuc + b.iAo * b.iAo;

    kq.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / mau;
    kq.iAo   = (iAo * b.iThuc - iThuc * b.iAo) / mau;

    return kq;
}

