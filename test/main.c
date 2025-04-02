// Do not modify
#include <stdio.h>

bool isValidString(const char *str);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <word>\n", argv[0]);
        return 0;
    }

    printf("%d\n", isValidString(argv[1]));

    return 0;
}
