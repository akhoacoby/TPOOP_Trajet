/*************************************************************************
                           trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $2024$ par $Khoa$ $Dame$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <trajet> (fichier liste_chainee.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#define MAP 
#include "liste_chainee.h"
#include <cstring>


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

Liste_chainee::Noeud * Liste_chainee::gethead() const
// Algorithme :
// retourne le head de la liste chainée
{
    return head;
} //----- Fin de Méthode


void Liste_chainee::append(Trajet * trajet) 
// Algorithme :
// Ajoute un trajet à la fin de la liste chainée
{
    Liste_chainee::Noeud * nouveau = new Noeud();           //création d'un nouveau noeud
    nouveau->trajet = trajet;                               //le trajet du nouveau noeud est le trajet passé en paramètre
    nouveau->next = nullptr;                                //le prochain noeud est nul
    Liste_chainee::Noeud * temp = head;                     //temp est le head de la liste chainée
    if(head == nullptr)
{
    head = nouveau;                                         //La liste est vide et le nouveau est le head
    return;
}
    else
{
    while(temp->next != nullptr)                            //parcours jusqu'au dernier 
{
    temp = temp->next;                                      //passe au suivant
}
    temp->next = nouveau;                                   //lie le dernier au nouveau 
    return;
    
}
} //----- Fin de Méthode


void Liste_chainee::Afficher(void) const
// Algorithme :
// Affiche les trajets de la liste chainée
{
    Liste_chainee::Noeud * temp = head; 
    if (temp == nullptr)                                    //la liste chainée est vide
{
    cout << "la liste chainée est vide" << endl;
    return;
}
    while(temp != nullptr)                                  //parcours de la liste chainée
{
    cout << "Départ : " << temp->trajet->getDepart() << endl;
    cout << "Arrivée : " << temp->trajet->getArrivee() << endl;
    cout << endl;
    temp = temp->next;
}
    return;
} //----- Fin de Méthode


//-------------------------------------------- Constructeurs - destructeur


Liste_chainee::Liste_chainee( ): head(nullptr)
// Algorithme :
// Constructeur par défaut de la liste chainée
{
    #ifdef MAP

    cout << "Appel au constructeur par défaut de Liste_chainee" << endl;

    #endif
} //----- Fin de Liste_chainee


//Destruction d'une liste chainée

Liste_chainee::~Liste_chainee()
// Algorithme :
// Destructeur de la liste chainée
{
    Noeud* temp = head;

    while(head != nullptr)
{
    Noeud* temp = head;
    head = head->next;
    // delete temp->trajet;
    delete temp;
} 

    #ifdef MAP

    cout << "Appel au destructeur de liste chainée " << endl;

    #endif
} //----- Fin de ~Liste_chainee



//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

