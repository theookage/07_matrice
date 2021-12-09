/*
  ---------------------------------------------------------------------------
  Fichier     : matriceCaracteristique.cpp
  Nom du labo : 07 - Matrice
  Auteur(s)   : Mario Amos & Théo Coutaudier
  Date        : 8.12.2021
  But         : Tester la librairie qui met à disposition des utilitaires de
                traitement de vecteur ou matrice

  Compilateur : Mingw-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/


#include <algorithm>
#include <vector>
#include "vecteur.h"
#include <iostream>

using namespace std;

bool sizeOK = true;

size_t taille ;

void test(const Vecteur& v)
{
   if (v.size() != taille)
   {
      sizeOK = false;
   }
}
bool estReguliere(const Matrice& m) {

   if(m.empty())
   {
      return true;
   }
   taille = m[0].size();
   for_each(m.begin(),m.end(), test);
   return sizeOK;
   }

bool estCarre(const Matrice& m){
   if(m.empty())
   {
      return true;
   }
   if(estReguliere(m))
   {
      if(m[0].size() == m.size()){
         return true;
      }
   }
   return false;
}

