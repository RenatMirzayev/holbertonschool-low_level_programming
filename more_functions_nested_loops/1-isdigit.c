#include <stdio.h>

int _isdigit(int c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char c = '5';
    if (_isdigit(c)) {
        printf("%c — это цифра.\n", c);
    } else {
        printf("%c — это не цифра.\n", c);
    }
    return 0;
}
