#ifndef PRODUIT_HOMME_H_INCLUDED
#define PRODUIT_HOMME_H_INCLUDED
#include <iostream>
#include <string>
#include "produit.h"

class produit_homme : public produit
{

public:
    void Categorie_H () const;//Tous les codes-barres des produits pour hommes se terminent par 999

};


#endif // PRODUIT_HOMME_H_INCLUDED
