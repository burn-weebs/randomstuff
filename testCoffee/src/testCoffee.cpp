/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/burn_weebs/Documents/testCoffee/src/testCoffee.ino"
void setup();
void myHandler(const char *event, const char *data);
void printMenu();
#line 1 "c:/Users/burn_weebs/Documents/testCoffee/src/testCoffee.ino"
void setup(){
  Particle.subscribe("menu_545", myHandler, MY_DEVICES);
  printMenu();

}

void myHandler(const char *event, const char *data){
  Serial.println("Selected Option ");
  Serial.print(*data);

  if (*data == '1'){

    if(*data == 'A'){
      Serial.println("Okie Then");
      delay(1500);
      Serial.println("Pouring some coffee rn brb");
      delay(10000);
      Serial.println("Pouring some milk into your coffee");
      delay(5000);
      Serial.println("Done! Enjoy your coffee!");
    }

    else if(*data == 'B'){
      Serial.println("No milk for you then");
      delay(1500);
      Serial.println("Pouring some coffee rn brb");
      delay(10000);
      Serial.println("Done! Enjoy your coffee!");
    }

    else if(*data == 'C'){
      Serial.println(">:(");
      delay(5000);
      Serial.println("(>'-')> <('-'<) ^('-')^ v('-')v(>'-')>");
      Serial.println("aight no hard feelings, cya lol");
    }


      Serial.println("Do you want milk in your coffee?");
      Serial.println("A. Yes Plz");
      Serial.println("B. No Thx");
      Serial.println("C. On second thought I don't need coffee");

  }
  else if (*data == '2'){
    delay(3000);
    Serial.println("aight cya");
  }
  else {
      Serial.println("invalid input smh");
  }
}

void printMenu(){
  Serial.println("Coffee! V0.03.0");
  delay(3000);
  Serial.println("Do you want some coffee?");
  Serial.println("1. I NEED COFFEE!");
  Serial.println("2. um no thx");
  Serial.print("Select your option: ");

}

//Made by Evil Hilda#7121, special thanks to That's evil.#2992
//So I lost v0.02.2 in a Win10 update oof, so imma rush V0.03.0
//Sugar not included, you gotta add your own sugar lmao
//This machine uses full cream milk
//Bring your own mug/cup/glass/whatchamacallit hollow cylinder