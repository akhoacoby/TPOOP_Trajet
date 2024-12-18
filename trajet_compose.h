/*************************************************************************
                           TRAJET_COMPOSE  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $2024$ par $KHOA$ $DAME$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <trajet_compose> (fichier trajet_compose.h) ----------------
#if ! defined ( TRAJET_COMPOSE_H )
#include "liste_chainee.h"
#define TRAJET_COMPOSE_H
#include "trajet.h"
#include "trajet_simple.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <trajet_compose>
// 
// Cette classe permet de créer un trajet composé,
// c'est-à-dire une liste chainee qui comporte plusieurs trajets simples
// Elle hérite de la classe Trajet
//
//------------------------------------------------------------------------

class Trajet_compose : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    virtual void Afficher(void) const;
    // Mode d'emploi :
    // Affiche les informations du trajet composé
    // Contrat :
    // Aucun contrat

   void Ajouter(Trajet * trajet);
    // Mode d'emploi :
    // Ajoute un trajet simple à la liste chainee
    // Contrat :
    // Aucun contrat

//-------------------------------------------- Constructeurs - destructeur
    
    Trajet_compose(); 
    // Mode d'emploi :
    // Constructeur de trajet composé par défaut
    // Contrat :
    // Aucun contrat


    virtual ~Trajet_compose ( );
    // Mode d'emploi :
    // Destructeur de trajet composé
    // Contrat :
    // Aucun contrat
    

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Liste_chainee ListeTC;
};

//-------------------------------- Autres définitions dépendantes de <trajet_compose>

#endif // trajet_compose_H

