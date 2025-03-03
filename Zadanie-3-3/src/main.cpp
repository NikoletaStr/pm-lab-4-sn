#include <Arduino.h>
#include <LiquidCrystal.h>

// Inicjalizacja obiektu klasy LiquidCrystal:
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
char tablica[] = "Nikoleta";
int tabLen = 0;

void lcdClear(void);

void setup() {
  lcd.begin(16, 2); // Ustawienie liczby kolu
  lcd.print("Nikoleta Strozyk");
  tabLen = sizeof(tablica);
  delay(2000);
}

void loop() {
  for (int i = 0; i < (18 - tabLen); i++) {
    lcdClear();
    lcd.setCursor(i, 0);
    lcd.print(tablica);
    delay(1000);
  }
  
  for (int i = (17 - tabLen); i >= 0; i--) {
    lcdClear();
    lcd.setCursor(i, 1);
    lcd.print(tablica);
    delay(1000);
  }
}

void lcdClear(void) {
  lcd.setCursor(0, 0);
  lcd.print("                ");
  lcd.setCursor(0, 1);
  lcd.print("                ");
}