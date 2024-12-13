#define MAP 
#include "trajet_simple.h"
#include "trajet.h"
#include <cstring>
#include <iostream>
using namespace std;


 void Trajet_simple::Afficher(void) const

{
    cout << "Depart : " << depart << endl; //affichage de depart au lieu de *depart car *depart donne le premier car
    cout << "Arrivee : " << arrivee << endl;
    cout << "Means : " << meansOfTrans << endl;
}

Trajet_simple::Trajet_simple(char * depart, char * arrivee, char * means) : Trajet(  depart,  arrivee) //Appel au constructeur de Trajet

{
    //Allocation dynamique de la mémoire et copie de *means
    this->meansOfTrans = new char [strlen(means) + 1];
    strcpy(this->meansOfTrans, means); //strcpy travaille avec des pointeurs
#ifdef MAP
    cout<< "Appel au constructeur de Trajet_simple"<<endl;
#endif
}

Trajet_simple::~Trajet_simple()
{
    delete[] meansOfTrans; 
#ifdef MAP
    cout << "Appel au destructeur de Trajet_simple" << endl;
#endif
}

