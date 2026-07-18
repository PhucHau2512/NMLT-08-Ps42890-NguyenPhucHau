#include <stdio.h>
int main() {
    float diem;
    printf("nhap diem: ");
    scanf("%f", &diem);
    if (diem >= 5.0) {
        printf("Dau\n");
    } else {
        printf("Rot\n");
    }
    
    //xep loai
    //0 <= yeu < 5 <= TB < 6.5 <= kha < 8 <= gioi <= 10
    // diem nam trong 0-10
    if (diem>=8) {
        printf("Gioi\n");
    } else if (diem>=6.5) {
        printf("Kha\n");
    } else if (diem>=5) {
        printf("Trung binh\n");
    } else {
        printf("Yeu\n");
    }
    return 0;
}