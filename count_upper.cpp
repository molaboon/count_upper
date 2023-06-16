#include <stdio.h>
#include <string.h>

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

int main() {
    char str[100] = "";
    int result;

    scanf("%[^\n]", str);
 
    result = countUpper(str); 
    printf("\n%d\n", result);

    return 0;
}
