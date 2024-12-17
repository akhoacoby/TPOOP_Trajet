#include "liste_chainee.h"
#include "trajet.h"
#include "trajet_compose.h"
#include "catalogue.h"
#include <cstring>
#include <iostream>
using namespace std;

    


int main() {


    // Création de trajets simples
    Trajet TS1("Lyon", "Bordeaux");
    Trajet TS3("Lyon", "Paris");
    Trajet TS2_1("Lyon", "Marseille");
    Trajet TS2_2("Marseille", "Paris");

    // Création d'un trajet composé
    Trajet_compose TC2;
    TC2.Ajouter(&TS2_1);
    TC2.Ajouter(&TS2_2);

    // Création du catalogue
    Catalogue monCatalogue;

    Trajet trajet6("Marseille", "Nice");
    monCatalogue.ajouter(&TS1);
    monCatalogue.ajouter(&TS3);
    monCatalogue.ajouter(&TC2);

    

    // Affichage des trajets
    cout << "Contenu du catalogue:" << endl;
    monCatalogue.Afficher();

    // Recherche de trajets
    cout << "\nRecherche de trajets:" << endl;
    monCatalogue.search();

    
    

    return 0;
}



    
