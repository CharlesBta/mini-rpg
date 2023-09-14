struct pers{
    char type;
    char pseudo;
    char vie;
    char dmg;
};

struct ene{
    char type;
    char vie;
    char dmg;
};
struct pers Player;
struct ene Mob;

void maj(char nom, char spec){
    Player.type = spec;
    Player.pseudo = nom;
    Player.vie = 10;
    Player.dmg = 1;
}

void creat_pers(char spec){
    Mob.type = spec;
    Mob.vie = 10;
    Mob.dmg = 1;
}
