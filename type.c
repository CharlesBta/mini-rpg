struct pers{
    char type;
    char pseudo;
    char vie;
    char dmg;
};

struct pers Player;

void maj(char nom, char spec){
    Player.type = spec;
    Player.pseudo = nom;
    Player.vie = 10;
    Player.dmg = 1;
}
