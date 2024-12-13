#define MAP 
#include "trajet.h"
#include <iostream>
using namespace std;

Trajet::Trajet(char * depart, char * arrivee)

{
    this->depart = new char[strlen(depart) +1]; //Allocation dynamique 
    strcpy(this->depart, depart);

    this->arrivee = new char[strlen(arrivee) +1];
    strcpy(this->arrivee, arrivee);
#ifdef MAP

cout << "Appel au constructeur de Trajet" << endl;

#endif
}

//Constructeur par défaut de trajet
Trajet::Trajet()
{
    depart = NULL;
    arrivee = NULL;

#ifdef MAP
    
    cout << "Appel au constructeur par défaut de trajet " << endl;

#endif
}




 void Trajet:: Afficher(void) const
{
    cout << "Depart : "<< depart << endl;
    cout << "Arrivee : " << arrivee << endl;
}
//Méthode publique pour accéder à l'attribut protégé depart
const char * Trajet::getDepart() const
{
    return depart;
}

const char * Trajet::getArrivee() const
{
    return arrivee;
}


Trajet::~Trajet()
{
    delete[] depart;
    delete[] arrivee;
#ifdef MAP

cout << "Appel au destructeur de Trajet" << endl;
#endif
}