/*
  ---------------------------------------------------------------------------
  Fichier     : calculVecteur.cpp
  Auteur(s)   : Mario Amos & Théo Coutaudier
  Date        : 08.12.2021
  But         : Librairie mettant à disposition des utilitaires pour le traitement
                de vecteur ou matrice

  Compilateur : Mingw-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#include <algorithm>

#include "vecteur.h"

using namespace std;

/**
 * @param v1 Premier vecteur à comparer
 * @param v2 Second vecteur à comparer
 * @return Retourne true si v1 est plus petit ou égal que v2, sinon false
 */
bool comparerTailleVecteur(const Vecteur& v1, const Vecteur& v2) {
   return v1.size() <= v2.size();
}

unsigned minCol(const Matrice& m) {
   if (m.empty())
      return 0;
   return (*min_element(m.begin(), m.end(), comparerTailleVecteur)).size();
}

Vecteur sommeLigne(const Matrice& m) {

}

Vecteur sommeColonne(const Matrice& m) {

}

Vecteur vectSommeMin(const Matrice& m) {

}