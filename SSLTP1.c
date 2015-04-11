/* Programa en lenguaje C que imprime una tabla con valores pasados de Celsius a Fahrenheit
*Silvina Paula Schreiber
*11/04/2015
*/

#include <stdio.h>

main()
{
 float fahr, celsius;
 int lower, upper, step;
 
 lower= -17;
 upper= 148;
 step= 20;
 
 celsius= lower;
 while (celsius<= upper) 
 {
  fahr = (9.0/5.0) * celsius + 32.0;
  printf ("%3.0f%6.1f\n", celsius, fahr);
  celsius = celsius + step;	
 }
 }
