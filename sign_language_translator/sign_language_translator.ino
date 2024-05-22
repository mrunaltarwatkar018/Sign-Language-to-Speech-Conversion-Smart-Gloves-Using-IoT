
int thumb = A0;
int firstFinger = A1;
int secondFinger = A2;
int thirdFinger = A3;
int fourthFinger = A4;
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  pinMode(thumb,INPUT);
  pinMode(firstFinger,INPUT);
  pinMode(secondFinger,INPUT);
  pinMode(thirdFinger,INPUT);
  pinMode(fourthFinger,INPUT);
  lcd.begin(16,2);
}

void loop()
{
  int thumb_finger = analogRead(thumb);
  int first_finger = analogRead(firstFinger);
  int second_finger = analogRead(secondFinger);
  int third_finger = analogRead(thirdFinger);
  int fourth_finger = analogRead(fourthFinger);

  if(thumb_finger >= 20)
  {
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.println("I NEED FOOD");
    delay(500);
  }

  else if(first_finger>=20)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.println("I NEED TO REST");
    delay(500);
  }

  else if(second_finger>=20)
  {
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.println("I NEED WATER");
    delay(500);
    
  }

  else if(third_finger>=20)
  {
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.println("MY NAME IS...");
    delay(500);
  }

  else if(fourth_finger>=20)
  {
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.println("I AM FROM TZ");
    delay(500);
  }

  else
  {
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.println("NOTHING");
    delay(100);
  }
}
