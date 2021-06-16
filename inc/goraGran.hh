#pragma once  

#include "Solid.hh"
/*! \brief klasa goraGran przechowuje informacjie o przeszkodzie i jest to klasa pochodna i dziedziczy wzystko z klasy Solid */
class goraGran : public Solid 
{
public:
/*! \brief konstruktor parametryczny*/
goraGran(Vector3D srodek=Vector3D(), double a=50, double b=50, double c=50, std::string nazwa_pliku_goraGranu = "../datas/goraGran.dat");
};

