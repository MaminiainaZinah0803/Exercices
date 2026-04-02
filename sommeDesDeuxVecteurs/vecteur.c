#include <stdio.h>
#include "vecteur.h"
int entier(char variable){
    int valeur;
    printf("saisir la variable %c: " ,variable);
    scanf("%d" ,&valeur);
    return valeur;
}
void les_vecteurs(float vecteur[], int taille, char nom ){
    int i;
    for( i=0; i<taille; i++){
        printf("saisir %c[%d]: " ,nom, i);
        scanf("%f", &vecteur[i]);
    }
}
void les_vecteurs(float vecteur[], int taille, char nom ){
    int j;
    for(j=0; j<taille; j++){
        v3[j]= v1[j]+v2[j];
        
    }
} 
void affichage(float v4[], int taille){
    int i;
    printf("la somme de vecteurs est: [");
    for (i=0; i<taille; i++){
    printf("%.1f\n", v4[i]);
    }
    printf("]");    
}       
