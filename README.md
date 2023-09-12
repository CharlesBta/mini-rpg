# mini-rpg

1. Classe -> struc
   - Distance -> struc
    - Nom -> char
    - Degats -> char
    - VieMax -> char 0-10
   
2. Joueur -> struc
   - Classe
   - Pseudo -> char
   - Vie -> char

3. Enemie(s) -> struc
   - Classe
   - Nom -> char
   - Vie -> char

4. Combat
   - Degats -> char function(classe Joueur, classe Enemie)
   - Esquive -> char function(classe Joueur, classe Enemie)
   - Etat -> char function(struc Joueur, struc Enemie) return vivant/mort
   
5. Histoire
