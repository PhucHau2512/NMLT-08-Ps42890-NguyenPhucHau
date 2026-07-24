#include <stdio.h>
#include <math.h>

// Khai bao cac ham chức nang
void chucNang1();
void chucNang2();
void chucNang3();

int main() {
    int chon;
    do {
        printf("\n================ MENU CHUONG TRINH ================\n");
        printf("1. Tinh hoc luc sinh vien\n"                            );
        printf("2. Giai phuong trinh bac hai tong quat\n"               );
        printf("3. Tinh tien dien tieu thu hang thang\n"                );
        printf("0. Thoat chuong trinh\n"                                );
        printf("====================================================\n");
        printf("Chon chuc nang (0-3): "                                );
        scanf("%d", &chon);

        switch (chon) {
            case 1:
                chucNang1();
                break;
            case 2:
                chucNang2();
                break;
            case 3:
                chucNang3();
                break;
            case 0:
                printf("Da thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (chon != 0);

    return 0;
}

// Full dinh nghia các hàm
void chucNang1() {
    float diem;
    printf("\n--- CHUC NANG 1: TINH HOC LUC SINH VIEN ---\n");
    printf("Nhap diem cua sinh vien (0.0 - 10.0): ");
    scanf("%f", &diem);

    if (diem < 0.0 || diem > 10.0) {
        printf("Diem so nhap vao khong hop le!\n");
    } else {
        if (diem >= 9.0) {
            printf("Hoc luc: Xuat sac\n");
        } else if (diem >= 8.0) {
            printf("Hoc luc: Gioi\n");
        } else if (diem >= 6.5) {
            printf("Hoc luc: Kha\n");
        } else if (diem >= 5.0) {
            printf("Hoc luc: Trung binh\n");
        } else if (diem >= 3.5) {
            printf("Hoc luc: Yeu\n");
        } else {
            printf("Hoc luc: Kem\n");
        }
    }
}

void chucNang2() {
    float a, b, c;
    printf("\n--- CHUC NANG 2: GI AI PHUONG TRINH BAC HAI ---\n");
    printf("Nhap he so a, b, c (cach nhau bang dau cach): ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", -c / b);
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem rieng biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}

void chucNang3() {
    float kwh;
    double tongTien = 0;

    printf("\n--- CHUC NANG 3: TINH TIEN DIEN LUI TIEN ---\n");
    printf("Nhap tong so kWh dien tieu thu trong thang: ");
    scanf("%f", &kwh);

    if (kwh < 0) {
        printf("So kWh nhap vao phai la so duong!\n");
        return;
    }

    if (kwh <= 50) {
        tongTien = kwh * 1678;
    } else if (kwh <= 100) {
        tongTien = 50 * 1678 + (kwh - 50) * 1734;
    } else if (kwh <= 200) {
        tongTien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    } else if (kwh <= 300) {
        tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    } else if (kwh <= 400) {
        tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    } else {
        tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    printf("Tong so tien dien phai tra: %.0f VNĐ\n", tongTien);
}