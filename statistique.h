#pragma once
#include <vector>
#include <algorithm> 
#include <cmath>
#include <math.h>
using namespace std;
float moyenne(vector<float> valeurs) 
{
	float total = 0.0;
	float moyenne = 0.0;
	int longueur = valeurs.size();
	for (int i = 0; i < longueur; i++)
	{
		total += valeurs[i];
	}
	moyenne = total / longueur;
	return moyenne;
}
float medianne(vector<float> valeurs) 
{
	stable_sort(valeurs.begin(), valeurs.end());
	int longueur = valeurs.size();
	int pos_med;
	float mediane;
	if (longueur%2 == 1) {
		pos_med = (longueur + 1) / 2;
		mediane = valeurs[pos_med - 1];
	}
	else {
		float val_1;
		float val_2;
		float pos_med_pair = (longueur + 1) / 2;
		int pos_round = round(pos_med_pair);
		pos_med = pos_med_pair;
		float decimal = pos_med_pair - pos_med;
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
float equart_type(vector<float> valeurs) {
	vector<float> moyene_type;
	float total;
	stable_sort(valeurs.begin(), valeurs.end());
	int longeur = valeurs.size();
	float moyenne_type = moyenne(valeurs);
	float somme =0.0;
	for (int i = 0;i < longeur;i++) {
		moyene_type.push_back(valeurs[i]-moyenne_type);
		somme += moyene_type[i];
	}
	total = sqrt((somme / (longeur - 1)));
	return total;
}
float distance(vector<float> point1, vector<float> point2) {
	float distance =0;
	float total;
	for (int i = 0; i < point1.size(); i++) {
		distance += pow((point2[i] - point1[i]), 2.0);
	}
	total = sqrt(distance);
	return total;
}
float dis_man(vector<float> point1, vector<float> point2) {
	float total_man =0;
	for (int i = 0; i < point1.size(); i++) {
		total_man += (point2[i] - point1[i]);
	}
	return total_man;
}