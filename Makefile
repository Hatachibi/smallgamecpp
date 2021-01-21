JeuRpg: JeuRpg.o board.o demander_placement_gobelet.o positionner_gobelet.o affichage_plateau.o jeu_gobblers.h
	gcc -Wall jeu_gobblers.o board.o demander_placement_gobelet.o positionner_gobelet.o affichage_plateau.o -o jeu_gobblers

JeuRPG.o:jeu_gobblers.c jeu_gobblers.h board.h demander_placement_gobelet.h positionner_gobelet.h affichage_plateau.h
	gcc -Wall jeu_gobblers.c -c

demander_placement_gobelet.o:demander_placement_gobelet.c demander_placement_gobelet.h board.h affichage_plateau.h
	gcc -Wall demander_placement_gobelet.c -c


affichage_plateau.o:affichage_plateau.c affichage_plateau.h board.h positionner_gobelet.h
	gcc -Wall affichage_plateau.c -c