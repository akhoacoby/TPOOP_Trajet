/*************************************************************************
                           Trajet_simple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Xxx> (fichier Xxx.h) ----------------
#if ! defined ( TRAJET_SIMPLE_H )
#define TRAJET_SIMPLE_H
#include "trajet.h"
#include <iostream>
using namespace std; 

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Xxx>
//
//
//------------------------------------------------------------------------

class Trajet_simple : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
virtual void Afficher(void) const;
const char * getMeansOfTrans() const;


//-------------------------------------------- Constructeurs - destructeur
    //Trajet_simple( const Trajet_simple & unTrajet_simple);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

   //Trajet_simple ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    Trajet_simple(char * depart, char * arrivee, char * meansOfTrans); //constructeur d'un trajet simple

    virtual ~Trajet_simple( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    char * meansOfTrans;

};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // XXX_H

