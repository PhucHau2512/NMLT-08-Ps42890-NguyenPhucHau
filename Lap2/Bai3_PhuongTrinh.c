#include <stdio.h>

int main() {
    // Khai báo hai hệ số a và b là số nguyên (int)
    int a, b;

    // Nhập dữ liệu từ bàn phím
    printf("Nhap he so a (a khac 0): ");
    scanf("%d", &a);

    printf("Nhap he so b: ");
    scanf("%d", &b);

    // Kỹ thuật ép kiểu: Chuyển -b sang kiểu double trước khi chia cho a
    // Việc này giúp kết quả phép chia luôn chính xác là số thập phân
    double nghiemX = (double)(-b) / a;

    // Xuất nghiệm x ra màn hình, làm tròn 2 chữ số sau dấu phẩy
    printf("Nghiem cua phuong trinh la x = %.2f\n", nghiemX);

    return 0;
}