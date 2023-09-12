# mini-rpg

1. Classe -> struc
   - Nom -> char
    - Type -> char -> Distance : D / Rapproché : R / Boss : B
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
  
   - 0 si victoire joeur / 1 si defaite joueur
   
5. Histoire
