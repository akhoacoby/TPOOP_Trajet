/*************************************************************************
                           Trajet_simple  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $2024$ par $KHOA$ $DAME$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <trajet_simple> (fichier trajet_simple.h) ----------------
#if ! defined ( TRAJET_SIMPLE_H )
#define TRAJET_SIMPLE_H
#include "trajet.h"
#include <iostream>
using namespace std; 

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <traject_simple
//>
// Cette classe permet de créer un trajet simple, 
// c'est à dire un trajet qui comporte un point du depart, un point d'arriver et un seul moyen de transport
// Elle hérite de la classe Trajet
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
    // Mode d'emploi :
    // Affiche les informations du trajet simple
    // Contrat :
    //  Aucun contrat

    const char * getMeansOfTrans() const;
    // Mode d'emploi :
    // Retourne le moyen de transport du trajet simple
    // Contrat :
    //  Aucun contrat


//-------------------------------------------- Constructeurs - destructeur

    Trajet_simple(char * depart, char * arrivee, char * meansOfTrans);
    // Mode d'emploi :
    // Crée un trajet simple avec un point de départ, un point d'arrivée et un moyen de transport
    // Contrat :
    // Aucun contrat

    virtual ~Trajet_simple( );
    // Mode d'emploi :
    // Détruit le trajet simple
    // Contrat :
    // Aucun contrat

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    char * meansOfTrans;

};

//-------------------------------- Autres définitions dépendantes de <trajet_simple>

#endif // trajet_simple_H

