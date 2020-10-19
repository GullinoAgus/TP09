/***************************************************************************//**
  @file     inout.c
  @brief    El archivo contiene la funcion necesaria para que nuestro programa pueda comunicarse con el usuario
  @author   Grupo1
 ******************************************************************************/

#include "inout.h"
#include "configuracion.h"
#include <stdio.h>

/* Funcion leerEntrada: Se encarga de leer el string ingresado por el usuario para luego darselo al programa principal
 * Escribe lo ingresado por el usuario en el arreglo dado como argumento y devuelve el valor del largo del string.
 * En el caso de que se haya superado la cantidad maxima de caracteres permitida devuelve -1 en el largo 
 */


int leerEntrada(char* entrada){ 
    
    char c;
    int i = 0;
    int terminado = 0;
    int largo = 0;
    
    while(terminado == 0){
        
        c = getchar();
        
        if(i == TAMMAX && c != '\n'){   //Si se supero el tamaño maximo entonces acabo el programa y devuelvo largo = -1
            terminado = 1;
            largo = -1;
        }
        else if(c == '\n'){        //si se ingreso \n entonces se acabo el string, por lo que termino el ciclo y devuelvo el largo
            terminado = 1;
            largo = i;
        }
        else{
            entrada[i] = c;         //En el caso contrario a los anteriores sigo armando el string
            i++;
        }
    }
    
    return largo;
}

