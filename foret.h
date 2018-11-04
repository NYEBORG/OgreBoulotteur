//
// Created by nyebo on 03/11/2018.
//

#ifndef OGREBOULOTTEUR_FORET_H
#define OGREBOULOTTEUR_FORET_H
#define FORET_HAUTEUR 25
#define FORET_LONGUEUR 40
#define SOL ' '
#define FORET_ARBRE 5
#define FORET_DENSITE 15
#include <stdio.h>
#include <stdlib.h>
typedef char Foret[FORET_HAUTEUR][FORET_LONGUEUR];


void initialiserForet(Foret foret);
void afficherForet(Foret foret);


#endif //OGREBOULOTTEUR_FORET_H

