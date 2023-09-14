#include <stdlib.h>
#include "type.c"

// 0 si esquive
int DodgeP(){
    float Pluck, Mluck;

    if(Player.type == 'D') Pluck = 70;
    else if(Player.type == 'R') Pluck = 60;

    if(Mob.type == 'D') Mluck = 35;
    else if(Mob.type == 'R') Mluck = 10;
    else if(Mob.type == 'B') Mluck = 60;

    int totalLuck = Pluck - Mluck;
    int random =  rand() % 100;

    if(totalLuck > random) return 0;
    else return 1;
}
int DodgeM(){
    float Pluck, Mluck;

    if(Player.type == 'D') Pluck = 35;
    else if(Player.type == 'R') Pluck = 10;

    if(Mob.type == 'D') Mluck = 30;
    else if(Mob.type == 'R') Mluck = 30;
    else if(Mob.type == 'B') Mluck = 60;

    int totalLuck = Mluck-Pluck;
    int random =  rand() % 100;

    if(totalLuck > random) return 0;
    else return 1;
}

void dmgP(){// D distance R rapproché et B boss
    if (!DodgeM()) return; else{
        if (Mob.type == 'D' && Player.type == 'R') {
            Mob.vie -= Player.dmg * 2;
            return;
        } else if (Mob.type == 'D' && Player.type == 'D') {
            Mob.vie -= Player.dmg;
            return;
        } else if (Mob.type == 'R' && Player.type == 'D') {
            Mob.vie -= Player.dmg * 3;
            return;
        } else if (Mob.type == 'B') {
            Mob.vie -= Player.dmg;
            return;
        } else if (Mob.type == 'R' && Player.type == 'R') {
            Mob.vie -= Player.dmg;
            return;
        }
    }
}

void dmgM(){
    if (!DodgeP()){
        return;
    }else {
        if (Player.type == 'D' && Mob.type == 'R') {
            Player.vie -= Mob.dmg * 2;
            return;
        } else if (Player.type == 'R' && Mob.type == 'D') {
            Player.vie -= Mob.dmg*2;
            return;
        }else if (Player.type == 'R' && Mob.type == 'R'){
            Player.vie -= Mob.dmg;
            return;
        }else if (Player.type == 'D' && Mob.type == 'D'){
            Player.vie -= Mob.dmg;
            return;
        }else if (Mob.type == 'B'){
            Player.vie -= Mob.dmg;
            return;
        }
    }
}



char state(){
    if(Player.vie <= 0)return 1;
    if(Mob.vie<=0)return 0;
    return 2;
}



int combat(){
    int tmp;
    int tmp_life;
    if (state()==2){
        printf("Joueur :%d, Mob :%d\n",Player.vie, Mob.vie);
        printf("1. attaquer :\n");
        scanf("%d", &tmp);
        getchar();
        if(tmp==1){
            dmgP();
            if (state()==2){
                printf("Votre enemie attaque\n");
                tmp_life = Player.vie;
                dmgM();
                if (Player.vie == tmp_life) printf("Vous avez esquivé \n");
                return combat();
            }
        }
    }
    else if (state()==0) {return 0;}
    else if (state()==1) {return 1;}
}