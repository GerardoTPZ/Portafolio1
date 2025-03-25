#include <stdio.h>

// Funciones para la conversión entre monedas
float quetzales_a_dolares(float quetzales)
{
  return quetzales / 7.7; // Supongamos que 1 USD = 7.7 GTQ
}

float quetzales_a_euros(float quetzales)
{
  return quetzales / 8.5; // Supongamos que 1 EUR = 8.5 GTQ
}

float dolares_a_quetzales(float dolares)
{
  return dolares * 7.7; // Supongamos que 1 USD = 7.7 GTQ
}

float dolares_a_euros(float dolares)
{
  return dolares * 0.92; // Supongamos que 1 USD = 0.92 EUR
}

float euros_a_quetzales(float euros)
{
  return euros * 8.5; // Supongamos que 1 EUR = 8.5 GTQ
}

float euros_a_dolares(float euros)
{
  return euros / 0.92; // Supongamos que 1 EUR = 1.087 USD
}

int main()
{
  int opcion_origen, opcion_destino;
  float cantidad, resultado;

  printf("Bienvenido al conversor de monedas\n");
  printf("Seleccione la moneda de origen:\n");
  printf("1. Quetzales (GTQ)\n");
  printf("2. Dólares (USD)\n");
  printf("3. Euros (EUR)\n");
  printf("Opción: ");
  scanf("%d", &opcion_origen);

  printf("Seleccione la moneda de destino:\n");
  printf("1. Quetzales (GTQ)\n");
  printf("2. Dólares (USD)\n");
  printf("3. Euros (EUR)\n");
  printf("Opción: ");
  scanf("%d", &opcion_destino);

  printf("Ingrese la cantidad a convertir: ");
  scanf("%f", &cantidad);

  // Realizar la conversión según la opción elegida
  if (opcion_origen == 1)
  { // Origen: Quetzales
    if (opcion_destino == 1)
    {
      resultado = cantidad; // Mismo valor en Quetzales
    }
    else if (opcion_destino == 2)
    {
      resultado = quetzales_a_dolares(cantidad);
    }
    else if (opcion_destino == 3)
    {
      resultado = quetzales_a_euros(cantidad);
    }
  }
  else if (opcion_origen == 2)
  { // Origen: Dólares
    if (opcion_destino == 1)
    {
      resultado = dolares_a_quetzales(cantidad);
    }
    else if (opcion_destino == 2)
    {
      resultado = cantidad; // Mismo valor en Dólares
    }
    else if (opcion_destino == 3)
    {
      resultado = dolares_a_euros(cantidad);
    }
  }
  else if (opcion_origen == 3)
  { // Origen: Euros
    if (opcion_destino == 1)
    {
      resultado = euros_a_quetzales(cantidad);
    }
    else if (opcion_destino == 2)
    {
      resultado = euros_a_dolares(cantidad);
    }
    else if (opcion_destino == 3)
    {
      resultado = cantidad; // Mismo valor en Euros
    }
  }

  // Mostrar el resultado de la conversión
  printf("Resultado: %.2f\n", resultado);

  return 0;
}