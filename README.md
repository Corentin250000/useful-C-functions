# USEFUL-C-FUNCTIONS

**⚠️ Si vous êtes étudiant _EPITECH_, N'UTILISEZ PAS ces fonctions, cela pourrait être considéré comme de la triche.**
> Je pense que récupérer un -84 sur votre projet pour ça, cela ne vaut pas le coup 😉.

**Cependant, si vous décidez d'utiliser ces fonctions, je me dédommage de toutes responsabilités si vous êtes pris la main dans le sac.**


### Les fonctions :

**Toutes les fonctions respectent le _coding style_ (PDF explicatif fourni dans son dossier à la racine) et ne présentent normalement aucune erreur _Valgrind_.**

**Chaque fonction (une par dossier) est accompagnée d'un dossier _includes_ contenant les fichiers .h de la fonction, ainsi d'un dossier _src_ contenant les fichiers sources (.c) de la fonction. _Petite précision, chaque fonction est indépendante des autres. Par exemple, deux fonctions identiques peuvent être réécrite (mystrlen par exemple)._**

> Si vous avez une ou plusieurs fonctions _bannies_ (que vous n'avez pas le droit d'utiliser dans votre projet), comme la fonction _stat_ ou _printf_, n'hésitez pas à verifier les fonctions avant de les utiliser.

> Un maximum de fonctions sont réécrites pour éviter ce problème (comme _mystrlen_).

1. **str_to_word_array :**

    - Prend en paramètres la chaîne de caractères comprenant les phrases que l'on veut séparer en mots, ainsi que la liste des caractères autorisés (les autres étant considérés comme des séparateurs de mots).

    - Elle retourne un tableau de chaînes de caractères comprenant tous les "mots" (un par chaîne de caractères).

    - Attention, la mémoire de la chaîne de caractères autorisés n'est pas libérée, ce sera à vous de la libérer.

2. **read_file :**

    - Lit un fichier donné (son chemin) et retourne une chaîne de caractères contenant le texte.

    - Si le programme, d'une quelconque façon, n'arrive pas à lire le fichier, il retournera le chemin donné en paramètre de la fonction.

    - Attention, puisque le programme utilise la structure _stat_ et la fonction _stat_ pour déterminer la taille de la mémoire à allouer, si _stat_ rencontre un problème ou que le fichier donné est vide, le programme renvoie le chemin donné en paramètre de la fonction.

3. **change_base :**

    - Change la base d'un nombre positif donné (base comprise entre 2 et 10).
    
    - _base10_to_inferior_base_ prend un nombre et une base, puis renvoie le résultat sous forme de chaîne de caractères.

    - _return_to_base10_ prend une chaîne de caractères (le nombre dans une certaine base) et la base en question, puis renvoie le nombre en base 10 sous forme d'entiers.

    - Attention, aucune gestion d'erreur n'est faite sur les paramètres donnés aux fonctions.

4. **int_to_char :**

    - Transforme un nombre entier positif non nul (unsigned int) en une chaîne de caractères (pour faire un affichage graphique en CSFML par exemple).

    - Attention, la fonction _int-to-char_ laisse des zéros au début du résultat si le nombre est inférieur à 1 000 000 000. C'est pourquoi il existe la fonction _remove-zeros_, qui retire les possibles zéros au début de la chaîne de caractères.
    
    - Attention, si vous avez quand même décidé de mettre 0 au départ et que vous passez votre résultat dans cette fonction (_remove-zeros_), vous n'obtiendrez qu'une chaîne vide.