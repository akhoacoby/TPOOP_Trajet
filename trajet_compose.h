/*************************************************************************
                           TRAJET_COMPOSE  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Xxx> (fichier Xxx.h) ----------------
#if ! defined ( TRAJET_COMPOSE_H )
#include "liste_chainee.h"
#define TRAJET_COMPOSE_H
#include "trajet.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Xxx>
//
//
//------------------------------------------------------------------------

class Trajet_compose : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
 
    virtual void Afficher(void) const;

   //Méthode publique ajouter

   void Ajouter(Trajet * trajet) ;

//-------------------------------------------- Constructeurs - destructeur
    
    Trajet_compose(); 


    virtual ~Trajet_compose ( );
    

protected:
//----------------------------------------------------- Attributs protégés
    Liste_chainee ListeTC;
};


#endif // XXX_H

