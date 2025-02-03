#pragma once
struct Noeud {
	float donnee;
	Noeud* suivant = nullptr;
	Noeud(float nouv) {
		donnee = nouv;
		suivant = nullptr;
	}
	//Noeud* avant = nullptr;
};
