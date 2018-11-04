//
// Created by nyebo on 04/11/2018.
//

#ifndef OGREBOULOTTEUR_ENFANT_H
#define OGREBOULOTTEUR_ENFANT_H
#define NOMBRE_ENFANTS 10
#define FORET_ENFANTs 1

typedef struct Enfant Enfant;
struct Enfant{
    int x;
    int y;
};

typedef Enfant Enfants[NOMBRE_ENFANTS];

#endif //OGREBOULOTTEUR_ENFANT_H
