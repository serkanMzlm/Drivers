#include "lcd_2x16.hpp"

int main(){
    LCD lcd;
    lcd.writeString("Hello World");
    lcd.setCursor(0, 1);
    lcd.writeString("---- serkan ---lksafhsdfsdkfısdf");
    // lcd.control(1, 0, 1);
    getchar();
    lcd.shutdownLCD();
    return 0;
}


