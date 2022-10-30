#ifndef def_produit
#define def_produit

#include <string>

class produit
{
private:
     int codebar;
     int qte;
     float prix;
     char nom;

public:

   	produit();
    int saisie();
    produit*allocation_remplissage(int);
    void affichage(produit*,int);
    void ajout(int,produit**);
    void supprimer(int,produit**);
    void consulter1(int, produit*); // affichage d'un produit
    void consultaion(int,produit*); //consultation d'un produit => si le produit disponible il affiche le qte el le nom du produit si non il afiche " le produit est indisponible"
    void modifier(int,produit**);// modification du prix
    void tri(int , produit**); //tri






};

#endif // def_produit
