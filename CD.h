#pragma once
#include "pch.h"
#include <string>
#include <list>
#include <limits>
#include <algorithm>
#include <queue>
#include <fstream>
#include <filesystem>
#include "Cancion.h"

using namespace System;
//STRUCT CD CONTIENE LOS ELEMENTOS DE CADA CD INDIVIDUAL//
struct CD {

	std::string Nombre; 

	int NumeroCanciones;

	std::list<Cancion> Lista;


};

//LA CLASE CDs CONTIENE TODOS LOS METODOS 
ref class CDs
{
	
	Cancion* CancionActual = nullptr;
public:

	void LeerCarpeta(std::string direccion, std::list<CD> &Lista, bool LecturaValida);
	bool VerificarFormato(std::string elemento);
	void ListaCDs(std::list<CD> &Lista, std::queue<Cancion> &Cola);
	void CheckCola(std::queue<Cancion> &Cola);
	void SortByArtista(std::queue<Cancion> &Cola, int formato);
	void SortByNombre(std::queue<Cancion> &Cola, int formato);
	void SortByDuracion(std::queue<Cancion> &Cola, int formato);
	void Sort(std::queue<Cancion> &Cola);
	void ReproduccionActual(Cancion* Rola);
	void ReproduccionSiguiente(std::queue<Cancion>& Cola);
	void PonerCancionActual(Cancion* Rola);
	Cancion* ReturnCancionActual();
	void Imprimir(std::queue<Cancion>& Cola);
	void Reinicio(std::queue<Cancion>& Cola, std::list<CD> &Albums);
};

