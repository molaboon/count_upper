#include <stdio.h>

int countUpper(char* str) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z') {
                count++;
            }
        }
        i++;
    }

    return count;
}

int main(int argc, char *argv[]) {
    char str[] = argv[1];
    int result = countUpper(str);
    
    printf("大寫字元後面有小寫字元的個數: %d\n", result);

    return 0;
}