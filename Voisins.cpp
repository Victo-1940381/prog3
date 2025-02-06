
#include <fstream>
#include <sstream>
#include <iostream>
#include "RessourceLoader.h"
#include "statistique.h"
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
	*/
	vector <float> val = {50.2,10.4,18.3,90.9,60,35};
   RessourceLoader donner(fichier);
   cout << moyenne(val);
  
   //vector <float> valeur = donner.data(fichier);
	
   //Noeud* reponce = donner.getTrainDatalinked(valeur);
   //Noeud* reponce = donner.getTestDataLinked(valeur);
  // cout << reponce->donnee << " ";
 /*  while (reponce != nullptr) {
	   cout << reponce->donnee << " ";
	   reponce = reponce->suivant;
   }*/
	
	
   

	//donner.display();
	//donner.getTrainData(valeur);
	//donner.getTestData(valeur);

	

}

