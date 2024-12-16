#include "liste_chainee.h"
#include "trajet.h"
#include "trajet_compose.h"
#include "catalogue.h"
#include <cstring>
#include <iostream>
using namespace std;

    


int main() {


    // Création de trajets simples
    Trajet trajet1("Paris", "Marseille");
    Trajet trajet2("Lyon", "Milan");
    Trajet trajet3("Paris", "Dakar");
    Trajet trajet5("Milan", "Paris");

    // Création d'un trajet composé
    Trajet_compose trajet4;
    trajet4.Ajouter(&trajet2);
    trajet4.Ajouter(&trajet5);

    // Création du catalogue
    Catalogue monCatalogue;

    // Ajout des trajets au catalogue
    // Données fictives pour les trajets
    // char* departs[] = {"Lyon", "Marseille", "Bordeaux", "Toulouse", "Nice", "Lille", "Strasbourg", "Nantes", "Rennes", "Grenoble"};
    // char* arrivees[] = {"Marseille", "Nice", "Toulouse", "Bordeaux", "Paris", "Strasbourg", "Lille", "Rennes", "Nantes", "Lyon"};

    // Trajet * tab_trajet[10];

    // // Allocation dynamique et création des trajets
    // for (int i = 0; i < 10; i++) {
    //     tab_trajet[i] = Trajet (departs[i], arrivees[i]);
    //     monCatalogue.ajouter(*&tab_trajet[i]);
    // }

    Trajet trajet6("Marseille", "Nice");
    monCatalogue.ajouter(&trajet1);
    monCatalogue.ajouter(&trajet2);
    monCatalogue.ajouter(&trajet3);
    monCatalogue.ajouter(&trajet4);
    monCatalogue.ajouter(&trajet6);
    

    // Affichage des trajets
    cout << "Contenu du catalogue:" << endl;
    monCatalogue.Afficher();

    // Recherche de trajets
    cout << "\nRecherche de trajets:" << endl;
    monCatalogue.search();

    
    

    return 0;
}



    
