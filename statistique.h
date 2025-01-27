#pragma once
#include <vector>
#include <algorithm> 
#include <cmath>
using namespace std;
double moyenne(vector<double> valeurs) 
{
	double total = 0.0;
	double moyenne = 0.0;
	int longueur = valeurs.size();
	for (int i = 0; i < longueur; i++)
	{
		total += valeurs[i];
	}
	moyenne = total / longueur;
	return moyenne;
}
double medianne(vector<double> valeurs) 
{
	stable_sort(valeurs.begin(), valeurs.end());
	int longueur = valeurs.size();
	int pos_med;
	double mediane;
	if (longueur%2 == 1) {
		pos_med = (longueur + 1) / 2;
		mediane = valeurs[pos_med - 1];
	}
	else {
		double val_1;
		double val_2;
		double pos_med_pair = (longueur + 1) / 2;
		int pos_round = round(pos_med_pair);
		pos_med = pos_med_pair;
		double decimal = pos_med_pair - pos_med;
		if (decimal < 0.5) {
			val_1 = valeurs[pos_round];
			val_2 = valeurs[pos_round + 1];
			mediane = (val_1 + val_2) / 2;
		}
		else {
			val_1 = valeurs[pos_round - 1];
			val_2 = valeurs[pos_round];
			mediane = (val_1 + val_2) / 2;
		}
	}
	return mediane;
}
double equart_type(vector<double> valeurs) {
	vector<double> moyene_type;
	double total;
	stable_sort(valeurs.begin(), valeurs.end());
	int longeur = valeurs.size();
	double moyenne_type = moyenne(valeurs);
	double somme;
	for (int i = 0;i < longeur;i++) {
		moyene_type.push_back(valeurs[i]-moyenne_type);
		somme += moyene_type[i];
	}
	total = sqrt((somme / (longeur - 1)));
	return total;
}
double distance()