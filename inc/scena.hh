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
#define ilosc_dronow_na_scenie 3
/*! \brief klasa Scena odpowiada za umieszczanie obiektów na scenie oraz za obslge uzytkownika */

class Scena
{
PzG::LaczeDoGNUPlota Lacze;
Drone *tab[ilosc_dronow_na_scenie]; /*! \brief tablica dronów*/
Bottom *podloze; /*! \brief wskaźnik na przygotowaną podloge*/
std::list<std::shared_ptr<Solid>> lista_przeszkod; /*! \brief lista zawierajaca wskazniki na przeszkody*/
std::list<std::shared_ptr<Drone>> Lista_Dronow; /*! \brief lista zawierajaca wskazniki na drony*/
int numer_elementu, numer_drona;
public:
Scena(); /*! \brief przygotowuje scene*/
void rysuj(); /*! \brief rysuje sytuacje*/
void dodaj_drona(); /*! \brief rysuje sytuacje*/
bool menu(); /*! \brief wyswietla menu i odpowiada za wybor drona*/
};
