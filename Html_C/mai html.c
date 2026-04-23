#include <stdio.h>
#include "generate_tablehtml.h"
int main(){
    les_fichiers("fichierINT.csv", "tableau.html");
    printf("fichier créé");
    return 0;
}
