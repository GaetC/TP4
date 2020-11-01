#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define TAILLEMOT 50

char mot1[TAILLEMOT];
int longueurChaine;

int main() {
	setlocale(LC_ALL, "Fr-FR");
	scanf_s("%s", mot1, _countof(mot1));
	char motinv[TAILLEMOT];
	longueurChaine = strlen(mot1);
	char* ptr;
	ptr = &mot1[TAILLEMOT];
	for (int i = 0; i < longueurChaine; i++) {
		motinv[i] = *ptr;
		ptr--;
	}
	for (int i = 0; i < longueurChaine / 2; i++) {
		char u = motinv[i];
		char v = mot1[i];
		if (u == v) {
			printf("Le programme marche pour l'instant");
		}
		else {
			printf("Le programme marche pas pour l'instant");
			break;
		}
	}
}