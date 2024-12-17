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
#include "trajet_simple.h"
#include <cstring>


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

 void Trajet_simple::Afficher(void) const

{
    cout << "Depart : " << depart << endl; //affichage de depart au lieu de *depart car *depart donne le premier car
    cout << "Arrivee : " << arrivee << endl;
    cout << "Means : " << meansOfTrans << endl;
}

const char * Trajet_simple::getMeansOfTrans() const
{
    return meansOfTrans;
}


//-------------------------------------------- Constructeurs - destructeur

Trajet_simple::Trajet_simple(char * depart, char * arrivee, char * means) : Trajet(depart,  arrivee) //Appel au constructeur de Trajet

{
    //Allocation dynamique de la mémoire et copie de *means
    this->meansOfTrans = new char [strlen(means) + 1];
    strcpy(this->meansOfTrans, means); //strcpy travaille avec des pointeurs
#ifdef MAP
    cout<< "Appel au constructeur de Trajet_simple"<<endl;
#endif
}


Trajet_simple::~Trajet_simple()
{
    delete[] meansOfTrans; 
#ifdef MAP
    cout << "Appel au destructeur de Trajet_simple" << endl;
#endif
}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

