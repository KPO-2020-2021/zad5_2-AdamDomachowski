#pragma once

#include <iostream>
#include <list>
#include <memory>
#include <iomanip>
#include <fstream>
#include "goraGran.hh"
#include "goraSzczyt.hh"
#include "plaskowyz.hh"
#include "prism6.hh"
#include "lacze_do_gnuplota.hh"
#include "Drone.hh"
#include "bottom.hh"
#define ilosc_dronow_na_scenie 2
/*! \brief klasa Scena odpowiada za umieszczanie obiektów na scenie oraz za obslge uzytkownika */

class Scena
{
PzG::LaczeDoGNUPlota Lacze;
Drone *tab[ilosc_dronow_na_scenie]; /*! \brief tablica dronów*/
Bottom *podloze; /*! \brief wskaźnik na przygotowaną podloge*/
std::list<std::shared_ptr<Solid>> lista_przeszkod; /*! \brief lista zawierajaca wskazniki na przeszkody*/
int numer_elementu;
public:
Scena(); /*! \brief przygotowuje scene*/
void rysuj(); /*! \brief rysuje sytuacje*/
bool menu(); /*! \brief wyswietla menu i odpowiada za wybor drona*/
};
