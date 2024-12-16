#include "liste_chainee.h"
#include "trajet.h"
#include "trajet_compose.h"
#include "catalogue.h"
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
   Liste_chainee liste;
    Trajet* trajet1 = new Trajet("Paris", "Marseille");
    liste.append(trajet1);
    return 0;  // Vérifiez le destructeur ici
}
