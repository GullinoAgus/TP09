/***************************************************************************//**
  @file     +palindromo.h+
  @brief    +Incluye el prototipo y explicacion de la funcion "palindromo"+
  @author   +Grupo 1+
 ******************************************************************************/

#ifndef PALINDROMO_H
#define PALINDROMO_H

/**
 * @brief TODO: esta funcion recursiva determina si una frase es o no un palidromo. Solo se tienen en cuenta los caracteres alfanumericos, todos los demas se ignoran, por ejemplo "ho#@> oh" es un palindromo.
 * @param inicio es un puntero al comienzo del string.
 * @param fin es un puntero al ultimo caracter del string.
 * @return Devuelve un 1 si la frase es un palindromo. En caso contrario devuelve 0.
*/
int palindromo(char* inicio, char* fin);

#endif /* PALINDROMO_H */

