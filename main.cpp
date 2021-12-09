/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : 07 - Matrice
  Auteur(s)   : Mario Amos & Théo Coutaudier
  Date        : 8.12.2021
  But         : Tester la librairie qui met à disposition des utilitaires de
                traitement de vecteur ou matrice

  Compilateur : Mingw-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

#include "vecteur.h"

using namespace std;

int main() {
   Vecteur v1 = {1, 2, 3};
   Matrice m1 = {{3,2,1},{8,9,6},{3,0,2}};
   Matrice vide = {};

   cout << "Vecteur      : " << v1 << endl
        << "Matrice      : " << m1 << endl
        << "estCarre     : " << (estCarre(m1)     ? "oui" : "non") << endl
        << "estReguliere : " << (estReguliere(m1) ? "oui" : "non") << endl << endl;

   cout << "minCol       : " << minCol(m1)         << endl
        << "sommeLigne   : " << sommeLigne(m1)     << endl
        << "sommeColonne : " << sommeColonne(m1)   << endl
        << "vectSommeMin : " << vectSommeMin(m1)   << endl << endl;

   cout << "Avec une matrice vide :" << endl
        << "minCol       : " << minCol(vide)         << endl
        << "sommeLigne   : " << sommeLigne(vide)   << endl
        << "sommeColonne : " << sommeColonne(vide) << endl
        << "vectSommeMin : " << vectSommeMin(vide) << endl;


   shuffleVecteur(v1);
   shuffleMatrice(m1);
   cout << "Vecteur Shuffled  : " << v1               << endl
        << "Matrice Shuffled  : " << m1;
   //------------------------------------------------------
   // fin de programme
   cout << endl;
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   return EXIT_SUCCESS;
}
