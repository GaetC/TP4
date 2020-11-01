#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char nom[10];
    char prenom[10];
    char sexe;
    printf("Quel est votre nom ? ");
    fgets(nom, 10, stdin);
    printf("Quel est votre nom ? ");
    fgets(prenom, 10, stdin);
    printf("Quel est votre sexe? (h ou f)");
    sexe = _getch();
    if (sexe == 'h') {
        printf("\n Monsieur %c %c", *nom, *prenom);
    }
    else {
        printf("\n Madame %c %c", *nom, *prenom);
    }
}