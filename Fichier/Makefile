#Label chemin d'accès
SRC_PATH = src/
BIN_PATH = bin/



Mips : $(BIN_PATH)MIPS.o $(BIN_PATH)Read.o $(BIN_PATH)ecritureFichier.o $(BIN_PATH)Registre.o $(BIN_PATH)charToHexa.o $(BIN_PATH)memoire.o $(BIN_PATH)fonctions.o
	gcc -o $@ -Wall $^ -lm -fPIC
	#clear
	#./Mips Test/Test4.txt


$(BIN_PATH)MIPS.o : $(SRC_PATH)MIPS.c

	gcc -Wall -c -o $@ $< -fPIC

$(BIN_PATH)Read.o : $(SRC_PATH)Read.c $(SRC_PATH)Read.h

	gcc -Wall -c -o $@ $< -fPIC

$(BIN_PATH)ecritureFichier.o : $(SRC_PATH)ecritureFichier.c $(SRC_PATH)ecritureFichier.h

	gcc -Wall -c -o $@ $< -fPIC

$(BIN_PATH)Registre.o : $(SRC_PATH)Registre.c $(SRC_PATH)Registre.h

	gcc -Wall -c -o $@ $< -fPIC

$(BIN_PATH)charToHexa.o : $(SRC_PATH)charToHexa.c $(SRC_PATH)charToHexa.h

	gcc -Wall -c -o $@ $< -lm -fPIC

$(BIN_PATH)memoire.o : $(SRC_PATH)memoire.c $(SRC_PATH)memoire.h

	gcc -Wall -c -o $@ $< -fPIC

$(BIN_PATH)fonctions.o : $(SRC_PATH)fonctions.c $(SRC_PATH)fonctions.h

	gcc -Wall -c -o $@ $< -fPIC
