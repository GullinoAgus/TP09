/***************************************************************************//**
  @file     inout.h
  @brief    Header de inout.h
  @author   Grupo1
 ******************************************************************************/

#ifndef INOUT_H
#define INOUT_H

/**
 * @brief Funcion leerEntrada: Se encarga de realizar la comunicacion con el usuario para leer la entrada a traves de la consola
 * @param Recibe como argumento el arreglo donde escribira lo ingresado por el usuario. Este debe tener el tamaño definido por TAMMAX
 * @return Devuelve en el caso de que no se haya sobrepasado el limite de caraceres, el largo de la frase entrada. En caso contrario
 * devuelve -1, indicando que hubo un problema
*/

int leerEntrada(char* entrada);

#endif /* INOUT_H */

