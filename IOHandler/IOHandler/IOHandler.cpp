#include "IOHandler.h"

void IOHandler::get_from_vtu() {
	std::ifstream file(filename);
	bool isInsidePoint = false;
	if (file.is_open()) {
		while (std::getline(file, line)) {
			if (line.find("<DataArray") != std::string::npos) {
				// npos는 못찾은 경우
				// 이런식으로 찾아들어가면될듯 line 별로
			}
		}
	}
}

void IOHandler::get_from_vtk() {

}