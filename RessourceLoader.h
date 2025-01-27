#pragma once
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int max_row = 2700;
const int max_col = 11;
//int donner();
vector<string> data();
ifstream file("binary-winequality-white.csv");
class RessourceLoader
{ 

public:

private:
	
};
/*
int donner() {
	
	if (!file.is_open()) {
		cerr << "Error opening file!" << endl;
		return 1;
	}
	string line;
	vector<string> data;
	int row = 0;
	while (getline(file, line) && row < max_row) {
		stringstream ss(line);
		string cell;
		int col = 0;
		while(getline(ss, cell, ',') && col< max_col){
		}
	}
	return 0;
}*/
vector<string> data() {
	vector<string> datavalue;
	string line;
	while (getline(file, line)) {
		datavalue.push_back(line);
	}
	return datavalue;
}