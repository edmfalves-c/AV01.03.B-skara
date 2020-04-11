#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
float a, b, c, delta, x1, x2;

printf("\nDigite o coeficiente 'a': ");
scanf("%f", &a); 
printf("\nDigite o coeficiente 'b': ");
scanf("%f", &b); 
printf("\nDigite o coeficiente 'c': ");
scanf("%f", &c); 
delta = b*b - 4*a*c;
if (delta > 0)
{
x1 = (-b + sqrt(delta))/(2*a);
x2 = (-b -sqrt(delta))/(2*a);
printf("\n\n\nO Valor de Delta é: %f\n", delta);
printf("\nO Valor da PRIMEIRA raiz é: %.2f\n", x1);
printf("\nO Valor da SEGUNDA raiz é: %.2f\n\n\n", x2);
}
else
{
    if (delta < 0)
    {
      printf("\n Não existem raízes reais!");
    }
    else
    {
      x1 = -b/(2*a);
      x2 = x1;
      printf("\n As raízes são iguais e seu valor é %.2f", x1);
    }

}
getchar();
return 0;
}