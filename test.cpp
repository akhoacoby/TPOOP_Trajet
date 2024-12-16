#include "liste_chainee.h"
#include "trajet.h"
#include "trajet_compose.h"
#include "catalogue.h"
#include <cstring>
#include <iostream>
using namespace std;




int main() {
    // Création de trajets simples
    Trajet* trajet1 =  new Trajet("Paris", "Marseille");
    Trajet* trajet2 = new Trajet("Lyon", "Milan");
    Trajet* trajet3 =  new Trajet("Paris", "Dakar");

    // Création d'un trajet composé
    Trajet_compose* trajetCompose = new Trajet_compose();
    trajetCompose->Ajouter(trajet2);
    trajetCompose->Ajouter(new Trajet("Milan", "Paris"));

    // Création du catalogue
    Catalogue monCatalogue;

    // Ajout des trajets au catalogue
    monCatalogue.ajouter(trajet1);
    monCatalogue.ajouter(trajet3);
    monCatalogue.ajouter(trajetCompose);

    // Affichage des trajets
    cout << "Contenu du catalogue:" << endl;
    monCatalogue.Afficher();

    // Recherche de trajets
    cout << "\nRecherche de trajets:" << endl;
    monCatalogue.search();

    
    

    return 0;
}



    
