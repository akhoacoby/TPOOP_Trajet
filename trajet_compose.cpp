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

//------------------------------------------------------ Include personnel
#define MAP 
#include "liste_chainee.h"
#include "trajet_compose.h"
#include "trajet_simple.h"
#include "trajet.h"
#include <cstring>


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//Méthode Afficher de trajet_compose
 void Trajet_compose::Afficher(void) const
{
    Liste_chainee::Noeud * temp = ListeTC.Liste_chainee::gethead();

    while(temp->next != NULL)
{
    
    cout << "Depart : " << temp->trajet->getDepart() << endl;
    cout << "Arrivee : " << temp->trajet->getArrivee() << endl;
    temp = temp->next; //On recupére le dernier élément pour vérifier que le départ de la ville suivante est l'arrivée de la ville précédente
}   
    cout << "Depart : " << temp->trajet->getDepart() << endl;
    cout << "Arrivee : " << temp->trajet->getArrivee() << endl;
}


//Méthode Ajouter de trajet_composé
void Trajet_compose::Ajouter(Trajet * trajet)
{
    Liste_chainee::Noeud * temp = ListeTC.gethead();
    if(temp == NULL)
{
    ListeTC.append(trajet); //Si la liste est vide on peut rajouter directement

    // Définir depart et arrivee pour le trajet composé
        depart = new char[strlen(trajet->getDepart()) + 1];
        strcpy(depart, trajet->getDepart());
        
        arrivee = new char[strlen(trajet->getArrivee()) + 1];
        strcpy(arrivee, trajet->getArrivee());
        
    return;
}
    while(temp->next !=NULL)
{
    temp = temp->next; //On recupére le dernier élément pour vérifier que le départ de la ville suivante est l'arrivée de la ville précédente
}
    if(!strcmp(temp->trajet->getArrivee(), trajet->getDepart()))
{
    ListeTC.append(trajet);
    delete [] arrivee;
    arrivee = new char[strlen(trajet->getArrivee()) + 1];
    strcpy(arrivee, trajet->getArrivee());
}
    else
{
    cout << "Le trajet " << trajet->getDepart() << "-" 
             << trajet->getArrivee() 
             << " que vous voulez ajouter n'est pas possible. " << endl;
}
    return;
}

//-------------------------------------------- Constructeurs - destructeur


Trajet_compose::Trajet_compose() : Trajet()//Appel au constructeur de Trajet

{
#ifdef MAP
    cout<< "Appel au constructeur de Trajet_composé"<<endl;
#endif
}

Trajet_compose::~Trajet_compose()
{ 
#ifdef MAP
    cout << "Appel au destructeur de Trajet_compose" << endl;
#endif
}



//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

