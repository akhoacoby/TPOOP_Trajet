/*************************************************************************
                           trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $2024$ par $KHOA$ $DAME$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <trajet_compose> (fichier trajet_compose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel

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

void Trajet_compose::Afficher(void) const
// Algorithme : 
// On parcourt la liste chainée et on affiche les trajets simples
{
    cout << "Trajet compose " << nom <<": \n" << endl;
    Liste_chainee::Noeud * temp = ListeTC.Liste_chainee::gethead();

    while(temp->next != NULL)
{
    temp->trajet->Afficher();           //On affiche le trajet simple
    temp = temp->next;                  //On recupére le dernier élément pour vérifier que le départ de la ville suivante est l'arrivée de la ville précédente
}   
    temp->trajet->Afficher();           //On affiche le dernier trajet simple
    return;
} //----- Fin de Méthode


Liste_chainee & Trajet_compose:: getListeTC()
// Algorithme : 
// Retourner la liste de trajet compose
// 
{
    return ListeTC;
}//----- Fin de Méthode

void Trajet_compose::Ajouter(Trajet_simple * trajet)
// Algorithme : 
// On vérifie si la liste chainée est vide, 
// si c'est le cas on peut ajouter directement le trajet simple
{
    Liste_chainee::Noeud * temp = ListeTC.gethead();
    if(temp == NULL)
{
    ListeTC.append(trajet);             //Si la liste est vide on peut rajouter directement

    // Définir depart et arrivee pour le trajet composé
        depart = new char[strlen(trajet->getDepart()) + 1];
        strcpy(depart, trajet->getDepart());
        
        arrivee = new char[strlen(trajet->getArrivee()) + 1];
        strcpy(arrivee, trajet->getArrivee());
        
    return;
}
    while(temp->next !=NULL)            //On parcourt la liste chainée
{
    temp = temp->next;                  //On recupére le dernier élément pour vérifier que le départ de la ville suivante est l'arrivée de la ville précédente
}
    if(!strcmp(temp->trajet->getArrivee(), trajet->getDepart()))                //Si le départ de la ville suivante est l'arrivée de la ville précédente
{
    ListeTC.append(trajet);             //On ajoute le trajet simple à la liste chainée
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
} //----- Fin de Méthode

int Trajet_compose::compterNoeudTC() const
{
    return ListeTC.compterNoeud();
}

//-------------------------------------------- Constructeurs - destructeur

Trajet_compose::Trajet_compose(char * nom, Liste_chainee * ListeTS) : Trajet(nom,ListeTS->gethead()->trajet->getDepart(),ListeTS->getFin(ListeTS->gethead())->trajet->getArrivee())
{
    ListeTC = * ListeTS;
#ifdef MAP
//    cout<< "Appel au constructeur de Trajet_composé"<<endl;
#endif
}

Trajet_compose::~Trajet_compose()
// Algorithme :
{ 
#ifdef MAP
//    cout << "Appel au destructeur de Trajet_compose" << endl;
#endif
} //----- Fin de ~Trajet_compose



//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

