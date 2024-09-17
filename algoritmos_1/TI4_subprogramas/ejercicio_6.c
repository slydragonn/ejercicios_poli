#include <stdio.h>

void aplicarDescuento(float, float);
void aplicarDescuentoEfectivo(float);
void aplicarDescuentoTarjeta(float);

void main()
{
  char medioPago;
  float totalCompra;

  printf("Seleccione el medio de pago:\nE: Efectivo.\nT: Tarjeta.\n");
  scanf("%c", &medioPago);
  printf("Digite el valor total de la compra: \n");
  scanf("%f", &totalCompra);

  if(medioPago == 'E' || medioPago == 'e')
  {
    aplicarDescuentoEfectivo(totalCompra);
  }
  else
  {
    if(medioPago == 'T' || medioPago == 't')
    {
      aplicarDescuentoTarjeta(totalCompra);
    }
    else
    {
      printf("Datos invalidos");
    }
  }

}

void aplicarDescuento(float valorDescuento, float valorCompra)
{
  float descuento, precioTotal;

  descuento = valorCompra * valorDescuento;
  precioTotal = valorCompra - descuento;

  printf("El valor del descuento fue: %.2f y el total a pagar es: %.2f\n", descuento, precioTotal);
}

void aplicarDescuentoEfectivo(float valorCompra)
{
  if(valorCompra <= 100000)
  {
    aplicarDescuento(0.20, valorCompra);
  }
  else
  {
    if(valorCompra > 100000 && valorCompra <= 200000)
    {
      aplicarDescuento(0.30, valorCompra);
    }
    else
    {
      if(valorCompra > 200000)
      {
        aplicarDescuento(0.40, valorCompra);
      }
      else
      {
        printf("Datos invalidos");
      }
    }
  }
}

void aplicarDescuentoTarjeta(float valorCompra)
{
  if(valorCompra <= 100000)
  {
    aplicarDescuento(0.10, valorCompra);
  }
  else
  {
    if(valorCompra > 100000 && valorCompra <= 200000)
    {
      aplicarDescuento(0.15, valorCompra);
    }
    else
    {
      if(valorCompra > 200000)
      {
        aplicarDescuento(0.20, valorCompra);
      }
      else
      {
        printf("Datos invalidos");
      }
    }
  }
}
