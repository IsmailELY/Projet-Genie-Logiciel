#ifndef ARBREBI_H_INCLUDED
#define ARBREBI_H_INCLUDED

#include <iostream>
#include <cstdlib>

using namespace std;

class Arbre{

private:
    struct Noeud{
        int cle;
        Noeud* gauche;
        Noeud* droite;
    };
    Noeud* root;

    void    AjouterNoeudPrivee(int cle, Noeud* Ptr);
    void    AfficherArbrePrivee(Noeud* Ptr);
    Noeud*  GetNoeudPrivee(int cle, Noeud* Ptr);
    int     TrouverPlusPetiteClePrivee(Noeud* Ptr);


public:
    Arbre();
    Noeud*  CreerFeuille(int cle);
    void    AjouterNoeud (int cle);
    void    AfficherArbre();
    Noeud* GetNoeud(int cle);
    int   GetCleRoot();
    void  AfficherEnfants(int cle);
    int   TrouverPlusPetiteCle();

    //~Arbre();


};


#endif // ARBREBI_H_INCLUDED
