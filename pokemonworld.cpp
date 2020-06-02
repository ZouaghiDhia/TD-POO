
#include "pokemonworld.h"

using namespace std;

void ajouter_pokemon(pokemon* a)
{
    liste_pokemons.push_back(a);
}

double calculer_energie_absorbe()
{
    double x;
    for (int i=0;i<liste_pokemons.size();++i)
    {
        x=(liste_pokemons[i])->calculer_energie_absorb_quotid();
    }
    return x;
}

void supprimer()
{
    liste_pokemons.pop_back();
}

void supprimer_pokemon_particulier(string a)
{
    int i=0;
    bool ok=false;

    do
    {
        if (liste_pokemons[i]->getnom()==a)
        {
            ok=true;
            liste_pokemons.erase(liste_pokemons.begin() + i);
        }
        i++;
    }
    while ((ok==false) && (i<liste_pokemons.size()));
}


double calcule_vitesse()
{
    double vitesse;
    for (int i=0;i<liste_pokemons.size();i++)
    {
        vitesse+=liste_pokemons[i]->calculer_vitesse();
    }

    return (vitesse/liste_pokemons.size());
}

