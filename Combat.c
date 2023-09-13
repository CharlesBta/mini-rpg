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
<<<<<<< HEAD
char combat();

struct Joueur {
    int pointsDeVie;
    int attaque;
    int esquive;
};
=======
=======
// 0 victoire joueur 1 defaite joueur
>>>>>>> e89c0cc966681be777ed3a0ca696f4e348abeaef
char combat(struct classe player, struct classe mob){
    if (state(struct classe player, struct classe mob)==2){
        dmgP(struct classe player, struct classe mob);
        if (state(struct classe player, struct classe mob)==2) {
            dmgM(struct classe mob, struct classe player);
            return combat(struct classe player, struct classe mob);
        }
    }else if (state(struct classe player, struct classe mob)==0) return 1;
    else if (state(struct classe player, struct classe mob)==1) return 0;
}
>>>>>>> 936c5ea9c60e3f9dd9521f773321573745fb5cf9
