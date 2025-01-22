#include "liste_chainee.h"
#include "trajet.h"
#include "trajet_compose.h"
#include "trajet_simple.h"
#include "catalogue.h"
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include <typeinfo>
using namespace std;

void intToStr(int, char *);

int main() 
{       
        static int numTS = 0;
        static int numTC = 0;
    Catalogue MonCatalogue;
    
    int n;
   
    while(true)
{
        cout<<"\n=== Menu Principal ==="<<endl;
        cout<<"1. Afficher le Menu" << endl;
        cout<<"2. Affichage du catalogue"<<endl;
        cout<<"3. Ajouter un trajet simple"<<endl;
        cout<<"4. Ajouter un trajet compose"<<endl;
        cout<<"5. Recherche simple"<<endl;
        cout<<"6. Lecture de la data"<<endl;
        cout<<"7. Sauvegarder"<<endl;
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
       
        cout<<"Rentrer la ville de depart : ";

        cin>>dep;

        cout<<"Rentrer la ville d'arrivee : ";

        cin>>arr;

        cout<<"Rentrer le moyen de transport : ";

        cin>>means;

        //Nommage automatique des Trajets
        char nom[23] = "TS";
        char nombreStr[20];
        intToStr(++numTS, nombreStr);
        strcat(nom, nombreStr);

        Trajet_simple *nomTS = new Trajet_simple(nom, dep, arr, means);

        MonCatalogue.ajouter(nomTS);

        break;
}
        case 4:
        
{       
        Liste_chainee * listTC = new Liste_chainee(); 
        
        cout<<"Nombre de trajets simples : ";
        
        int nbrTrajet = 0;

        cin >> nbrTrajet;

        for(int i = 0; i < nbrTrajet; i++)
{
            
            char dep[100], arr[100], means[100];
            cout << "Rentrer la ville de depart : "<<endl;

             cin>>dep;

            cout<<"Rentrer la ville d'arrivee : "<<endl ;

             cin>>arr;

            cout<<"Rentrer le moyen de transport : "<<endl;

             cin>>means;

             //Nommage automatique des Trajets
                char nom[23] = "TS";
                char nombreStr[20];
                intToStr(++numTS, nombreStr);
                strcat(nom, nombreStr);

            Trajet_simple *nomTS = new Trajet_simple(nom, dep, arr, means);
            
            listTC->append(nomTS);
}               
        //Nommage automatique des Trajets
        char nom[23] = "TC";
        char nombreStr[20];
        intToStr(++numTC, nombreStr);
        strcat(nom, nombreStr);

        Trajet_compose * nomTC = new Trajet_compose(nom,listTC);
        MonCatalogue.ajouter(nomTC);

        break;
}
        case 5:
{
        cout << "\nRecherche de trajets:" << endl;
        MonCatalogue.search();

        break;
}
        case 6:
        
        {
                break;
        }

        case 7:

{

        string filename = "trajet_data.txt";
        ofstream outFile;
        outFile.open(filename,ios::app);

        // streambuf *oldCountBuffer = cout.rdbuf( outFile.rdbuf());

        if (!outFile) {
        cerr << "Erreur : Impossible d'ouvrir le fichier pour ecrire." << endl;
        return 1;
        }

        cout<<"\nChoisir la scenario"<<endl;
        cout<<"-----------------------------------------------------------"<<endl;
        cout<<"71. Tous les trajets" << endl;
        cout<<"72. Selon le type de trajets (simple (S) ou compose (C)) (indisponible)"<<endl;
        cout<<"73. Selon la ville (depart/arrive) (indisponible)"<<endl;
        cout<<"74. Selon une selection du trajets (indisponible)"<<endl;

        
        
        int choix;
        cin >> choix;
        switch (choix)
{
        case 71:

{      
        Liste_chainee::Noeud * temp = MonCatalogue.getList().gethead(); 

        if (temp == nullptr)                                    //la liste chainée est vide
{
        outFile << "la liste chainee est vide" << endl;
}
        while(temp != nullptr)                                  //parcours de la liste chainée
        {
        
        // if (typeid(temp) == typeid(Trajet_simple))
// {
        cout << typeid(temp->trajet).name();
        outFile << "1:" << endl;
        outFile << temp->trajet->getDepart() << "%";
        outFile << temp->trajet->getArrivee() << ",";
        // outFile << temp->trajet->getMeansofTrans() <<".";
        outFile << endl << ";" << endl;

        cout << "1:" << endl;
        cout << temp->trajet->getDepart() << "%";
        cout << temp->trajet->getArrivee() << ",";
        // cout << temp->trajet->getMeansofTrans() <<".";
        cout << endl << ";" << endl;
// }
        temp = temp->next;
}
        outFile.flush();
        outFile.close();
}
                break;

        default:
        {
                break;
        }
}
                break;

}
        default:
        cout<<"Option invalide, Veuillez reessayer."<<endl;
        break;
}
}

        return 0;
}
            
//Fonction qui convertit int en char* pour nommer automatiquement les trajets dans le menu (on aurait pu utiliser sprintf)
void intToStr(int num, char *str) {
// Algorithme : Suite de divisions euclidiennes pour decomposer en puissances de 10
//
    int i = 0, j;
    char tempChar;

    if (num == 0) {
        str[i++] = '0';
    } else {
        while (num > 0) {
            str[i++] = (num % 10) + '0';
            num /= 10;
        }
    }
    str[i] = '\0'; 

    //Inversion du chiffre obtenu
    for (j = 0; j < i / 2; j++) {
        tempChar = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = tempChar;
    }
}




        




    
  
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   



    
