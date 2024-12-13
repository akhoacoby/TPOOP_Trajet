#include "liste_chainee.h"
#include "trajet.h"
#include "trajet_compose.h"
#include "catalogue.h"
#include <cstring>
#include <iostream>
using namespace std;


int main()
{
    Trajet* trajet1 = new Trajet("Paris", "Marseille");
    Trajet* trajet2 = new Trajet("Lyon", "Milan");
    Trajet* trajet3 = new Trajet("Paris", "Dakar");
    
    Trajet* trajettest = new Trajet("Milan", "Paris");
    Trajet_compose* trajet4 = new Trajet_compose();

    trajet4->Ajouter(trajet2);
    trajet4->Ajouter(trajettest);


    Catalogue MonCatalogue; //constructeur de liste

    Liste_chainee Liste = MonCatalogue.getList();
    

    Liste.append(trajet1);
    Liste.append(trajet2);
    Liste.append(trajet3);

    trajet4->Afficher();

    Liste.Afficher();
    
    MonCatalogue.search();

    delete trajet1;
    delete trajet2;
    delete trajet3;
    return 0;
}

    
