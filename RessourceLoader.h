#pragma once
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include "train_data.h"
using namespace std;

class RessourceLoader
{ 
	Noeud* head;
private:
	string m_nom_fichier;
	Noeud* m_premier;


public:
	vector<float> dataone(string nom_fichier, int num_ligne);
	RessourceLoader(string nom_fichier) : head(NULL) {}
	vector<float> data(string nom_fichier);
	void getTrainData(vector<float> value);
	void getTestData(vector<float> value);
	Noeud* ajouter_fin(float value,Noeud* head)
	{
		
		Noeud* nouveau = new Noeud(value);
		if (head == nullptr)
		{
			return nouveau;
		}

		Noeud* fin = head;
		while (fin->suivant != nullptr) {
			fin = fin->suivant;
		}
		fin->suivant = nouveau;
		return head;

	
	}
	Noeud* getTrainDatalinked(vector<float> data) {
		
		Noeud* head = new Noeud(data[0]);
		for (int i = 1;i < (data.size() / 2);i++) {
			if ((i + 1) % 12 == 0) {
				i++;
			}
			head = ajouter_fin(data[i],head);
		}
		return head;
		//Noeud* value = new Noeud();
		//value->donnee = data[0];
		//value->suivant = nullptr;
		//value->avant = nullptr;
		//cout <<value->donnee;
		//for (int i = 1;i < 13 /*(data.size() / 2)*/;i++)
		//{
		//	Noeud* nouv = new Noeud();
		//	nouv->donnee = data[i];
		//	nouv->suivant = nullptr;
		//	nouv->avant = nullptr;

		//	if (i == 1) {
		//		value->suivant = nouv;
		//		nouv->avant = value;
		//	}
		//	else {
		//		nouv->avant = nouv;

		//	}
		//	cout << " " << nouv->donnee;
		//	//value->suivant = 
		//	//Noeud* les_donner = ajouter_fin(data[i],value);
		//	

		//}
		
	}
	Noeud* getTestDataLinked(vector<float> data) {

		Noeud* head = new Noeud(data[0]);
		for (int i = (data.size() / 2);i < data.size();i++) {
			if ((i + 1) % 12 == 0) {
				i++;
			}
			head = ajouter_fin(data[i], head);
		}
		return head;
	}

	
}

;