#include <iostream>
#include <string>
#include "Pokemon.h"
using namespace std;
class terractifs{
    private:
        float cv;
    public:
         terractifs(string nom , int poids, int taille , int nb_pat, float cv);
         ~terractifs();
        double calculer_vitesse();
        double calculer_energie_absorb_quotid();
        void affiche();
};
