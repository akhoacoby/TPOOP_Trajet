/*************************************************************************
                           LISTE_CHAINEE  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Liste_chainee> (fichier Liste_chainee.h) ----------------
#if ! defined ( LISTE_CHAINEE_H )
#define LISTE_CHAINEE_H
#include "trajet.h"
#define MAP
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Liste_chainee>
//
//
//------------------------------------------------------------------------




class Liste_chainee 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    struct Noeud
{
    Trajet * trajet;
    Noeud * next;
};

    void append(Trajet * trajet) ;

    void Afficher(void) const;



    Noeud * gethead() const;



//-------------------------------------------- Constructeurs - destructeur
   
    

    Liste_chainee( ); //construction d'une liste chainée avec le constructeur par défaut
   
    virtual ~Liste_chainee ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
Noeud * head; // point d'entrée de ma liste chainée


};
//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // XXX_H

