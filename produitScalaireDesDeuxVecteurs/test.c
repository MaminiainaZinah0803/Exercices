#include <stdio.h>
#include "produitvect.h"
 int main(){ 
    int k;
    float S;
    k = entier(k);
    float M[k], N[k];
    saisie_vecteur(k, M, 'M');
    saisie_vecteur(k, N, 'N');
    S = produit_vecteur(k, M, N);
    resultat(S);
   
    return 0;
}
