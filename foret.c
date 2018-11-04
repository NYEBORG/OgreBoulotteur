//
// Created by nyebo on 03/11/2018.
//
#include "foret.h"

void initialiserForet(Foret foret) {

    for (int i = 0; i < FORET_HAUTEUR; i++) {

        for (int j = 0; j < FORET_LONGUEUR; j++) {
            if (i == 0 || j == 0 || i == FORET_HAUTEUR - 1 || j == FORET_LONGUEUR - 1)
                foret[i][j] = FORET_ARBRE;
            else

                foret[i][j] = SOL;
        }
    }

}

void afficherForet(Foret foret) {

    system("CLS");
    for (int i = 0; i < FORET_HAUTEUR; i++) {

        for (int j = 0; j < FORET_LONGUEUR; j++) {

            printf("%c", foret[i][j]);

        }
        printf("\n");
    }


}
