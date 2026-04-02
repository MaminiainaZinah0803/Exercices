#include <stdio.h>
#include "vecteur.h"
int main(){
    int k;
    k = entier(k);
    float M[k][k], N[k][k], P[k][k];
    saisie_matrice(k, M, 'M');
    saisie_matrice(k, N, 'N');
    produit_matrice(k, M, N, P);

    return 0;
}
