#pragma once  

#include "Solid.hh"
/*! \brief klasa plaskowyz jest klasa pochodna i dziedziczy wzystko z klasy Solid */
class plaskowyz : public Solid 
{
public:
/*! \brief konstruktor parametryczny*/
plaskowyz(Vector3D srodek=Vector3D(), double a=50, double b=50, double c=50, std::string nazwa_pliku_plaskowyzu = "../datas/plaskowyz.dat");
};

