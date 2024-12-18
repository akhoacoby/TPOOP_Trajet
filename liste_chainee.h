/*************************************************************************
                           LISTE_CHAINEE  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $2024$ par $Khoa$ $Dame$
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
// La classe Liste_chainee est une classe qui permet de définir une liste chainée de trajets. 
// Elle contient un attribut protégé "head" qui est un pointeur sur le premier noeud de la liste chainée. 
// Elle contient:
// - une méthode pour ajouter un trajet à la liste chainée 
// - une méthode pour afficher les attributs de la classe.
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
    // Structure de la liste chainée
    // Contient un pointeur sur un trajet et un pointeur sur le noeud suivant
    {
    Trajet * trajet;
    Noeud * next;
    };


    void append(Trajet * trajet);
    // Mode d'emploi :
    // Méthode publique pour ajouter un trajet à la liste chainée
    // Contrat :
    // Aucun contrat

    void Afficher(void) const;
    // Mode d'emploi :
    // Méthode publique pour afficher les attributs de la classe
    // Contrat :
    // Aucun contrat

    Noeud * gethead() const;
    // Mode d'emploi :
    // Méthode publique pour accéder à l'attribut protégé head
    // Contrat :
    // retourne le pointeur sur l'attribut protégé head



//-------------------------------------------- Constructeurs - destructeur

    Liste_chainee( ); 
    // Mode d'emploi :
    // Constructeur de la classe Liste_chainee
    // Contrat :
    // Aucun contrat
   
    virtual ~Liste_chainee ( );
    // Mode d'emploi :
    // Destructeur de la classe Liste_chainee
    // Contrat :
    // Aucun contrat

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Noeud * head; // point d'entrée de ma liste chainée


};
//-------------------------------- Autres définitions dépendantes de <liste_chainee>

#endif // liste_chainee_H

