#include <avr/io.h>
#include <util/delay.h>
#define F_CPU = 16000000UL

int main(){
    //set PORTB5 as output
    DDRB|=(1<<DDB5);

   */ //infinite loop
    while(1){
        //set PORTB5
        PORTB |=(1<<PORTB5);
        //wait using _delay macro (it calculates time depending on clock speed)
        _delay_ms(50000);
        //reset PORTB5
        PORTB &= ~(1<<PORTB5); 
        _delay_ms(50000);
    }

}