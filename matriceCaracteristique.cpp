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

#include <vector>
#include "vecteur.h"

using namespace std;

bool estReguliere(const Matrice& m){
   size_t taille = m[0].size();
   for (size_t i = 1; i < m.size(); ++i) {
      if(m[i].size()!=taille)
      {
         return false;
      }
   }
   return true;
}

bool estCarre(const Matrice& m){
   if(estReguliere(m))
   {
      if(m[0].size() == m.size()){
         return true;
      }
   }
   return false;
}

