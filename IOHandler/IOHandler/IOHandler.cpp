#include "IOHandler.h"

void IOHandler::get_from_vtu() {
	std::ifstream file(filename);

	if (file.is_open()) {
		while (std::getline(file, line)) {
			if (line.find("<DataArray") != std::string::npos) {

			}
		}
	}
}

void IOHandler::get_from_vtk() {

}