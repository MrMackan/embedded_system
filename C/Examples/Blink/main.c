#include <avr/io.h>

#define F_CPU 16000000UL
#include <util/delay.h>

int main() {
  DDRC |= 0x80;

  while (1) {
    PORTC |= 0x80; // 0b10000000 = 128
    _delay_ms(200);
    PORTC &= ~0x80;
    _delay_ms(200);
  }

  return 0;
}
