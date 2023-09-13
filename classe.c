#include <stdlib.h>

struct pers{
    char type;
    char pseudo;
    char vie;
    char dmg;
};

struct mob{
    char type;
    char vie;
    char dmg;
};

struct pers player;
int maj(char nom, char spec){
    player.type = spec;
    player.pseudo = nom;
    player.vie = 10;
    player.dmg = 1;
    return 0;
}

struct mob mob;
int creat_pers(char spec){
    mob.type = spec;
    mob.vie = 10;
    mob.dmg = 1;
    return 0;
}