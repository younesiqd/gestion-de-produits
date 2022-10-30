#ifndef PRODUIT_FEMME_H_INCLUDED
#define PRODUIT_FEMME_H_INCLUDED
#include <iostream>
#include <string>
#include "produit.h"

class produit_femme : public produit
{
public:
    void void Categorie_F () const;//Tous les codes-barres des produits pour hommes se terminent par 000
};


#endif // PRODUIT_FEMME_H_INCLUDED
