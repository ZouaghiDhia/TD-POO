#include <iostream>
#include <string>
#include "terractifs.h"

void terractifs(string nom , int poids, int taille , int nb_pat, float cv){
    Pokemon(string nom , int poids, int taille , int nb_pat);
    this.cv=cv;
}
double calculer_energie_absorb_quotid(){
    int E=cv*(taille**2)*100;
    return E;
}
double calculer_vitesse(){
    int v=nb_pat*((poids+1)/10)*2*E;
    return v;
}
void affiche(){
    cout<<"Je suis"<<nom<<"mon poids est de "<<poids;
    cout<<"Kg , ma vitesse actuelle est de "<<v<<"km/h";
    cout<<"j’absorbe quotidiennement une énergie de "<<E;
    cout<<"j'ai "<<nb_pat<<"pattes"<<"ma taille est de "<<taille;
    cout<<"ma vitalité est de"<<cv;
}
