/*
  ---------------------------------------------------------------------------
  Fichier     : matrice.h
  Auteur(s)   : Mario Amos & Théo Coutaudier
  Date        : 08.12.2021
  But         : Librairie mettant à disposition des utilitaires pour le traitement
                de vecteur ou matrice

  Compilateur : Mingw-w64 g++ 11.2.0
  ---------------------------------------------------------------------------
*/

#ifndef INC_07_MATRICE_MATRICE_H
#define INC_07_MATRICE_MATRICE_H

#include <vector>

using Vecteur = std::vector<int>;
using Matrice = std::vector<Vecteur>;

/**
 * Affiche un vecteur au format (x,x,x)
 * @param os Flux de sortie
 * @param v  Vecteur
 * @return   Flux de sortie
 */
std::ostream& operator<< (std::ostream& os, const Vecteur& v);

/**
 * Affiche une matrice au format [(x,x,x), (x,x,x)]
 * @param os Flux de sortie
 * @param v  Vecteur
 * @return   Flux de sortie
 */
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

/**
 * Vérifie si tout les vecteurs d'une matrice ont la même taille.
 * @param m Matrice
 * @return  Un bool indiquant si tout les vecteurs ont la même taille
 */
bool estReguliere(const Matrice& m);

/**
 * Vérifie si la matrice estCarré, si la matrice est vide elle est considéré carré.
 * @param m Matrice
 * @return  un bool indiquant si la matrice est carré ou non.
 */
bool estCarre(const Matrice& m);

/**
 * Melange les vecteurs d'une matrice en fonction d'un clock, ne change pas
 * l'ordre à l'interieur des vecteurs.
 * @param m Matrice
 * @return
 */
void shuffleMatrice(Matrice& m);

/**
 * Trie la matrice en fonction du min_element de chaque vecteur
 * @param m Matrice
 * @return
 */
void sortMatrice(Matrice& m);

#endif //INC_07_MATRICE_MATRICE_H
