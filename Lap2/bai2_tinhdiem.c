#include <stdio.h>

int main() {
    // Khai báo biến điểm số là số nguyên (int)
    int toan, ly, hoa;

    // Nhập dữ liệu từ bàn phím bằng hàm scanf trong C
    printf("Nhap diem mon Toan: ");
    scanf("%d", &toan);
    
    printf("Nhap diem mon Ly: ");
    scanf("%d", &ly);
    
    printf("Nhap diem mon Hoa: ");
    scanf("%d", &hoa);

    // Kỹ thuật ép kiểu trong C: 
    // Ép kiểu tổng điểm sang (double) trước khi chia cho 6 để không bị mất phần thập phân
    double diemTrungBinh = (double)(toan * 3 + ly * 2 + hoa) / 6;

    // Hiển thị kết quả làm tròn 2 chữ số sau dấu phẩy bằng định dạng %.2f
    printf("Diem trung binh cua ban la: %.2f\n", diemTrungBinh);

    return 0;
}