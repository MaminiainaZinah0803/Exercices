#include "manipulation.h"
#include <stdio.h>
void afficher_premiere_ligne(const char *nom_fichier) {
    char nom[30], prenom[30], telephone[15], genre[10];
    int age;
    char entete[255];

    FILE *f = fopen(nom_fichier, "r");
    if (f == NULL) return;

    fgets(entete, sizeof(entete), f);

    if (fscanf(f, "%s %s %s %s %d", nom, prenom, telephone, genre, &age) == 5) {
        printf("%s %s %s %s %d\n", nom, prenom, telephone, genre, age);
    }
    fclose(f);
}
