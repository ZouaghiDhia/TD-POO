#include <iostream>
#include <string>
#include "Pokemon.h"
using namespace std;
class aquatiques{
        private:
        float nb_nag;
    public:
         aquatiques(string nom , int poids, int nb_nag);
         ~aquatiques();
        double calculer_vitesse();
        double calculer_energie_absorb_quotid();
        void affiche();
};
