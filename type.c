struct pers{
    char type;
    char pseudo;
    int vie;
    int dmg;
};

struct ene{
    char type;
    int vie;
    int dmg;
};

struct pers Player;
struct ene Mob;

void maj(char nom, char spec){
    Player.type = spec;
    Player.pseudo = nom;
    Player.vie = 30;
    Player.dmg = 1;
}

void creat_mob(char spec){
    Mob.type = spec;
    if (spec == 'B') Mob.vie = 15;
    else Mob.vie = 10;
    Mob.dmg = 1;
}
