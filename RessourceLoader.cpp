#include "RessourceLoader.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

vector<float> RessourceLoader::data(string nom_fichier) {
	ifstream file(nom_fichier);
	vector<float> datavalue;
	string line;
	string split;
	int comp = 0;
	char del = ',';
	string del2 = "\n";
	stringstream iss;
	while (getline(file, line)) {
		stringstream ss(line);
		while (getline(ss, split, del)) {
			datavalue.push_back(stof(split));
		}
		
	}
	return datavalue;
}
vector<float> RessourceLoader::dataone(string nom_fichier,int num_ligne) {
	ifstream file(nom_fichier);
	vector<float> datavalue;
	vector<string> ligne;
	string line;
	string split;
	int comp = 0;
	char del = ',';
	string del2 = "\n";
	stringstream iss;
	while (getline(file, line)) {
		ligne.push_back(line);
		
	}
	stringstream ss(ligne[num_ligne-1]);
	while(getline(ss, split,del)){
		if (comp == 11) {

		}
		else {
			datavalue.push_back(stof(split));
		}
		
		comp++;
		}
	return datavalue;
}
void RessourceLoader::getTrainData(vector<float> value) {
	for (int i = 0;i < (value.size() / 2);i++) {
		cout << value[i] << " ";
	}
	//essai avec un code inspiré d'internet mais ne marchais pas alors j'ai fait beaucoup plus simple
	/*ifstream file(nom_fichier);
	vector<float> datavalue;
	string line;
	string split;
	int comp = 0;
	char del = ',';
	while (getline(file, line,del)) {
	
		iss << line;
		datavalue.push_back(stof(line));
		while (getline(file, line, del)) {

			datavalue.push_back(stod(line));
		}
	}
	for (int i =0;i<(datavalue.size()/2);i++)
	{
		
		cout << datavalue[i] << ", ";
		
	}*/
}
void RessourceLoader::getTestData(vector<float> value) {
	for (int i = (value.size() / 2);i < value.size();i++) {
		cout << value[i] << " ";
	}
	//essai avec un code inspiré d'internet mais ne marchais pas alors j'ai fait beaucoup plus simple
	/*ifstream file(nom_fichier);
	vector<double> datavalue;
	string line;
	stringstream iss;
	int comp = 0;
	char del = ',';
	while (getline(file, line)) {

		iss << line;
		datavalue.push_back(stod(line));
		while (getline(file, line, del)) {

			datavalue.push_back(stod(line));
		}
	}
	for (int i = (datavalue.size() / 2);i < datavalue.size();i++)
	{

		cout << datavalue[i] << ", ";

	}*/
}




