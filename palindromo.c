/***************************************************************************//**
  @file     +palindromo.c+
  @brief    +Incluye macros de manejo de caracteres. Contiene una funcion que se usa para determinar si un string es palindromo o no.+
  @author   +Grupo 1+
 ******************************************************************************/

#include "palindromo.h"
#include "configuracion.h"
#include <stdio.h>

/*esta macro devuelve 1 si un parametro es una letra minuscula, mayuscula o un numero. En caso contrario devuelve 0.*/
#define ESALFANUM(c) (('a' <= (c) && (c) <= 'z') || ('A' <= (c) && (c) <= 'Z') || ('0' <= (c) && (c) <= '9'))

/*esta macro determina si un parametro es una letra mayuscula o no, en caso de que lo sea, transforma el caracter en una letra minuscula.*/
#define AMINUSCULA(c) (('A' <= (c) && (c) <= 'Z') ? ((c) + 'a'-'A') : (c)) 

int palindromo(char* inicio, char* fin){
    
    if(inicio >= fin){	    /*caso base de la funcion recursiva.*/
        return 1;
    }
    else{
        if(ESALFANUM(*inicio) == 1){
            if(ESALFANUM(*fin) == 1){
                if(AMINUSCULA(*inicio) == AMINUSCULA(*fin)){	/*se revisan dos caracteres para saber si son iguales.*/
                    return palindromo(inicio+1, fin-1);         /*si los caracteres concuerdan, se siguen revisando caracteres hacia el centro de la frase.*/
                }
                else{
                    return 0;                           /*si se detecta que la frase no es un palindromo, la funcion devuelve 0.*/
                }
            }
            else{
                return palindromo(inicio, fin-1);	/*si el caracter de la derecha no era alfanumerico, se vuelve a llamar la funcion modificando el limite derecho.*/
            }
        }
        else{
            return palindromo(inicio+1, fin);           /*si el caracter de la izquierda no era alfanumerico, se vuelve a llamar la funcion modificando el limite izquierdo.*/
        }

    }
}
