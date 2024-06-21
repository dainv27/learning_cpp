#include <stdio.h>

#define MAX_SIZE 1000

int main() {
    char str[MAX_SIZE];

    printf("Nhap vao chuoi: ");
    fgets(str, MAX_SIZE, stdin);
    printf("Chuoi vua nhap vao la: %s\n", str);

    unsigned long length = 0;
    while (str[length] != '\0') {
       length++;
    }
    printf("Chuoi vua nhap vao co do dai la: %ld\n", length);

    return 0;
}