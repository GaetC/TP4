#include <stdlib.h>
#include <stdio.h>
#include "tp4.h"

HEURE HeureDebut = { 12, 30 };
HEURE HeureFin;
HEURE Duree = { 0 , 45 };

int main() {
	
	HeureFin.minute = (HeureDebut.minute + Duree.minute) % 60;
	HeureFin.heure = (HeureDebut.heure + Duree.heure +(HeureDebut.minute + Duree.minute) / 60);
	printf("Heure %d, Minute %d", HeureFin.heure, HeureFin.minute);
}