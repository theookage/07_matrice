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
   Matrice m1 = {{3,2,1},{8,9,6}};

   cout << "Vecteur : " << v1 << endl << "Matrice : " << m1<< endl;
   cout << "estCarre     : " << estCarre(m1)     << endl
        << "estReguliere : " << estReguliere(m1) << endl;

   cout << sommeLigne(m1) << endl;
   cout << sommeColonne(m1) << endl;


   //------------------------------------------------------
   // fin de programme
   cout << endl;
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   return EXIT_SUCCESS;
}
