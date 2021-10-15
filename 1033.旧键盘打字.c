#include <stdio.h>
#include <string.h>
int main() {
    char badChar[128];
    char input[100001];

    scanf("%s", badChar);
    scanf("%s", input);

    int bad[128] = {0};
	int badLen = strlen(badChar);
	int inputLen = strlen(input);
    for (int j = 0; j < badLen; j++) {
        if (badChar[j] >= 'A' && badChar[j] <= 'Z') {
            bad[badChar[j]] = 1;
            bad[badChar[j] + 32] = 1;
        } else if (badChar[j] >= 'a' && badChar[j] <= 'z') {
            bad[badChar[j]] = 1;
            bad[badChar[j] - 32] = 1;
        } else {
            bad[badChar[j]] = 1;
        }
    }


    for (int i = 0; i < inputLen; i++) {
        if (bad[input[i]]) {
            continue;
        } else if (bad['+'] && input[i] >= 'A' && input[i] <= 'Z') {
            continue;
        } else {
            putchar(input[i]);
        }
    }

    return 0;
}
