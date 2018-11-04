//
// Created by nyebo on 03/11/2018.
//

#include <stdio.h>
#include "foret.h"
#include <time.h>
#include "enfant.h"


int main () {
    srand(time(NULL));
    Enfants enfants;
    Foret foret;
    initialiserForet(foret);
    afficherForet(foret, enfants);
    return 0;
}
