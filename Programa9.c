#include<stdio.h>

int main()
{
    /*Melanie Aguilar
    Equipo Amuke
    2 mayo 2021
    programa 9. Calcula la Intensidad de corriente de un circuito eléctrico
    */ 
   
    float valor1, valor2, valorF; 
    printf("\n \nPrograma 9");
    printf("\n \n Ingrese el valor1 deseado"); //valor1 es el valor del voltaje//
    scanf("%f, &valor1");
    printf("\n \n Ingrese el valor2"); //valor2 es el valor de la resistencia//
    scanf("%f, &valor2");
    valorF=valor1/valor2;
    printf("\n \n el resultado es %f, valorF");
    
    return 0;
    
}