/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $2024$ par $KHOA$ $DAME$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe Trajet> (fichier Trajet.h) ----------------
#if ! defined ( TRAJET_H )
#define TRAJET_H


//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <trajet>
//
// La classe Trajet est une classe abstraite qui permet de définir un trajet
// entre deux villes. Elle contient deux attributs protégés qui sont les villes
// de départ et d'arrivée. Elle contient également une méthode pour afficher
// les attributs de la classe.
//
//------------------------------------------------------------------------


class Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    const char * getDepart() const;
    // Mode d'emploi: 
    // Méthode publique pour accéder à l'attribut protégé depart

    // Contrat : 
    // Aucun contrat

    const char * getArrivee() const;
    // Mode d'emploi: 
    // Méthode publique pour accéder à l'attribut protégé arrivee
    // Contrat : 
    // retourne le pointeur sur l'attribut protégé arrivee


    virtual void Afficher(void) const;
    // Mode d'emploi: 
    // Méthode publique pour afficher les attributs de la classe
    // Contrat : 
    // Aucun contrat


//-------------------------------------------- Constructeurs - destructeur
   
    Trajet(const char * depart, const char * arrivee);
    // Mode d'emploi: 
    // Constructeur de Trajet
    // Contrat : 
    // Crée un trajet avec les villes de départ et d'arrivée passées en paramètres

    Trajet(); 
    // Mode d'emploi: 
    // Constructeur par défaut de Trajet
    // Contrat : 
    // Crée un trajet avec les villes de départ et d'arrivée à NULL

    virtual ~Trajet ( );
    // Mode d'emploi :  
    // Destructeur de Trajet
    // Contrat :   
    // Détruit le trajet

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
     char * depart;
     char * arrivee;
    
};

//-------------------------------- Autres définitions dépendantes de <trajet>

#endif // trajet_H