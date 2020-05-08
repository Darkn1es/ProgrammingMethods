#include <iostream>
#include <vector>
#include <string>
#include <fstream>


enum {
	OOP = 0,
	PROCEDURE,
	FUNCTIONAL
};

enum{
		SINGLE =0,
		MULTIPLE,
		INTERFACE
	};

enum {
	STRICT_TYPE = 0,
	DYNAMIC_TYPE

};
struct progLanguage
{
	std::string name;
	int year;
	bool isAbstract;
	bool lazyEval;
	int type;
	int typization;
	int inherence;
};

void ReadFromFile(std::ifstream &fin, std::vector<progLanguage> &container);
void WriteToFile(std::ofstream &fout, std::vector<progLanguage> &container);