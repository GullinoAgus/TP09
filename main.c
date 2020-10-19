/***************************************************************************//**
  @file     main.c
  @brief    El archivo main del programa
  @author   Grupo1
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "palindromo.h"
#include "configuracion.h"
#include "inout.h"

int main(void) {

    char entrada[TAMMAX];                   //creo el arreglo donde se alojara la frase ingresada
    int esPal = 0;
    int largo = 0;
    
    printf("Ingrese la palabra para verificar si es palindromo: ");
    largo = leerEntrada(entrada);           //leo la entrada y calculo tambien el largo de la misma
    
    if(largo == -1){
        printf("La frase ingresada es demasiado larga, ingrese una frase con tamaño menor o igual a %d caracteres.", TAMMAX);
    }
    else{
       
        largo--;                            //acomodo el valor del largo del string para que me pueda servir como indice a la ultima letra del arreglo
        
        esPal = palindromo(entrada, entrada + largo); 
        
        if(esPal == 1){                     //Si es palindromo muestro el mensaje correspondiente
            printf("La frase es palindromo");
        }
        else{
            printf("La frase NO es palindromo");
        }
    }
    
    return (EXIT_SUCCESS);
}
