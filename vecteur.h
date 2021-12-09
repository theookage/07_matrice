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

using Vecteur = std::vector<int>;
using Matrice = std::vector<Vecteur>;

std::ostream& operator<< (std::ostream& os, const Vecteur& v);
std::ostream& operator<< (std::ostream& os, const Matrice& m);

/**
 * Retourne la longueur minimum des vecteurs d’une matrice
 * @param m Matrice
 * @return  Longueur minimum des vecteurs d'une matrice
 */
unsigned minCol(const Matrice& m);

/**
 * Retourne un vecteur contenant la somme des valeurs de chacune des lignes.
 * @param m Matrice
 * @return Vecteur contenant la somme des valeurs de chacune des lignes
 */
Vecteur sommeLigne(const Matrice& m);

/**
 * Retourne un vecteur contenant la somme des valeurs de chacune des colonnes
 * @param m Matrice
 * @return  vecteur contenant la somme des valeurs de chacune des colonnes
 */
Vecteur sommeColonne(const Matrice& m);

/**
 * Retourne le vecteur d’une matrice dont la somme des valeurs est la plus faible.
 * @param m Matrice
 * @return  Vecteur d’une matrice dont la somme des valeurs est la plus faible
 */
Vecteur vectSommeMin(const Matrice& m);

bool estReguliere(const Matrice& m);
bool estCarre(const Matrice& m);

#endif //INC_07_MATRICE_VECTEUR_H
