
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
{
	//ifstream file("TextFile1.txt");
	//ifstream file("doner.csv"); /*erreur varaible false et rentre pas dans boucle while*/
    
	
	
	
	RessourceLoader donner(fichier);
	 //donner.data(fichier);
	//donner.getTrainData(fichier);
	donner.getTestData(fichier);

	/* vector<double> test = donner.data(fichier);
	 for(int i =0;i<test.size();i++){
	 cout << test[i] << " ";
	 }¸*/
	

}

