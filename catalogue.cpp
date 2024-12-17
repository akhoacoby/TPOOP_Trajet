/*************************************************************************
                           trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <trajet> (fichier trajet_compose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#define MAP 
#define Taille 100
#include "catalogue.h"
#include "trajet.h"
#include "liste_chainee.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//Méthode pour afficher le catalogue
void Catalogue::Afficher(void) const
{
    Liste.Afficher(); //Appel de afficher de liste_chainee
}


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


//Méthode pour rechercher un parcours

void Catalogue::search()
{
    bool found = false;
     //for trajet in catalogue if trajet->depart = search_depart && trajet->arrivee = search_arrivee return true
    Liste_chainee::Noeud * temp = Liste.gethead();

    //Recueil de la ville de départ et d'arrivée

    char villeDepart[Taille] = {0};
    char villeArrivee[Taille] = {0};
    cout << "Rentrer la ville de départ : ";
    cin.getline(villeDepart, Taille);
    
    cout << "Rentrer la ville d'arrivée : " ;
    cin.getline(villeArrivee, Taille);
 
    while(temp != nullptr)
{
    if(temp->trajet->getDepart() != nullptr && temp->trajet->getArrivee() != nullptr)
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
    cout << "Aucun trajet trouvé entre " << villeDepart << " et " << villeArrivee << "\n" << endl;
     //on retourne bien 0 si le trajet n'est pas possible 
}
}

//-------------------------------------------- Constructeurs - destructeur


//Construction d'un catalogue

Catalogue::Catalogue(): Liste()  //On commence à 0
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

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

