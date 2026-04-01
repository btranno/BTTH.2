#include <iostream>
#include "lab_24.h"
using namespace std;

int main() {
    GioPhutGiay t;

    cout << "Nhap gio phut giay: ";
    t.Nhap();

    cout << "Thoi gian ban dau: ";
    t.Xuat();

    t.TinhCongThemMotGiay();

    cout << "\nSau khi cong 1 giay: ";
    t.Xuat();

    return 0;
}
