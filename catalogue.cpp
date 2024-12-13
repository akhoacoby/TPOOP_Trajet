#define MAP 
#define Taille 100
#include "catalogue.h"
#include "trajet.h"
#include "liste_chainee.h"
#include <cstring>
#include <iostream>
using namespace std;



//Méthode pour ajouter un trajet dans le catalogue

void Catalogue::ajouter(Trajet * trajet)
{
    if(trajet != NULL)
{
 
    Liste.append(trajet);//APpel de la fonction append de liste_chainee

}
}
Liste_chainee & Catalogue::getList()
{
    return Liste;
}

//Méthode pour recueillir la ville de départ et d'arrivée de l'utiliateur sur l'entrée standard?

/*Trajet * Catalogue::Recueil()
{
    char * depart;
    char * arrivee;
    cout << "Rentrer la ville de départ : ";
    cin >> depart;
    
    cout << "Rentrer la ville d'arrivée" << endl;
    cin >> arrivee;

    Trajet * trajet = new Trajet(depart, arrivee); //Le new associéé est dans le main 

    return trajet;
    
} 
*/



//Méthode pour rechercher un parcours

void Catalogue::search()
{
    bool found = false;
     //for trajet in catalogue if trajet->depart = search_depart && trajet->arrivee = search_arrivee return true
    Liste_chainee::Noeud * temp = Liste.gethead();

    //Recueil de la ville de départ et d'arrivée

    char  villeDepart[Taille];
    char  villeArrivee[Taille];
    cout << "Rentrer la ville de départ : ";
    cin >> villeDepart;
    
    cout << "Rentrer la ville d'arrivée : " ;
    cin >> villeArrivee;
 
    while(temp != NULL)
{
    if(temp->trajet->getDepart() != NULL && temp->trajet->getArrivee() != NULL)
{    
    if (strcmp(temp->trajet->getDepart(), villeDepart) == 0 && strcmp(temp->trajet->getArrivee(), villeArrivee) == 0)
{
    temp->trajet->Afficher();//Affichage du  trajet
    found = true;
    //Car on peut avoir beaucoup d'affichage pour un meme couple(depart, arrivee) on peut avoir A-B, A-C-B, A-E-B, ...
}
    temp = temp->next;
}  
}

    if(!found)
{
    cout << "Aucun trajet trouvé entre " << villeDepart << " et " << villeArrivee << endl;
}
    return ; //on retourne bien 0 si le trajet n'est pas possible 
}

/*Liste_chainee  Catalogue::search&Afficher(char * search_depart, char * search_arrivee)
{
    Liste_chainee List_to_print;
    if (Catalogue::search(char * search_depart, char * search_arrivee)) //Si le trajet existe dans le catalogue
{
    Trajet * trajet;
    char * depart = trajet->getDepart();
    char * arrivee = trajet->getArrivee();
    List_to_print.append(depart, arrivee);
}

}*/




//Méthode pour afficher le catalogue
void Catalogue::Afficher(void) const
{
    Liste.Afficher(); //Appel de afficher de liste_chainee
}

//Construction d'un catalogue

Catalogue::Catalogue()  //On commence à 0
{
    #ifdef MAP 

    cout << "Appel au constructeur par défaut de Catalogue" << endl;

    #endif
}

//Destruction d'un catalogue

Catalogue::~Catalogue()
{
    //appel au destructeur de liste_chainee pour détruire les noeuds alloués dynamiquement
    #ifdef MAP

    cout << "Appel au destructeur de Catalogue" << endl;

    #endif
}
