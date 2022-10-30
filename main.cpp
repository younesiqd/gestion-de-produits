#include<iostream>
#include<stdlib.h>
#include <stdio.h>
#include"produit.h"
#include <string>
using namespace std;
int main()
{
    produit pt;
	int n = pt.saisie(); //saisir le nombre de produits
    t = pt.allocation_remplissage(n);
	pt.tri(n,&t);
	float caise;
	int fin=0;
	int code_bar;
	int qte;

    cout<<"**************************************************************************************************************"<<endl;
	cout<<"-----------------------------------------------bienvenue-----------------------------------------------------"<<endl;
	cout<<"**************************************************************************************************************"<<endl;


	while(exit)
	{
	    cout<<"si tu veut afficher les produits taper 2 "<<endl<<"si tu veut consulter un produit taper 3" <<endl<<" si tu veut consulter1 un produit taper 4"<<endl<<" si tu veut ajouter un produit taper 5" <<endl<< "si tu veut supprimer un produit taper 6" <<endl<< "si tu veut modifier un produit taper 7" <<endl<< "si tu veut vendre taper 8" <<endl<<" si tu ceut afficher la caise taper 9"<<endl<<"si tu veut exit taper 1"<<endl;
	  cin>>exit ;
		switch(exit)
		{ case 2:
		  {
			  cout<<"-------------------------------AFFICHAGE----------------------------------------------"<<endl;
			  pt.affichage(t,n);
		      cout<<"--------------------------------FIN AFFICHAGE------------------------------------------"<<endl;
		  } // affichage des prodits
	   break;
		case(3):
			{  cout<<"---------------------------CONSULTATION--------------------------------------------------"<<endl;
			   pt.consultaion(n,t);
			   cout<<"--------------------------FIN CONSULTATION-----------------------------------------------"<<endl;
			}// consutation il nous informer si le produit est disponible ou non
		   break;
	   case(4):
		   {
			   cout<<"---------------------------AFFICHAGE D'UN PRODUIT--------------------------------------------------"<<endl;
			   pt.consulter1(n,t);
		       cout<<"---------------------FIN AFFICHAGE D'UN PRODUIT----------------------------------------------------"<<endl;
		   }
		       //afichage d'un produit en utilisant le code bar comme idantifiant : entre du code bar du produit en clavier et affichage du prix , nom el qte du prix
		   break;
	   case(5):
		   {
			   cout<<"----------------------------------------AJOUT D'UN PRODUIT---------------------------------------------------"<<endl;
		       pt.ajout(n,&t); n=n+1; pt.tri(n,&t);
		      cout<<"---------------------------------------FIN AJOUT D'UN PRODUIT-------------------------------------------------"<<endl;
		   } //ajout d'un produit
		   break;
	   case(6):
		   {
			   cout<<"---------------------------------SUPPRIMER UN PRODUIT--------------------------------------------------------"<<endl;
			   pt.supprimer(n,&t); n=n-1; pt.tri(n,&t);
			   cout<<"--------------------------FIN DU SUPPRISSION D'UN PRODUIT---------------------------------------------------"<<endl;}
		   // supprimer un produit
		   break;
	   case(7):
		   {
			    cout<<"-----------------------------MODIFICATION D'UN PRIX D'UN PRODUIT----------------------------------------------"<<endl;
			    pt.modifier(n,&t); pt.tri(n,&t);
			    cout<<"-----------------------------FIN MODIFICATION DU PRIX D'UN PRODUIT--------------------------------------------"<<endl;
		   } // modifier le prix d'un produit en utilisant le code bar comme idantifiant
		   break;
	   case(8):
		   {
			    cout<<"------------------------------------ACHAT----------------------------------------------"<<endl;
			   do{
				   cout<<"si il ya vente d'un produit taper 0 sinon taper 100";
				   cin>>fin;
				   cout<<"doner le code bar du produit a acheter ";
				   cin>>code_bar;
				   cout<<"donner le qte";
				   cin>>qte;
				   for(int i=0;i<n;i++)
				   {
					   if(code_bar==(t+i)->codebar)
					   {
						   (t+i)->qte-=qte;
						   caise+=(((t+i)->prix)*qte);

						   break;
					   }
				   }
			   }while(fin==100);

			 cout<<"----------------------------------------FIN ACHAT-----------------------------------------------"<<endl;
		   }
		   break;
	   case(9):
		   {
			    cout<<"-------------------------------AFFICHAGE DE LE GAIN------------------------------------------"<<endl;
			    cout<<"le qte d'achat est  %f"<<caise;
			    cout<<"-----------------------------FIN AFFICHAGE GAIN--------------------------------------------"<<endl;
		   }
		   break;

	   }
	}
	cout<<"**************************************************************************************************************"<<endl;
	cout<<"----------------------------------------------AUREVOIR--------------------------------------------------------"<<endl;
	cout<<"\n**************************************************************************************************************"<<endl;
	getchar();


}
