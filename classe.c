#include <stdio.h>

struct classe {
    char Distance;
    char Rapproche;
    char Boss;
    char degats;
    char vie_max;

};
int main() {
    struct classe init;
    init.Distance = 'D';
    init.Rapproche = 'R';
    init.Boss = 'B';
    init.degats = 1;
    init.vie_max = 10;

    return 0;
}
