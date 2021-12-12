/*
  ---------------------------------------------------------------------------
  Fichier     : affichageMatrice.cpp
  Auteur(s)   : Mario Amos & Théo Coutaudier
  Date        : 08.12.2021
  But         : Librairie mettant à disposition des utilitaires pour l'affichage
                de vecteur ou matrice'

  Compilateur : Mingw-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include <iostream>

#include "matrice.h"

using namespace std;

ostream &operator<<(ostream& os, const Vecteur& v) {
   os << "(";
   //warning conseil d'utiliser auto ingoré
   Vecteur::const_iterator debut = v.begin();
   for (Vecteur::const_iterator i = debut; i != v.end(); ++i) {
      if (i != debut)
         os << ", ";
      os << *i;
   }
   os << ")";
   return os;
}

ostream &operator<<(ostream &os, const Matrice &m) {
   os << "[";
   //warning conseil d'utiliser auto ingoré
   Matrice::const_iterator debut = m.begin();
   for (Matrice::const_iterator i = debut; i != m.end(); ++i) {
      if (i != debut)
         os << ", ";
      os << *i;
   }
   os << "]";
   return os;
}
