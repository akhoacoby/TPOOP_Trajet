/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $2024$ par $KHOA$ $DAME$
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
// Rôle de la classe <Catalogue>
//
// Cette classe permet de gérer un catalogue de trajets
// Elle permet d'ajouter un trajet, de l'afficher et de rechercher un trajet
// Elle contient une liste chainée de trajets
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

    void ajouter(Trajet *trajet); 
    // Mode d'emploi :
    // Permet d'ajouter un trajet dans le catalogue
    // Contrat :
    // Le trajet doit être alloué dynamiquement


    virtual void Afficher(void) const;
    // Mode d'emploi :
    // Permet d'afficher le catalogue
    // Contrat :
    // Aucun


    void search();
    // Mode d'emploi :
    // Permet de rechercher un trajet dans le catalogue
    // Contrat :
    // Aucun

    Liste_chainee & getList();
    // Mode d'emploi :
    // Permet de retourner la liste chainée
    // Contrat :
    // Aucun


//-------------------------------------------- Constructeurs - destructeur

    Catalogue();
    // Mode d'emploi :
    // Constructeur par défaut de Catalogue
    // Contrat :
    // Aucun


    virtual ~Catalogue( );
    // Mode d'emploi :
    // Destructeur de Catalogue
    // Contrat :
    // Aucun

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

    Liste_chainee Liste;
};

//-------------------------------- Autres définitions dépendantes de <catalogue>

#endif // CATALOGUE_H

