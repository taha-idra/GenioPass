#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Project: GenioPass
// Description: Generates strong, random passwords.
// Author: Taha Idra
// Version: 0.1

int main() {
    int passwordLength = 12; // طول كلمة المرور الافتراضي
    const char charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+=-`~\{}|;':\",./<>?";
    int charsetSize = sizeof(charset) - 1;

    srand(time(NULL)); // تهيئة مولد الأرقام العشوائية

    printf("كلمة المرور المولدة: ");
    for (int i = 0; i < passwordLength; i++) {
        int randomIndex = rand() % charsetSize;
        printf("%c", charset[randomIndex]);
    }
    printf("\n");

    return 0;
}
