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
    rand()
}

char state(struct classe player, struct classe mob){
    ettere
}

char combat();

struct Joueur {
    int pointsDeVie;
    int attaque;
    int esquive;
};