#include <stdlib.h>

char dmgP(struct classe player, struct classe mob){// D distance R rapproché et B boss

    if (dodge(struct classe player, struct classe mob) == 0){
        return 0;
    }
    else

    if (mob.type == 'D' && player.type == 'R'){
        mob.life -= player.dmg*2;
    }else if (mob.type == 'D' && player.type == 'D'){
        mob.life -= player.dmg;
    }else if (mob.type == 'R' && player.type == 'D'){
        mob.life -= player.dmg*3;
    }
    else if (mob.type == 'B'){
        mob.life -= player.dmg;
    }
    return mob.life;

}

char dmgM(struct classe mob, struct classe player){

    if(player.type == 'D' && mob.type == 'R'){
        player.life -= mob.dmg*;
    }else if (player.type == 'R'){
        player.life -= mob.dmg;
    }
}

char dodge(struct classe player, struct classe mob){
    float Pluck, Mluck;

    if(player.type == 'D') Pluck = 80;
    else if(player.type == 'R') Pluck = 60;

    if(mob.type == 'D') Mluck = 35;
    else if(mob.type == 'R') Mluck = 10;
    else if(mob.type == 'B') Mluck = 60;

    int totalLuck = Pluck - Mluck;
    int random =  rand() % 100;

    if(totalLuck > random) return 0;
    else return 1;
}

char state(struct classe player, struct classe mob){
    if(player.vie == 0)return 0;
    if(mob.vie==0)return 1;
    return 2;
}

<<<<<<< HEAD
char combat();

struct Joueur {
    int pointsDeVie;
    int attaque;
    int esquive;
};
=======
char combat(struct classe player, struct classe mob){
    dmgP()
    if (state(struct classe player, struct classe mob)!=2) {
        
    }
}
>>>>>>> 936c5ea9c60e3f9dd9521f773321573745fb5cf9
