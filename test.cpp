#include "liste_chainee.h"
#include "trajet.h"
#include "trajet_compose.h"
#include "trajet_simple.h"
#include "catalogue.h"
#include <cstring>
#include <iostream>
using namespace std;

int main() {


    // Création de trajets simples
    Trajet_simple TS1("Lyon", "Bordeaux", "train");
    Trajet_simple TS3("Lyon", "Paris", "auto");
    Trajet_simple TS2_1("Lyon", "Marseille","bateau");
    Trajet_simple TS2_2("Marseille", "Paris", "avion");

    // Création d'un trajet composé
    Trajet_compose TC2;
    TC2.Ajouter(&TS2_1);
    TC2.Ajouter(&TS2_2);

    // Création du catalogue
    Catalogue monCatalogue;

    // Ajout des trajets au catalogue
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



    
