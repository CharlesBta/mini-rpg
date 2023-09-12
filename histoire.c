#include <stdlib.h>
#include <stdio.h>
#include "Combat.c"


int startadventure ; {
printf("Vous êtes un chasseur de prime réputé pour votre détermination. Etant enfant, votre petite soeur s'est faite enlevée par le montre $. Depuis, votre seul but est de venger votre soeur et protéger le village.\n");
printf("Choisissez un pseudo : \n") ;
scanf("%c",&);
printf("Maintenant, choisissez une classe. Si vous préférez combattre avec vos poings, prenez la classe rapprochée 'R'. Si vous adorez utiliser un arc, choisissez la classe distance 'D': \n") ;
scanf("%c",&);
printf("Vous voilà donc prêt à combattre !\n") ;

}


int middle () {
    char result;
    result = combat (struct classe player, struct classe mob);
    printf("Voila, je viens de trouver le repère de $\n");
    printf("Ahah, il m a envoye ses chiens de garde en guise d echauffement\n");


    if (result == 0) {
        printf("J ai enfin reussi le premier niveau \n");
    }  else if (result == 1) {
        printf("Vous etes mort, Veuillez reessayer \n");
    }

    printf("Cette fois ci ils ont l air plus experimente et ils sont plus nombreux \n");


    if (result == 0){
        printf("C etait epuisant mais j ai reussi a gagner contre tout le monde \n");
    } else if (result == 1){
        printf("Vous etes mort, Veuillez reessayer \n");
    }


    printf("Te voila enfin $ je t attendais depuis tout ce temps, j ai attendu ce combat toute ma vie\n");
    return 0;
}


int end() {
    char result;
    result = combat(struct classe player, struct classe mob);
    if (result == 0) {
        printf("Bravo, vous avez vaincu le Boss final.\n");
        printf("Après toutes ces années de travail acharné et d'entrainement.\n J'ai enfin réussi a venger ma soeur.");
    } else if (result == 1) {
        printf("Vous êtes mort.\n");
    }
}