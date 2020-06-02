#include <iostream>
#include "dormeur.cpp"
#include <vector>
using namespace std;

class pokemonworld
{
    private:
        vector<pokemon*> liste_pokemons;
    public:
        pokemonworld(){}
        double calculer_energie_absorbe();
        void supprimer();
        void supprimer_pokemon_particulier(string a);
        void ajouter_pokemon(pokemon* a);
        double calcule_vitesse();

};
