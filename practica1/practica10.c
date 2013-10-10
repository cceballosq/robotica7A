#include<16F887A.h>
#device adc=10
#use delay (clock = 4000000)
#include <stdlib.h> //libreia para funciones como read_adc y otras
#fuses XT,NOWDT,PUT,NOLVP,NOBROWNOUT
int valor;

void main ()
{

set_tris_a(0xff);//se pone el puerto RA analogo de entrada
set_tris_d(0x00);//se pone el puerto RD en salida para prender los led

setup_adc_ports(ALL_ANALOG);//configuracion de los puertos analogos
setup_adc(ADC_CLOCK_DIV_32);//el osilador del ADC

while (true)
{

set_adc_channel(0);
delay_us(10);
valor = read_adc();
if(valor){
  output_d(0x01);
}else{
  output_d(0x00);
}

set_adc_channel(1);
delay_us(10);
valor = read_adc();
if{
  output_d(0x02);
}else{
  output_d(0x00);
}





}

}

