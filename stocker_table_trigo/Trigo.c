#include <stdio.h>
#include <math.h>
#include "trigo.h"
int degre;
double r, s, c;
FILE *f;
int generer_table(const char *nom_fichier){
    f = fopen(nom_fichier, "w");
    if (f==NULL) return -1;
    fprintf(f, "Degre | Sinus | cosinus\n");
    fprintf(f, "------------------------\n");
    for (degre = 0; degre <= 360; degre++){
        r = degre * (3.14159265 / 180);
        s = sin(r);
        c = cos(r);
        fprintf(f, "%d | %.3f | %.3f\n", degre, s, c); 

    }
    fclose(f);
    return 0;
}
void confirmation(int resultat){
    if (resultat == 0){
        printf("fichier cree avec succès. \n");
    }
    else{
        printf("erreur lors de la création.\n"); 

    }
}
