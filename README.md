# USEFUL-FUNCTIONS

**⚠️ Si vous êtes étudiant _EPITECH_, N'UTILISEZ PAS ces fonctions, cela pourrait être considéré comme de la triche.**
> Je pense que récupérer un -84 sur votre projet pour ça, cela ne vaut pas le coup 😉.

**Cependant, si vous décidez d'utiliser ces fonctions, je me dédommage de toutes responsabilités si vous êtes pris la main dans le sac.**


### Les fonctions :

**Toutes les fonctions respectent le _coding style_ (PDF explicatif fourni dans son dossier à la racine) et ne présentent normalement aucune erreur _Valgrind_.**

**Chaque fonction (une par dossier) est accompagnée d'un dossier _includes_ contenant les fichiers .h de la fonction, ainsi d'un dossier _src_ contenant les fichiers sources (.c) de la fonction.**

1. **str_to_word_array :**

    - Prend en paramètres la chaîne de caractères comprenant les phrases que l'on veut séparer en mots, ainsi que la liste des caractères autorisés (les autres étant considérés comme des séparateurs de mots).

    - Elle retourne un tableau de chaînes de caractères comprenant tous les "mots" (un par chaîne de caractères).

    - Attention, la mémoire de la chaîne de caractères autorisés n'est pas libérée, ce sera à vous de la libérer.

2. **read_file :**

    - Lit un fichier donné (son chemin) et retourne une chaîne de caractères contenant le texte.

    - Si le programme, d'une quelconque façon, n'arrive pas à lire le fichier, il retournera le chemin donné en paramètre de la fonction.

    - Attention, puisque le programme utilise la structure _stat_ et la fonction _stat_ pour déterminer la taille de la mémoire à allouer, si _stat_ rencontre un problème ou que le fichier donné est vide, le programme renvoie le chemin donné en paramètre de la fonction.