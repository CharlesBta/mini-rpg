#include <stdlib.h>

char dmgP(struct classe player, struct classe mob){

}

char dmgM(struct classe mob, struct classe player){

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

char combat(struct classe player, struct classe mob){
    
}
