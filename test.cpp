#include "liste_chainee.h"
#include "trajet.h"
#include "trajet_compose.h"
#include "trajet_simple.h"
#include "catalogue.h"
#include <cstring>
#include <iostream>
using namespace std;

int main() 
{

    Catalogue MonCatalogue;
    
    int n;
   
    while(true)
{
        cout<<"\n=== Menu Principal ==="<<endl;
        cout<<"1. Afficher le Menu" << endl;
        cout<<"2. Affichage du catalogue"<<endl;
        cout<<"3. Ajouter un trajet simple"<<endl;
        cout<<"4. Ajouter un trajet composé"<<endl;
        cout<<"5. Recherche simple"<<endl;
        cout<<"0. Quitter" << endl;
       

        cin >> n;
        switch(n)
{
        case 0:
{
            cout<< "Au revoir!" << endl;
            return 0;  
}
        case 1:
{

        break; //The menu is already shown at the start of the application
}
        case 2:
{

        MonCatalogue.Afficher(); //Affiche le catalogue

        break;
}
        case 3:
{        
        char dep[30], arr[30], means[30];
       
        cout<<"Rentrer la ville de départ : ";

        cin>>dep;

        cout<<"Rentrer la ville d'arrivée : ";

        cin>>arr;

        cout<<"Rentrer le moyen de transport : ";

        cin>>means;

        Trajet_simple *nomTS = new Trajet_simple(dep, arr, means);

        MonCatalogue.ajouter(nomTS);

        break;
}
        case 4:
        
{      
        Trajet_compose *nomTC = new Trajet_compose();

        cout<<"Nombre de trajets simples : ";
        
        int nbrTrajet = 0;

        cin >> nbrTrajet;

        for(int i = 0; i < nbrTrajet; i++)
{
            
            char dep[100], arr[100], means[100];
            cout << "Rentrer la ville de départ : "<<endl;

             cin>>dep;

            cout<<"Rentrer la ville d'arrivée : "<<endl ;

             cin>>arr;

            cout<<"Rentrer le moyen de transport : "<<endl;

             cin>>means;

            Trajet_simple *nomTS = new Trajet_simple(dep, arr, means);
            
            nomTC->Ajouter(nomTS);
}

            MonCatalogue.ajouter(nomTC);

            break;
}
        case 5:
{
        cout << "\nRecherche de trajets:" << endl;
        MonCatalogue.search();

        break;
}
        default:
        cout<<"Option invalide, Veuillez réessayer."<<endl;
        break;
}
}
        return 0;
}
            






        




    
  
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   



    
