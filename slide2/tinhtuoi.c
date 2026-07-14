#include <stdio.h>
int main() {
    int namsinh;
    printf("Nhap nam sinh: ");
    scanf("%d", &namsinh);
    printf("namsinh: %d, tuoi: %d\n", namsinh, 2026 - namsinh);
    return 0;
}