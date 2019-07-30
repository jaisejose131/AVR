#include <avr/io.h>   // Adding AVR Library.

#include <util/delay.h> //Adding delay Library

int main(void)
{
  DDRB |= (1<<4); // Defining all the Pins of PORT B as output
  while(1) // A infinite loop unless returned 0
  {
    PORTB = 0x10; //Setting all the Pins of PORT B to HIGH
    _delay_ms(100); // Adding 1000ms second delay
    PORTB &= ~(1<<4);//Setting all the Pins of PORT B to LOW
    _delay_ms(100); // Adding 1000ms second delay
    PORTB |= (1<<4);
    _delay_ms(100);
    PORTB &= ~(1<<3);
    _delay_ms(100); 
    
    
  }
}
