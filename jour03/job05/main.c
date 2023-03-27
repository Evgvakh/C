#include <stdio.h>

int horis(int lar, int hau);
int vert(int arg);

int main() {
    int hauteur;
    int largeur;

    printf("Entrez l'hauteur: ");    
    scanf("%d", &hauteur);
    printf("Entrez la largeur: ");
    scanf("%d", &largeur);

    horis(hauteur, largeur);    

    return 0;
}

int horis(int lar, int hau) {
    vert(hau);
    printf("%c\n", '-');    
    if (lar > 1) {
        horis(lar-1, hau);
    }
}

int vert(int arg) {    
    if(arg > 1) {
        printf("%c", '-');
        vert(arg - 1);
    }
}