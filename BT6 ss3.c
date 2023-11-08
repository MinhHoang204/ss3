#include <stdio.h>

int main() {
    int birth_year, age;

    printf("Nhap nam sinh cua ban: ");
    scanf("%d", &birth_year);

    age = 2023 - birth_year;

    printf("Tuoi cua ban la: %d\n", age);

    if (age % 2 == 0) {
        printf("Tuoi cua ban la mot so chan.\n");
    } else {
        printf("Tuoi cua ban la mot so le.\n");
    }

    return 0;
}
