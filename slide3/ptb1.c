#include <stdio.h>
int main() {
    int a, b;
    float x;
    printf("nhap a,b: ");
    scanf("%d%d", &a, &b);
    if (a==0){
        if (b==0){
            printf("phuong trinh co vo so nghiem.\n");
        } else {
            printf("phuong trinh vo nghiem.\n");
        }
    } else {
        x = (float)(-b)/a;
        printf("phuong trinh %dx + %d = 0 co nghiem x = %.2f\n", a, b, x);
    }

    return 0;
}