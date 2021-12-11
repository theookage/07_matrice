/*
  ---------------------------------------------------------------------------
  Fichier     : sortMatrice.cpp
  Nom du labo : 07 - Matrice
  Auteur(s)   : Mario Amos & Théo Coutaudier
  Date        : 8.12.2021
  But         : Librairie mettant à disposition des utilitaires pour mélanger ou
                trier une matrice

 Référence    : http://www.cplusplus.com/reference/algorithm/shuffle/?kw=shuffle
                https://www.cplusplus.com/reference/algorithm/sort/

Compilateur   : Mingw-w64 g++ 11.2.0

  ---------------------------------------------------------------------------
*/

#include <algorithm>
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

#include "vecteur.h"

using namespace std;


/**
 * Indique quel vecteur possede le plus petit ellement entre v1 et v2
 * @param m Matrice
 * @return 1 si le plus petit element de v1 et plus petit que celui de v2
 */
bool minElement(const Vecteur& v1, const Vecteur& v2);


void shuffleMatrice(Matrice& m)
{
   //creer une seed en fonction du temps
   unsigned seed = chrono::system_clock::now().time_since_epoch().count();
   //warning car conversion long long en unsigned perte de precision
   shuffle(m.begin(), m.end(), default_random_engine(seed)); //mélange aleatoirement
}

void sortMatrice(Matrice& m)
{
   sort(m.begin(), m.end(), minElement); //trie en fonction de minElement
}

bool minElement(const Vecteur& v1, const Vecteur& v2)
{
   return *min_element(v1.begin(), v1.end()) < *min_element(v2.begin(), v2.end());
}