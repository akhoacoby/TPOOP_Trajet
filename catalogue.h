/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Catalogue> (fichier Catalogue.h) ----------------
#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H
#include "trajet.h"
#include "liste_chainee.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Xxx>
//
//
//------------------------------------------------------------------------

class Catalogue 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

//Méthode pour afficher les trajets après recherche

//Liste_chainee * search&Afficher(char * search_depart, char * search_arrivee);

 void ajouter(Trajet *trajet); //ajouter un nouveau noeud 


virtual void Afficher(void) const;

//Méthode pour rechercher un parcours
void search();

Liste_chainee & getList(); //On renvoie une référence pour ne pas travailler avec une copie de Liste  

    Catalogue(); //



    virtual ~Catalogue( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:


    Liste_chainee Liste;
};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // CATALOGUE_H

