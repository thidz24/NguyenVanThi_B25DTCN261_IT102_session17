#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    int choice;
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("\n----- MENU -----\n");
    printf("1. In chuoi voi tat ca ky tu viet HOA\n");
    printf("2. In chuoi voi tat ca ky tu viet thuong\n");
    printf("Nhap lua chon (1 hoac 2): ");
    scanf("%d", &choice);
    if (choice == 1) {
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = toupper(str[i]);
        }
        printf("\nChuoi viet hoa: %s\n", str);
    } 
    else if (choice == 2) {
        for (int i = 0; str[i] != '\0'; i++) {
            str[i] = tolower(str[i]);
        }
        printf("\nChuoi viet thuong: %s\n", str);
    } 
    else {
        printf("\nLua chon khong hop le!\n");
    }
    return 0;
}
