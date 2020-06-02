#include <iostream>
#include <string>
#include "Pokemon.h"
using namespace std;
class dormeurs{
        private:
        float nbh;
    public:
         dormeurs(string nom , int poids, int taille , int nb_pat, float nbh);
         ~dormeurs();
        double calculer_vitesse();
        double calculer_energie_absorb_quotid();
        void affiche();
};
