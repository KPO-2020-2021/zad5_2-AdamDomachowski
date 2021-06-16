#pragma once  

#include "Solid.hh"
/*! \brief klasa Cuboid jest klasa pochodna i dziedziczy wzystko z klasy Solid */
class Cuboid : public Solid 
{
public:
/*! \brief konstruktor parametryczny*/
Cuboid(Vector3D srodek=Vector3D(), double a=30, double b=30, double c=20, std::string nazwa_pliku_prostopadloscianu = "../datas/cuboid.dat");
};