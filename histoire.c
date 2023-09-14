#include <stdlib.h>
#include <stdio.h>
#include "Combat.c"
#include "type.c"


char pseudo;
char spec;

int start () {
printf("Vous êtes un chasseur de prime réputé pour votre détermination. Etant enfant, votre petite soeur s'est faite enlevée par le montre $. Depuis, votre seul but est de venger votre soeur et protéger le village.\n");
printf("Choisissez un pseudo (une seule lettre) : \n") ;
scanf("%c",&pseudo);
getchar();
printf("Maintenant, choisissez une spec. Si vous préférez combattre avec vos poings, prenez la spec rapprochée 'R'. Si vous adorez utiliser un arc, choisissez la spec distance 'D': \n") ;
scanf("%c",&spec);
getchar();
printf("Vous voilà donc prêt à combattre !\n") ;

}

int middle () {
    char result;
    //result = combat (struct spec player, struct spec mob);
    printf("Voilà, je viens de trouver le repère de $\n");
    printf("Ahah, il m'a envoyé ses chiens de garde en guise d'échauffement\n");


    if (result == 0) {
        printf("J'ai enfin réussi le premier niveau !\n");
    }  else if (result == 1) {
        printf("Vous êtes mort.\n");
        return 1 ;
    }

    printf("Cette fois ci ils ont l'air plus expérimentés et ils sont plus nombreux. \n");


    if (result == 0){
        printf("C'était épuisant mais j'ai réussi à gagner contre tout le monde ! \n");
    } else if (result == 1){
        printf("Vous êtes mort.\n");
        return 1 ;
    }

    printf("Te voilà enfin $ ! Je te cherchais depuis tout ce temps, j'ai attendu ce combat toute ma vie !\n");
}


int end() {
    char result;
    //result = combat(struct spec player, struct spec mob);
    if (result == 0) {
        printf("Bravo, vous avez vaincu le Boss final.\n");
        printf("Après toutes ces années de travail acharné et d'entrainement.\n J'ai enfin réussi à venger ma soeur.");
    } else if (result == 1) {
        printf("Vous êtes mort.\n");
        return 1 ;
    }
}