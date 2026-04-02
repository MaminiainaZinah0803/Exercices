#include <stdio.h>
int entier(int n){
    printf("enter la taille de matrice: ");
    scanf("%d" ,&n);
    return n;
}
void saisie_matrice(int taille, float matrice[][taille], char nom){
    int i;
    for(i=0; i<taille; i++){
        for(int j=0; j<taille; j++){
            printf("%c[%d][%d]= " ,nom,i,j);
            scanf("%f" ,&matrice[i][j]);
        }
    }
}
void produit_matrice(int taille, float matrice1[][taille], float matrice2[][taille], float matrice3[][taille]){
    int i, j, m=0;
    for(i=0; i < taille; i++){
        for(j=0; j<taille; j++){
            matrice3[i][j]=0;
            for(m=0; m<taille; m++){
                matrice3[i][j] += matrice1[i][m] * matrice2[m][j];
            }
           
        }
    }
    printf("produits de matrice: \n");
    for(i=0; i<taille; i++){
        for(j=0; j<taille; j++){
            printf("%.1f\t", matrice3[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int k;
    k = entier(k);
    float M[k][k], N[k][k], P[k][k];
    saisie_matrice(k, M, 'M');
    saisie_matrice(k, N, 'N');
    produit_matrice(k, M, N, P);

    return 0;
}