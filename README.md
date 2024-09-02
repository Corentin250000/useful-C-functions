# USEFUL-C-FUNCTIONS

**⚠️ Si vous êtes étudiant _EPITECH_, N'UTILISEZ PAS ces fonctions, cela pourrait être considéré comme de la triche.**

> Je pense que récupérer un -84 sur votre projet pour ça, cela ne vaut pas le coup 😉.

**Cependant, si vous décidez d'utiliser ces fonctions, je me dédommage de toutes responsabilités si vous êtes pris la main dans le sac.**

-   -   -

### SOMMAIRE

- [Les fonctions](#les-fonctions)

- [str_to_word_array](#str_to_word_array)

- [read_file](#read_file)

- [change_base](#change_base)

- [int_to_char](#int_to_char)

- [my_atoi](#my_atoi)

- [strings_are_equals](#strings_are_equals)

## Les fonctions

**Toutes les fonctions respectent le _coding style_ (PDF explicatif fourni dans son dossier à la racine) et ne présentent normalement aucune erreur _Valgrind_.**

**Chaque fonction (une par dossier) est accompagnée d'un dossier _includes_ contenant les fichiers .h de la fonction, ainsi d'un dossier _src_ contenant les fichiers sources (.c) de la fonction. _Petite précision, chaque fonction est indépendante des autres. Par exemple, deux fonctions identiques peuvent être réécrite (_**`my_strlen` **_par exemple)._**

**De plus, chaque fonction est accompagnée d'un _Makefile_, permettant de compiler les tests unitaires des fonctions.**

> Si vous avez une ou plusieurs fonctions **_bannies_** (que vous n'avez pas le droit d'utiliser dans votre projet), comme la fonction `stat` ou `printf`, n'hésitez pas à verifier les fonctions avant de les utiliser.

> Un maximum de fonctions sont réécrites pour éviter ce problème (comme `my_strlen`).

1. ### str_to_word_array

    - **Prototype :** `char **my_str_to_word_array(char const *str, char *authorized);`

    - Prend en paramètres la chaîne de caractères comprenant les phrases que l'on veut séparer en mots, ainsi que la liste des caractères autorisés (les autres étant considérés comme des séparateurs de mots).

    - Elle retourne un tableau de chaînes de caractères comprenant tous les "mots" (un par chaîne de caractères).

    - Attention, la mémoire de la chaîne de caractères autorisés n'est pas libérée, ce sera à vous de la libérer.

2. ### read_file

    - **Prototype :** `char *read_file(char *path);`
    - **Prototype :** `char *read_stdin(void);`

    - Lit un fichier donné (son chemin) et retourne une chaîne de caractères contenant le texte (dossier **_file_**). Pour lire l'entrée standard, utiliser la fonction situé dans le dossier **_stdin_**.

    - Si le programme, d'une quelconque façon, n'arrive pas à lire le fichier, il retournera le chemin donné en paramètre de la fonction. S'il s'agit de l'entrée standard, il retournera `NULL`.

    - Attention, puisque le programme utilise la structure `stat` et la fonction `stat` pour déterminer la taille de la mémoire à allouer, si la fonction rencontre un problème ou que le fichier donné est vide, le programme renvoie le chemin donné en paramètre de la fonction.

3. ### change_base

    - Bases **inférieures** à 10 (dossier **_2_to_10_**) :

        - **Prototype :** `char *base10_to_inferior_base(unsigned long long nb, int base);`
        - **Prototype :** `unsigned long long return_to_decimal(char *nb, int base);`

    - Bases **supérieures** à 10 (dossier **_10_to_16_**) :

        - **Prototype :** `char *base10_to_superior_base(unsigned long long nb, int base);`
        - **Prototype :** `unsigned long long return_to_base10(char *nb, int base);`

    - Change la base d'un nombre positif donné (base comprise entre 2 et 16).
    
    - `base10_to_inferior_base` et `base10_to_superior_base` prennent un nombre et une base, puis renvoie le résultat sous forme de chaîne de caractères.

    - `return_to_decimal` et `return_to_base10` prennent une chaîne de caractères (le nombre dans une certaine base) et la base en question, puis renvoie le nombre en base 10 sous forme d'entiers.

    - Attention, aucune gestion d'erreur n'est faite sur les paramètres donnés aux fonctions.

4. ### int_to_char

    - **Prototype :** `char *int_to_char(unsigned int data);`
    - **Prototype :** `char *remove_zeros(char *nb);`

    - Transforme un nombre entier positif non nul en une chaîne de caractères (pour faire un affichage graphique en CSFML par exemple).

    - Attention, la fonction `int_to_char` laisse des zéros au début du résultat si le nombre est inférieur à 1 milliard. C'est pourquoi il existe la fonction `remove_zeros`, qui retire les possibles zéros au début de la chaîne de caractères.
    
    - Attention, si vous avez quand même décidé de mettre 0 au départ et que vous passez votre résultat dans cette fonction (`remove_zeros`), vous n'obtiendrez qu'une chaîne vide.

5. ### my_atoi

    - **Prototype :** `int my_atoi(char const *str);`

    - Transforme une chaîne de caractères en entier.

    - En cas de caractères non numérique au début de la chaîne de caractères (ou en deuxième place si présence signe '-' au début), la fonction retourne 0. Sinon, elle retourne la valeur du nombre avant un possible caractère non désiré.
    
    - Par exemple, `"1234"` renvoie `1234`, `"-123n4"` renvoie `-123` et `"-T123"` renvoie `0`.

6. ### strings_are_equals

    - **Prototype :** `int strings_are_equals(char *s1, char *s2);`

    - **Compare** deux chaînes de caractères pour savoir si elles sont **égales**. La fonction retourne **1** si elles sont égales, sinon elle retourne **0**.

    - **Attention**, si les deux chaînes de caractères ne sont pas de **tailles égales**, la fonctions retournera **0**. Exemple, si **une des deux** chaînes de caractères est **vide**. Par contre, si **les deux sont vides**, la fonction retournera **1**.

[Retourner en haut](#useful-c-functions)
