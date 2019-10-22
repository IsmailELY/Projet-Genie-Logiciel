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
    void    DeleteNoeudPriveeV2(int cle, Noeud * Ptr);
    void    DeleteNoeudPriveeV1(int cle, Noeud * Ptr, Noeud * Pere);
    void    AfficherInversePrivee(Noeud* Ptr);

public:
    Arbre();
    Noeud*  CreerFeuille(int cle);
    void    AjouterNoeud (int cle);
    void    AfficherArbre();
    Noeud* GetNoeud(int cle);
    int   GetCleRoot();
    void  AfficherEnfants(int cle);
    int   TrouverPlusPetiteCle();
    void  DeleteNoeud(int cle);
    void   AfficherInverse();

    //~Arbre();


};


#endif // ARBREBI_H_INCLUDED
