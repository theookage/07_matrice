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
#include <numeric>

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

/**
 * Trouve la taille maximum des colonnes d'une matrice
 * @param m
 * @return
 */
unsigned maxCol(const Matrice& m) {
   if (m.empty())
      return 0;
   return (*max_element(m.begin(), m.end(), comparerTailleVecteur)).size();
}

/**
 * Effectue la somme de toutes les valeurs d'un vecteur
 * @param v
 * @return
 */
int sommeVecteur(const Vecteur& v) {
   return accumulate(v.begin(), v.end(), 0);
}

Vecteur sommeLigne(const Matrice& m) {
   Vecteur resultat(m.size());
   transform(m.begin(), m.end(), resultat.begin(), sommeVecteur);
   return resultat;
}

int add(int v1, int v2) {
   return (v1 + v2);
}

/**
 * Est équivalent à l'addition de deux vecteur:
 * Valeur de retour = {v1[0]+v2[0],v1[1]+v2[1],v1[2]+v2[2],...}
 * @param v1
 * @param v2
 * @return
 */
Vecteur additionColonne(Vecteur v1, Vecteur v2) {
   //On doit resize le vecteur le plus petit, sinon cela va aller chercher une
   //valeur "aléatoire" en mémoire pour l'addition
   if(v2.size() > v1.size()) {
      v1.resize(v2.size(), 0);
   } else if (v1.size() > v2.size()) {
      v2.resize(v1.size());
   }

   Vecteur res(max(v1.size(), v2.size()), 0);
   transform(v1.begin(), v1.end(), v2.begin(), res.begin(), add);
   return res;
}

Vecteur sommeColonne(const Matrice& m) {
   return accumulate(m.begin(), m.end(), Vecteur(maxCol(m), 0), additionColonne);
}

Vecteur vectSommeMin(const Matrice& m) {
   if (m.empty())
      return {};

   Vecteur somme = sommeLigne(m);
   //On récupère un itérateur de min_element, on en soustrait le début du vecteur
   //pour en ressortir l'index
   unsigned index = min_element(somme.begin(), somme.end()) - somme.begin();
   return m[index];
}