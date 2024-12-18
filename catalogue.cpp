/*************************************************************************
                           Catalogue  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $2024$ par $KHOA$ $DAME$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <trajet> (fichier trajet_compose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <cstring>

//------------------------------------------------------ Include personnel
#define MAP 
#define Taille 100
#include "catalogue.h"
#include "trajet.h"
#include "liste_chainee.h"


//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type trajet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


void Catalogue::Afficher(void) const
// Algorithme :
// On appelle la méthode afficher de liste_chainee
{
    Liste.Afficher(); //Appel de afficher de liste_chainee
} //----- Fin de Méthode


void Catalogue::ajouter(Trajet * trajet)
// Algorithme :
// On appelle la méthode append de liste_chainee
{
    if(trajet != NULL)
{
 
    Liste.append(trajet);                                       //Appel de la fonction append de liste_chainee

}
} //----- Fin de Méthode


Liste_chainee & Catalogue::getList()
// Algorithme :
// On retourne la liste chainée
{
    return Liste;
} //----- Fin de Méthode


void Catalogue::search()
// Algorithme :
// On parcourt la liste chainée et on compare les villes de départ et d'arrivée
{
    bool found = false;                                         //On initialise found à faux
    Liste_chainee::Noeud * temp = Liste.gethead();              //On récupère le premier noeud de la liste chainée

    //Recueil de la ville de départ et d'arrivée

    char villeDepart[Taille] = {0};
    char villeArrivee[Taille] = {0};

    cout << "Rentrer la ville de départ : ";
    cin.getline(villeDepart, Taille);
    
    cout << "Rentrer la ville d'arrivée : ";
    cin.getline(villeArrivee, Taille);
 
    cout << "\n" << endl;
    
    while(temp != nullptr)                                      //On parcourt la liste chainée
{
    if(temp->trajet->getDepart() != nullptr && temp->trajet->getArrivee() != nullptr) //On vérifie que les villes de départ et d'arrivée ne sont pas nulles
{    
    if (strcmp(temp->trajet->getDepart(), villeDepart) == 0 && strcmp(temp->trajet->getArrivee(), villeArrivee) == 0) //On compare les villes de départ et d'arrivée
{
    temp->trajet->Afficher();                                   //Affichage du trajet
    found = true;                                               //On a trouvé un trajet

    //Car on peut avoir beaucoup d'affichage pour un meme couple(depart, arrivee) on peut avoir A-B, A-C-B, A-E-B, ...
}
    temp = temp->next;                                         //On passe au noeud suivant
}  
}

    if(!found)                                                 //Si on n'a pas trouvé de trajet
{   
    //On retourne bien 0 si le trajet n'est pas possible
    cout << "Aucun trajet trouvé entre " << villeDepart << " et " << villeArrivee << "\n" << endl;
     
}
} //----- Fin de Méthode

//-------------------------------------------- Constructeurs - destructeur

    Catalogue::Catalogue(): Liste()
    // Algorithme :
    // Appel au constructeur de liste_chainee
    {
        #ifdef MAP 

        cout << "Appel au constructeur par défaut de Catalogue" << endl;

        #endif
    } //----- Fin de Catalogue


    Catalogue::~Catalogue()
    // Algorithme :
    // Appel au destructeur de liste_chainee pour détruire les noeuds alloués dynamiquement
    {
        
        #ifdef MAP

        cout << "Appel au destructeur de Catalogue" << endl;

        #endif
    } //----- Fin de ~Catalogue

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

