/*************************************************************************
                           trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $2024$ par $KHOA$ $DAME$
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
//Algorithme : Affiche les attributs de la classe

{
    cout << "Depart : "<< depart << endl;
    cout << "Arrivee : " << arrivee << endl;
} //----- Fin de Méthode

//Méthode publique pour accéder à l'attribut protégé depart

const char * Trajet::getDepart() const
//Algorithme : retourne le pointeur sur l'attribut protégé depart

{
    return depart;
} //----- Fin de Méthode

const char * Trajet::getArrivee() const
//Algorithme : retourne le pointeur sur l'attribut protégé arrivee

{
    return arrivee;
} //----- Fin de Méthode


//-------------------------------------------- Constructeurs - destructeur



Trajet::Trajet(const char * depart,const char * arrivee)
//Algorithm : Constructeur de trajet

{
    this->depart = new char[strlen(depart) +1]; //Allocation dynamique 
    strcpy(this->depart, depart);

    this->arrivee = new char[strlen(arrivee) +1];
    strcpy(this->arrivee, arrivee);
#ifdef MAP

cout << "Appel au constructeur de Trajet" << endl;

#endif
} //----- Fin de Trajet 


Trajet::Trajet()
//Algorithm : Constructeur par défaut de trajet

{
    depart = NULL;
    arrivee = NULL;

#ifdef MAP
    
    cout << "Appel au constructeur par défaut de trajet " << endl;

#endif
} //----- Fin de Trajet


Trajet::~Trajet()
//Algorithm : Destructeur de trajet

{
    delete[] depart;
    delete[] arrivee;
#ifdef MAP

cout << "Appel au destructeur de Trajet" << endl;
#endif
} //----- Fin de ~Trajet


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

