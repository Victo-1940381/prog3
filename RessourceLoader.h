#pragma once
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
const int max_row = 2700;
const int max_col = 12;

class RessourceLoader
{ 
private:
	string m_nom_fichier;
	
	/*vector<double> datavalue;
	string line;
	char del = ',';
	while (getline(file, line,del)) {
		datavalue.push_back(stod(line));
	}
	return datavalue;*/

public:
	RessourceLoader(string nom_fichier);
	vector<double> data(string nom_fichier);
	void getTrainData(string nom_fichier);
	void getTestData(string nom_fichier);
	
	


};
