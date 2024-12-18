/*************************************************************************
                           trajet_simple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $2024$ par $KHOA$ $DAME$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <trajet_simple> (fichier trajet_simple.cpp) ------------

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
// Algorithme : 
// Affiche les attributs de la classe

{
    cout << "Trajet simple : " << endl;
    cout << "Depart : " << depart << endl;                  //affichage de depart au lieu de *depart car *depart donne le premier car
    cout << "Arrivee : " << arrivee << endl;
    cout << "Means : " << meansOfTrans << endl;
    cout << endl;
} //----- Fin de Méthode

const char * Trajet_simple::getMeansOfTrans() const
// Algorithme : 
// Retourne meansOfTrans
{
    return meansOfTrans;
} //----- Fin de Méthode


//-------------------------------------------- Constructeurs - destructeur

Trajet_simple::Trajet_simple(char * depart, char * arrivee, char * means) : Trajet(depart,  arrivee)
//Algorithme : 
//Appel au constructeur de Trajet pour initialiser les attributs de la classe mère
{
    //Allocation dynamique de la mémoire et copie de *means
    this->meansOfTrans = new char [strlen(means) + 1];
    strcpy(this->meansOfTrans, means);                      //strcpy travaille avec des pointeurs

#ifdef MAP
    cout<< "Appel au constructeur de Trajet_simple"<<endl;
#endif
} //----- Fin de Trajet_simple


Trajet_simple::~Trajet_simple()
//Algorithme : Destructeur de Trajet_simple
{
    delete[] meansOfTrans; 
#ifdef MAP
    cout << "Appel au destructeur de Trajet_simple" << endl;
#endif
} //----- Fin de ~Trajet_simple

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

