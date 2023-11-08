#include <stdio.h>

int main() {
    int n, sum = 0, reverse = 0;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &n);

    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    printf("Tong cac chu so cua so nguyen la: %d\n", sum);
    printf("So nghich dao cua so nguyen la: %d\n", reverse);

    return 0;
}
