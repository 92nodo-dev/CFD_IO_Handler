#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

class IOHandler 
{
private :
	std::string filename;
	std::string* resultType;
	std::string line;
	std::vector<std::string> variableName;

	double* result;

public :
	IOHandler(std::string filename) { this->filename = filename; };
	~IOHandler() { free(resultType); free(result); };
	void get_from_vtk();
	void get_from_vtu();
};