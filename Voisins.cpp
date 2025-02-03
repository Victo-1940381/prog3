
#include <fstream>
#include <sstream>
#include <iostream>
#include "RessourceLoader.h"
#include <vector>
#include <string>
#include <string.h>
string fichier = "doner.csv";
using namespace std;

int main()
{ //toute le code en commentaire se sont des teste que j'ai effectuer
	//ifstream file("TextFile1.txt");
	//ifstream file("doner.csv"); /*erreur varaible false et rentre pas dans boucle while*/
    
	/*ifstream file(fichier);
	string line;
	
	for (int i = 0;i < 20; i++) {
		getline(file, line, ',');
		cout << line << " ";
	}*/
	
   RessourceLoader donner(fichier);
   vector <float> valeur = donner.data(fichier);
	

	
	//donner.getTrainDatalinked(valeur);
	//donner.display();
	//donner.getTrainData(valeur);
	//donner.getTestData(valeur);

	

}

