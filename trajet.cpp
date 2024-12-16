/*************************************************************************
                           trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <trajet> (fichier trajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#define MAP

//------------------------------------------------------ Include personnel
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

void Trajet:: Afficher(void) const
{
    cout << "Depart : "<< depart << endl;
    cout << "Arrivee : " << arrivee << endl;
}

//Méthode publique pour accéder à l'attribut protégé depart
const char * Trajet::getDepart() const
{
    return depart;
}

const char * Trajet::getArrivee() const
{
    return arrivee;
}


//-------------------------------------------- Constructeurs - destructeur
Trajet::Trajet(const char * depart,const char * arrivee)

{
    this->depart = new char[strlen(depart) +1]; //Allocation dynamique 
    strcpy(this->depart, depart);

    this->arrivee = new char[strlen(arrivee) +1];
    strcpy(this->arrivee, arrivee);
#ifdef MAP

cout << "Appel au constructeur de Trajet" << endl;

#endif
}

//Constructeur par défaut de trajet
Trajet::Trajet()
{
    depart = NULL;
    arrivee = NULL;

#ifdef MAP
    
    cout << "Appel au constructeur par défaut de trajet " << endl;

#endif
}


Trajet::~Trajet()
{
    delete[] depart;
    delete[] arrivee;
#ifdef MAP

cout << "Appel au destructeur de Trajet" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

