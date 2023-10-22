#include "pch.h"
#include <string>
#include <list>
#include <limits>
#include <algorithm>
#include <queue>
#include <fstream>
#include <filesystem>
#include "Cancion.h"
#include "CD.h"
#include "dirent.h"

using namespace System;

void LeerCarpeta(std::string direccion, std::list<CD>& Lista, bool LecturaValida) {

	DIR* directorio;
	struct dirent* elemento;
	std::string item;
	CD* CDS = new CD();


	if (directorio = opendir(direccion.c_str())) {

		while (elemento = readdir(directorio)) {

			if (std::string(elemento->d_name) != "." && std::string(elemento->d_name) != "..") {

				size_t pos = std::string(elemento->d_name).find_last_of(".");

				CDS->Nombre = std::string(elemento->d_name).substr(0, pos);
				CDS->NumeroCanciones = 0;
				CDS->Lista.clear();

				std::string Acceso = direccion + " / " + elemento->d_name;

				std::fstream archivo(Acceso);

			}

		}
	}

	


};
