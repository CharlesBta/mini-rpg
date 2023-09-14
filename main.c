#include <stdio.h>
#include "histoire.c"
#include "type.c"


int main() {
    printf("Hello world\n");
    start();
    maj(pseudo,classe);
    printf("%c",Player.type);
    return 0;
}
