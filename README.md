# mini-rpg

1. Classe -> struc
   - Nom -> char
    - Type -> char -> Distance : D / Rapproché : R / Boss : B
    - Degats -> char
    - VieMax -> char 0-10
   
2. pers -> struc
   - Classe
   - Pseudo -> char
   - Vie -> char

3. Enemie(s) -> struc
   - Classe
   - Nom -> char
   - Vie -> char

4. Combat
   - Degats -> char function(classe pers, classe Enemie)
   - Esquive -> char function(classe pers, classe Enemie)
   - Etat -> char function(struc pers, struc Enemie) return vivant/mort
  
   - 0 si victoire joeur / 1 si defaite pers
   
5. Histoire
