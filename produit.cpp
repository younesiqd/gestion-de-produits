#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include"produit.h"

using namespace std;

produit::produit() //constructeur
{
    codebar=0;
    qte=0;
    prix=0,00;
    nom='nomproduit';
}

int produit::saisie()
{
	int n ;
    cout<<"donner le nombre de types de produits";
    cin>>n;
    return n;
}
produit*allocation_remplissage(int n)
{ produit *t;
t=((produit*)malloc(n*sizeof(produit)));
	if(!t) exit(-1);

	for(int i=0;i<n;i++)
	{ cout<<"donner le code bar";
	scanf("%d",&(t+i)->codebar);
	cout<<"donner le prinx";
	scanf("%f",&(t+i)->prix);
	cout<<"donner le prix";
	scanf("%d",&(t+i)->qte);
	cout<<"donner le nom";
	scanf("%s",&(t+i)->nom);
	}
	return t;

}
void produit::affichage(produit* t,int n)
{

	for(int i=0;i<n;i++)
	{
	cout<<"le codebar du produit est"<<(t+i)->codebar)<<" le nom est "<<((t+i)->nom)
	    <<"le prix est "<<((t+i)->prix)<<"le qte est "<<((t+i)->qte)<<endl;
	}
}

void produit::ajout(int n , produit **t)
{
	*t=(produit*)realloc(t,(n+1)*sizeof(produit));
        if(!t) exit(-2);
   cout<<"donner le nouveaux produit";
	 cout<<"donner le code a bar";
	cin>>(*t+n)->codebar;
	cout<<"donner le prix";
	cin>>(*t+n)->prix;
	cout<<"donner le prix";
	cin>>(*t+n)->qte;
	cout<<"donner le nom";
	cin>>(*t+n)->nom;


}
void produit::supprimer(int n , produit **t)
{
	int _code;
	cout<<"donner le code a bar du produit a suprimer"<<endl;
    cin>>_code;
	for(int i=0;i<n;i++)
	{
		if(_code==(*t+i)->codebar)
			for (int j=i;i<n-1;i++)
			{
				(*t+j)->codebar=(*t+n-1)->codebar;
				(*t+i)->prix=(*t+n-1)->prix;
				(*t+i)->nom=(*t+n-1)->nom;
				(*t+i)->qte=(*t+n-1)->qte;
			}
			*t=(produit*)realloc(t,(n-1)*sizeof(produit));
			if(!t) exit(-3);




	}
}
void produit::consulter1(int n, produit *t)
{
	int cod;
	cout<<"donner le code bar du produit a consulter"<<endl;
	cin>>cod;
	for(int i=0;i<n;i++)
	{ if(cod==((t+i)->codebar))

	cout<<"**********************************************"<<endl;
	cout<<"le codebar du produit  est"<<(t+i)->codebar<<" le nom est "<<(t+i)->nom<<"le prix est "
	    << (t+i)->prix<<"le qte est"<<(t+i)->qte)<<endl;
	}
}
void produit::consultaion(int n,produit *t)
{
	int cod ;
	cout<<"donner le code bar du produit a consulter";
	cin>>cod;

	for(int i=0;i<n;i++)
	{ if((cod==((t+i)->codebar))&&((t+i)->qte!=0))

	{cout<<"**********************************************"<<endl;
	cout<<"le produit existe et le codebar du produit  est "<<(t+i)->codebar<<" le nom est"<<(t+i)->nom
	<<"le prix est"<<(t+i)->prix<<" le qte est %d \t"<<(t+i)->qte)<<endl;
	}
	else cout<<"le produit est non disponible";
	}
}

void produit::modifier(int n,produit **t)
{
int _codebar;
int _qte;
float _prix;
int m;
cout<<"donner le le codebar du produirt a modifier"<<endl;
cin>>_codebar;
for(int i=0;i<n;i++)
  {
	  if(_codebar==((*t+i)->codebar))
	  {
		  cout<<"si tu veut modifier le prix taper 1 " <<endl<<"si tu veut modifier la qte taper 2"<<endl
		  <<"si tu veut modifier le deux taper 3"<<endl;
		  cin>>m;
		  switch(m)
		  {
		  case(1):
			  {
				 cout<<"----------------------modification du prix-----------------------------------"<<endl;
                 cout<<"donner le nouveaux prix";
                 cin>>(*t+i)->prix;
				 cout<<"---------------------fin modification prix----------------------------------"<<endl;
			  }
			  break;
		  case(2):
			  {
				  cout<<"------------------modification qte de produit ------------------------------"<<endl;
				  cout<<"donner le nouveaux qte du produit";
				  cin>>(*t+i)->qte;
				  cout<<"-----------------fin modification qte de produit----------------------------"<<endl;
			  }
			  break;
		  case(3):
			  {
				  cout<<"-------------------modiffication qte et prix de produit---------------------"<<endl;
				  cout<<"donner le nouveaux prix et qte du prix a modifier"<<endl;
				  cin>>(*t+i)->prix>>(*t+i)->qte);
				  cout<<"-------------------fin modification qte et prix de produit-----------------"<<endl;
			  }
			  break;
	  }

  }
}
}
void produit::tri(int n ,produit **t)
{ int m=n;
bool tab_en_ordre=false;
produit e;
 while(!tab_en_ordre)
 {
	tab_en_ordre=true;
	for(int i=0;i<m;i++)
	{
		if(((*t+i)->prix)<(*t+i+1)->prix)
		{
			tab_en_ordre=false;


			e.prix=(*t+i)->prix;
			e.qte=(*t+i)->qte;
			e.nom=(*t+i)->nom;
			e.codebar=(*t+i)->codebar;
			(*t+i)->prix=(*t+i+1)->prix;
			(*t+i)->qte=(*t+i+1)->qte;
			(*t+i)->nom=(*t+i+1)->nom;
			(*t+i)->codebar=(*t+i+1)->codebar;
			(*t+i+1)->prix=(e.prix);
			((*t+i+1)->nom)=(e.nom);
			(*t+i+1)->qte=(e.qte);
			(*t+i+1)->codebar=e.codebar;

		}
		m--;

	}
 }

}
