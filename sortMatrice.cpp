/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : 07 - Matrice
  Auteur(s)   : Mario Amos & Théo Coutaudier
  Date        : 8.12.2021
  But         : Tester la librairie qui met à disposition des utilitaires de
                traitement de vecteur ou matrice

 http://www.cplusplus.com/reference/algorithm/shuffle/?kw=shuffle

Compilateur : Mingw-w64 g++ 11.2.0

  ---------------------------------------------------------------------------
*/

#include <algorithm>
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

#include "vecteur.h"

using namespace std;

unsigned seed = chrono::system_clock::now().time_since_epoch().count();

void shuffleVecteur(Vecteur& v)
{
   //warning car conversion long long en unsigned perte de precision
   shuffle(v.begin(), v.end(), default_random_engine(seed));
}

void shuffleMatrice(Matrice& m)
{
   //warning car conversion long long en unsigned perte de precision
   shuffle(m.begin(), m.end(), default_random_engine(seed));
}

auto minelement(const Vecteur& v)
{
   return min_element(v.begin(), v.end());
}
void sortMatrice(Matrice& m)
{
   sort(m.begin(), m.end(), min_element);
}