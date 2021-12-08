/*
  ---------------------------------------------------------------------------
  Fichier     : vecteur.h
  Auteur(s)   : Mario Amos & Théo Coutaudier
  Date        : 08.12.2021
  But         : Librairie mettant à disposition des utilitaires pour le traitement
                de vecteur ou matrice

  Compilateur : Mingw-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#ifndef INC_07_MATRICE_VECTEUR_H
#define INC_07_MATRICE_VECTEUR_H
#include <iostream>
#include <vector>
using Vecteur = std::vector<int>;
using Matrice = std::vector<Vecteur>;

std::ostream& operator<< (std::ostream& os, const Vecteur& v);
std::ostream& operator<< (std::ostream& os, const Matrice& v);

unsigned minCol(const Matrice& m);
Vecteur sommeLigne(const Matrice& m);
Vecteur sommeColonne(const Matrice& m);
Vecteur vectSommeMin(const Matrice& m);

#endif //INC_07_MATRICE_VECTEUR_H
