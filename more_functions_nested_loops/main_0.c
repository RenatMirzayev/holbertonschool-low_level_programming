#include <stdio.h>
#include "main.h"  /* Make sure this includes the prototype for _isdigit*/

int main(void) {
    char c = '5';
    if (_isdigit(c)) {
        printf("%c is a digit.\n", c);
    } else {
        printf("%c is not a digit.\n", c);
    }
    return 0;
}
