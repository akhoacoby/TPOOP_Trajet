#Fichier makefile associé à notre application de voyage

#Nom de l'exécutable et édition des liens

trajets : trajet.o trajet_simple.o trajet_compose.o liste_chainee.o catalogue.o test.o
	@echo "EDL de trajets"
	g++ -o trajets trajet.o trajet_simple.o trajet_compose.o liste_chainee.o catalogue.o test.o

#Règle explicite pour nos fichiers sources

trajet.o : trajet.h trajet.cpp
	@echo " Compilation de trajet"
	g++ -c trajet.cpp -o trajet.o

trajet_simple.o : trajet_simple.h trajet_simple.cpp trajet.h
	@echo "Compilation de trajet_simple"
	g++ -c trajet_simple.cpp -o trajet_simple.o

trajet_compose.o : trajet_compose.cpp trajet_compose.h trajet.h
	@echo "Compilation de trajet_compose"	
	g++ -c trajet_compose.cpp -o trajet_compose.o

liste_chainee.o : liste_chainee.cpp liste_chainee.h trajet.h
	@echo "Compilation de liste_chainee"
	g++ -c liste_chainee.cpp -o liste_chainee.o

catalogue.o : catalogue.cpp catalogue.h liste_chainee.h trajet.h
	@echo "Compilation de catalogue"
	g++ -c catalogue.cpp -o catalogue.o

