#include <stdio.h>
#include "produitvect.h"
int entier(int n){
   printf("entrer la taille: ");
    scanf("%d" ,&n);
    return n;
}
void saisie_vecteur(int taille, float vecteur[], char nom){
    for(int i=0; i<taille; i++){
        printf("%c[%d]= " ,nom,i);
        scanf("%f" ,&vecteur[i]);
    }
}
float produit_vecteur(int taille, float vecteur1[], float vecteur2[]){
    int i=0;
    float S;
    S=0;
    for(i=0; i<taille; i++){
        S = S + vecteur1[i] * vecteur2[i];
    }
    return S;
}
void resultat(float res){
    printf("le produit de vecteur est: %.2f\n" ,res);
}
