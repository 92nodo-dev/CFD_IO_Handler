#pragma once
#include <string>

class IOHandler 
{
private :
	std::string filename;
	std::string* resultType;
	double* result;

public :
	IOHandler(std::string filename) { this->filename = filename; };
	~IOHandler() { free(resultType); free(result); };
	void get_from_vtk();
	void get_from_vtu();
};