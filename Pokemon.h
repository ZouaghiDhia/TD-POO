
#include <iostream>
#include <string>
using namespace std;
class Pokemon{
    private:
        string nom;
        int poids;
        int taille;
        int nb_pat;
    public:
         Pokemon(string nom , int poids, int taille , int nb_pat);
        ~Pokemon();
    };

