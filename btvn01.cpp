#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], cleaned[100];
    int i, j = 0, len;

    printf("Nhap chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            cleaned[j++] = tolower(str[i]);
        }
    }
    cleaned[j] = '\0';

    len = strlen(cleaned);
    int isPalindrome = 1;
    for (i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("La palindrome\n");
    else
        printf("Không phai la palindrome\n");

    return 0;
}
