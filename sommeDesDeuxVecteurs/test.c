#include <stdio.h>
#include "vecteur.h"
int main(){
    int k;
    k = entier ('k');
    float N[k], M[k], V[k];
    les_vecteurs(N, k, 'N');
    les_vecteurs(M, k, 'M');
    somme_vecteur(N, M, V, k);
    affichage(V, k);
    return 0;
}
