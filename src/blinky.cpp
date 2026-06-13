#include <avr/io.h>
#include <util/delay.h>
#include "blinky.h"
// used to test flashing

void blinky(){
    DDRB |= (1 << PB6);

    while(1){
        PORTB |= (1 << PB6);
        _delay_ms(1000);
        
        PORTB &= ~(1 << PB6);
        _delay_ms(1000);
    }
}