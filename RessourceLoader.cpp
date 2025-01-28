#include "RessourceLoader.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

//ifstream file("binary-winequality-white.csv");
RessourceLoader::RessourceLoader(string nom_fichier) {
	m_nom_fichier = nom_fichier;
}
vector<double> RessourceLoader::data(string nom_fichier) {
	ifstream file(nom_fichier);
	vector<double> datavalue;
	string line;
	int comp = 0;
	char del = ',';
	stringstream iss;
	while (getline(file, line)) {

		iss << line;
		datavalue.push_back(stod(line));
		while (getline(file, line, del)) {

			datavalue.push_back(stod(line));
		}
	}
	return datavalue;
}
void RessourceLoader::getTrainData(string nom_fichier) {
	ifstream file(nom_fichier);
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
	for (int i =0;i<(datavalue.size()/2);i++)
	{
		
		cout << datavalue[i] << ", ";
		
	}
}
void RessourceLoader::getTestData(string nom_fichier) {
	ifstream file(nom_fichier);
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

	}
}



