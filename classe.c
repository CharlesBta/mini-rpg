#include <stdio.h>

struct classe {
    char Nom;
    char degats;
    char vie_max;

};
int main() {
    struct classe distance;
    distance.Nom = 'D';
    distance.degats = 1;
    distance.vie_max = 10;

    struct classe rapproche;
    distance.Nom = 'R';
    distance.degats = 1;
    distance.vie_max = 10;

    struct classe boss;
    distance.Nom = 'B';
    distance.degats = 1;
    distance.vie_max = 10;

    return 0;
}
