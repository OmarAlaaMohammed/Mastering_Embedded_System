#include <stdio.h>

int asciiArrayToUnsignedInt(const char *);

int main() {

    char asciiArray[] = "12045";

    unsigned int result = asciiArrayToUnsignedInt(asciiArray);

    printf("Converted value: %u\n", result);

    return 0;
}

int asciiArrayToUnsignedInt(const char *asciiArray) {
    unsigned int result = 0;

    for (int i = 0; asciiArray[i] != '\0'; i++) {
        result = result * 10 + (asciiArray[i] - '0');
    }

    return result;
}