#include <stdio.h>
#define PI 3.14159
const float PII = 3.14159;
int main() {
    //Nhap dai, rong tinh chu vi, dien tich hcn
    float dai, rong, chuViHCN, dienTichHCN,r ,chuViHT, dienTichHT;
    printf("Nhap chieu dai, chieu rong: ");
    scanf("%f%f", &dai, &rong);
    chuViHCN = (dai + rong) * 2;
    dienTichHCN = dai * rong;
    printf("Hinh Chu Nhat\nDai: %.2f\nRong: %.2f\nChu vi: %.2f\nDien tich: %.2f\n", dai, rong, chuViHCN, dienTichHCN);

    printf("Nhap ban kinh: ");
    scanf("%f", &r);
    chuViHT = 2 * PII * r;
    dienTichHT = PI * r * r;
    printf("Hinh tron:\nBan kinh: %.2f\nChu vi: %.2f\nDien tich: %.2f\n", r, chuViHT, dienTichHT);
    return 0;
}