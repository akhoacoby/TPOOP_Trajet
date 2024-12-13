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
{
    return head;
}

//Méthode ajouter un trajet à la liste
void Liste_chainee::append(Trajet * trajet) 
{
    Liste_chainee::Noeud * nouveau = new Noeud();
    nouveau->trajet = trajet;
    nouveau->next = NULL;
    Liste_chainee::Noeud * temp = head;
    if(temp == NULL)
{
    head = nouveau; //La liste est vide et le nouveau est le head
    return;
}
    else
{
    while(temp->next != NULL) //parcours jusqu'au dernier 
{
    temp = temp->next; //passe au suivant
}
    temp->next = nouveau; //lie le dernier au nouveau 
    return;
    
}
}

//Méthode afficher la liste chainée
void Liste_chainee::Afficher(void) const
{
    Liste_chainee::Noeud * temp = head; 
    if (temp == NULL) //la liste chainée est vide
{
    cout << "la liste chainée est vide" << endl;
    return;
}
    while(temp != NULL)
{
    cout << "Départ : " << temp->trajet->getDepart() << endl;
    cout << "Arrivée : " << temp->trajet->getArrivee() << endl;
    temp = temp->next;
}
    return;
}


//-------------------------------------------- Constructeurs - destructeur


Liste_chainee::Liste_chainee( ): head(NULL)
{
    #ifdef MAP

    cout << "Appel au constructeur par défaut de Liste_chainee" << endl;

    #endif
}

//Destruction d'une liste chainée

Liste_chainee::~Liste_chainee() //destruction des noeuds alloués dynamiquement dans la méthode append 
{
    Noeud* temp = head;

    while(head != NULL)
{
    temp = head->next;
    delete head;
    head = temp;
} 

    #ifdef MAP

    cout << "Appel au destructeur de liste chainée " << endl;

    #endif
}



//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

