#include <stdio.h>
#include <string.h>
#include "generate_tablehtml.h"
void les_fichiers(const char *nom_fichier1, const char *nom_fichier2){
    FILE *f1, *f2;
    char ligne[1024];
    char *token;
    f1 = fopen(nom_fichier1, "r");
    f2 = fopen(nom_fichier2, "w");
    if (f1 == NULL || f2 == NULL){
        printf("le fichier que vous avez saisi est introuvable!");
        return;
    }
    fprintf(f2, "<!DOCTYPE html>\n<html>\n<head>\n<meta charset='UTF-8'>\n");
    fprintf(f2, "<style>table, th, td { border: 1px solid black; border-collapse: collapse; padding: 8px; }</style>\n");
    fprintf(f2, "</head>\n<body>\n<table>\n");
    
    while(fgets(ligne, sizeof(ligne),f1)){
        ligne[strcspn(ligne, "\r\n")] = 0;
        fprintf(f2, " <tr>\n");
        token = strtok(ligne, ",");
        while(token != NULL){
            fprintf(f2, "  <td>%s</td>\n", token);
            token = strtok(NULL, ",");
        }
        fprintf(f2, " </tr>\n");
    }
    fprintf(f2, "</table>\n</body>\n</html>");
    fclose(f1);
    fclose(f2);
}
