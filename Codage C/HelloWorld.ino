#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);

  // Allumer tous les pixels (bloc plein sur chaque case)
  for (int ligne = 0; ligne < 2; ligne++) {
    lcd.setCursor(0, ligne);
    for (int col = 0; col < 16; col++) {
      lcd.write(255);
    }
  }

  delay(2000);   // Attendre 2 secondes
  lcd.clear();   // Tout effacer
}

void loop() {}
