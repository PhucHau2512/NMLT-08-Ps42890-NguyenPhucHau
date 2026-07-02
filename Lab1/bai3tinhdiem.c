#include <stdio.h>

int main() {
    // Khai báo các biến
    char mssv[20];
    char hoTen[50];
    float diemToan, diemLy, diemHoa, diemTrungBinh;

    // Nhập dữ liệu từ bàn phím
    printf("Nhap Ma so sinh vien: ");
    scanf("%s", mssv);
    
    // Xóa bộ nhớ đệm để tránh lỗi khi nhập chuỗi có khoảng trắng tiếp theo
    while (getchar() != '\n'); 

    printf("Nhap Ho va Ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);
    
    // Loại bỏ ký tự xuống dòng '\n' do fgets tự động thêm vào cuối chuỗi
    for (int i = 0; hoTen[i] != '\0'; i++) {
        if (hoTen[i] == '\n') {
            hoTen[i] = '\0';
            break;
        }
    }

    printf("Nhap Diem Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap Diem Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap Diem Hoa: ");
    scanf("%f", &diemHoa);

    // Tính điểm trung bình theo công thức
    diemTrungBinh = (diemToan * 2 + diemLy + diemHoa) / 4;

    // Xuất dữ liệu ra màn hình theo đúng định dạng yêu cầu
    printf("\n--- KET QUA ---\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh); // Làm tròn 2 chữ số thập phân

    return 0;
}