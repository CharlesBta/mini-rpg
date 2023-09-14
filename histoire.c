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

    maj(pseudo, spec);

}

int middle () {
    char result;
    printf("Voila, je viens de trouver le repère de $\n");
    printf("Ahah, il m a envoye ses chiens de garde en guise d echauffement\n");


    printf("Je vais attaquer le premier, en combat rapproche \n");
    creat_pers('R');
    result = combat();
    if (result == 1){
        printf("Vous etes mort. \n");
    }

    printf("J'ai meme pas le temps de me reposer que le deuxieme arrive deja \n Oh c'est un archer\n");
    creat_pers('D');
    result = combat ();
    if (result == 1){
        printf("Vous etes mort. \n");
    }

    if (result == 0) {
        printf("J ai enfin reussi le premier niveau \n");
    }  else if (result == 1) {
        printf("Vous etes mort. \n");
    }

    printf("Cette fois ci ils ont l air plus experimente et ils sont plus nombreux \n");

    printf("Je vais les combattre un par un, et je vais commencer par toi au corps a corps\n");
    creat_pers('R');
    result = combat();
    if (result == 1){
        printf("Vous etes mort. \n");
    }

    printf("Pour ensuite enchainer avec toi pour que tu es le meme sort que le premier \n");
    creat_pers('R');
    result = combat();
    if (result == 1){
        printf("Vous etes mort. \n");
    }

    printf("Et finir par toi sale archer \n");
    creat_pers('D');
    result = combat ();
    if (result == 1){
        printf("Vous etes mort. \n");
    }

    if (result == 0){
        printf("C etait epuisant mais j ai reussi a gagner contre tout le monde \n");
    } else if (result == 1){
        printf("Vous etes mort. \n");
    }


    printf("Te voila enfin $ je t attendais depuis tout ce temps, j ai attendu ce combat toute ma vie\n");
    return 0;
}


int end() {
    char result;

    creat_pers('B');
    result = combat();

    if (result == 0) {
        printf("Bravo, vous avez vaincu le Boss final.\n");
        printf("Après toutes ces années de travail acharné et d'entrainement.\n J'ai enfin réussi à venger ma soeur.");
    } else if (result == 1) {
        printf("Vous êtes mort.\n");
        return 1 ;
    }
}