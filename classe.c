struct joueur{
    char type;
    char pseudo;
    char vie;
    char dmg;
};

struct ennemie{
    char type;
    char vie;
    char dmg;
};

struct joueur player;
char maj(char nom, char classe){
    player.type = classe;
    player.pseudo = nom;
    player.vie = 10;
    player.dmg = 1;
    return 0;
}

struct ennemie mob;
char creat_pers(char classeMob){
    mob.type = classeMob;
    mob.vie = 10;
    mob.dmg = 1;
    return 0;
}