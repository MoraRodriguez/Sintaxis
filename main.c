#include "scanner.h"
#include "scanner.c"

char c;
int main() {
    while((c = getchar()) != EOF) {
        get_token(c);
    } if (c==EOF) {
        printf("\nfin de texto\n");
    }
    return 0;
}