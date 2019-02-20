#include <stdio.h>
int contarDecimales(float);

int main(int argc, char *argv[])
{
	/*Entradas*/
float numeroDecimal;

	/*Procedimiento*/
scanf("%f",&numeroDecimal);
	/*Salidas*/
printf("El número de decimales en %f es %d\n",numeroDecimal,
                                              contarDecimales(numeroDecimal));
	return 0;
}

int contarDecimales(float _numeroDecimal)
{
  int contadorDecimales = 0;
  float parteDecimal = 0;

  parteDecimal = _numeroDecimal - (int)_numeroDecimal;
  while(parteDecimal > 0.0)
  {
    contadorDecimales++;
    parteDecimal = parteDecimal * 10.0;
    printf("%p\n",parteDecimal );
    parteDecimal =  parteDecimal - (int)parteDecimal;
    printf("Iteración %d y parteDecimal:%f\n",contadorDecimales, parteDecimal );
  }
  return contadorDecimales;
}
