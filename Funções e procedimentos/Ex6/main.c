




/* ===== Inclusão de bibliotecas ====== */

#include <stdlib.h>
#include <stdio.h>  
#include <math.h>   // Função para Fórmulas matemáticas
#include <string.h> // Função que manipula strings



/* ===== Protótipo das funções ====== */

long int n_segundos (int n_horas); // Devolve o numero de segundosm em um conjunto de horas

/* ===== Variáveis Globais ====== */



/* ===== Função Principal ====== */

int main()
{
    int n;

    printf("Digite o valor em Horas para retornar em Segundos: ");
    scanf("%d", &n); 
   
    printf("Numero em segundos: %d s\n", n_segundos(n));



    system("PAUSE");
    return 0;
}


/* ===== Desenvolvimento das Funções ====== */

long int n_segundos (int n_horas)
{

return n_horas*3600;


}



