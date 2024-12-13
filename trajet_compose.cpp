#define MAP 
#include "liste_chainee.h"
#include "trajet_compose.h"
#include "trajet.h"
#include <cstring>
#include <iostream>
using namespace std;


//Méthode Afficher de trajet_compose
 void Trajet_compose::Afficher(void) const

{
    Liste_chainee::Noeud * temp = ListeTC.Liste_chainee::gethead();

    cout << "Depart : " << temp->trajet->getDepart() << endl;

    while(temp->next != NULL)
{
    temp = temp->next;
}
    cout << "Arrivee : " << temp->trajet->getArrivee() << endl;
    
    
    
     //cout << "Depart : " << depart << endl; //affichage de depart au lieu de *depart car *depart donne le premier car
    //cout << "Arrivee : " << arrivee << endl;
}


//Méthode Ajouter de trajet_composé
void Trajet_compose::Ajouter(Trajet * trajet)
{
    Liste_chainee::Noeud * temp = ListeTC.gethead();
    if(temp == NULL)
{
    ListeTC.Liste_chainee::append(trajet); //Si la liste est vide on peut rajouter directement
    return;
}
    while(temp->next !=NULL)
{
    temp = temp->next; //On recupére le dernier élément pour vérifier que le départ de la ville suivante est l'arrivée de la ville précédente
}
    if(!strcmp(temp->trajet->getArrivee(), trajet->getDepart()))
{
    ListeTC.Liste_chainee::append(trajet);
}
    else
{
    cout << "Le trajet " << trajet->getDepart() << "-"<< trajet->getArrivee() << " que vous voulez ajouter n'est pas possible. " << endl;
}
    return;
}




Trajet_compose::Trajet_compose() //Appel au constructeur de Trajet

{
#ifdef MAP
    cout<< "Appel au constructeur de Trajet_composé"<<endl;
#endif
}

Trajet_compose::~Trajet_compose()
{ 
#ifdef MAP
    cout << "Appel au destructeur de Trajet_compose" << endl;
#endif
}


