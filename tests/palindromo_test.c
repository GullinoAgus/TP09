#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palindromo.h"

#define ESPAL 1             //Si es palindromo == 1
#define NOESPAL 0           //Si no es palindromo == 0

void esPalindromo(char entrada[]);
void noEsPalindromo(char entrada[]);

int main(int argc, char** argv) {
    
    printf("%%SUITE_STARTING%% test_palindromo\n");
    printf("%%SUITE_STARTED%%\n");
    
    //Empezamos las pruebas con strings que no son palindromos
    noEsPalindromo("007");  
    noEsPalindromo(":V :O");
    noEsPalindromo("0U22U1");
    noEsPalindromo("Ho  la  s  ");
    noEsPalindromo("124323");
    noEsPalindromo("EFee3FE?");
    
    //Empezamos las pruebas con strings que son palindromos
    esPalindromo("Uwu");
    esPalindromo("??..?");      //String sin caracteres alfanumericos es palindromo
    esPalindromo(":V :v");      //Cualquier caracter que no sea alfanumerico se ignora
    esPalindromo(" Ho oH");
    esPalindromo("H o o H     ");
    esPalindromo("Ana lleva nenes al abad, al reconocerla dabala Senen avellana.");
    
    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}

void esPalindromo(char entrada[]){
    
    
    printf("%%TEST_STARTED%% es_palindromo (test_palindromo)\n");
    
    if(ESPAL != palindromo(entrada, entrada + strlen(entrada))){              //Si el resultado no es el esperado, informar error
        
        printf("%%TEST_FAILED%% time=0 testname=es_palindromo (test_palindromo) message= esperado: Es palindromo - obtenido: No es palindromo - entrada: %s\n", entrada);
    }
    
    printf("%%TEST_FINISHED%% time=0 es_palindromo (test_palindromo)\n");
   
}



void noEsPalindromo(char entrada[]){
    

    printf("%%TEST_STARTED%% no_palindromo (test_palindromo)\n");
    
    if(NOESPAL != palindromo(entrada, entrada + strlen(entrada))){            //Si el resultado no es el esperado informar error, informar error
        
        printf("%%TEST_FAILED%% time=0 testname=no_palindromo (test_palindromo) message= esperado: No es palindromo - obtenido: Es palindromo - entrada: %s\n", entrada);
        
    }
    
    printf("%%TEST_FINISHED%% time=0 no_palindromo (test_palindromo)\n");
   
}