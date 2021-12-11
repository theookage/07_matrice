/*
  ---------------------------------------------------------------------------
  Fichier     : matriceCaracteristique.cpp
  Nom du labo : 07 - Matrice
  Auteur(s)   : Mario Amos & Théo Coutaudier
  Date        : 8.12.2021
  But         : Librairie permettant de determiner si une matrice est régulière ou
                carré

  Compilateur : Mingw-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/


#include <algorithm>
#include "vecteur.h"
#include <iostream>

using namespace std;

bool sizeOK = true;
size_t taille ;

/**
 * Vérifie que la taille du vecteur correspond avec taille
 * @param m Matrice
 * @return
 */
void isSizeOk(const Vecteur& v)
{
   //met sizeOK false si la taille du vecteur n'est pas la même que taille
   if (v.size() != taille)
   {
      sizeOK = false;
   }
}

bool estReguliere(const Matrice& m) {

   if(m.empty()) //Vérifie si la matrice est vide
   {
      return true;
   }
   //utilise la taille du premier vecteur de la amtrice comme taille de référence
   taille = m[0].size();

   //Vérifie que chaque vecteur de la matrice m ont la même taille
   for_each(m.begin(),m.end(), isSizeOk);
   return sizeOK;
   }

bool estCarre(const Matrice& m){
   if(m.empty()) //Vérifie si la matrice est vide
   {
      return true;
   }
   if(estReguliere(m)) //vérifie si la matrice est régulière
   {
      if(m[0].size() == m.size()){
         return true;
      }
   }
   return false;
}

