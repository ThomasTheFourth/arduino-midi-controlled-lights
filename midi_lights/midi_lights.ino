#include <FastLED.h>
#include <MIDIUSB.h>

#define LED_PIN 7
#define NUM_LEDS 600
#define ARRAY_SIZE 30

// Keys
// 0-10 - Activate tiers bottom to top at full brightness
// 12-22 - Activate tiers bottom to top at half 75% brightness
// 24-32 - Activate tiers bottom to top at 50% brightness
// 34-36 - Change primary color

CRGB leds[NUM_LEDS];
bool* keys = new bool[12] {false, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void setup() {
  Serial.begin(1200);
  while (!Serial);
  //  Serial.print("I am in setup");
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

// 34-36 - Change primary color
int primaryColor() {
  if (keys[34] == 1) {
    return HUE_RED;
  }
  if (keys[35] == 1) {
    return HUE_ORANGE;
  }
  if (keys[36] == 1) {
    return HUE_YELLOW;
  }
  if (keys[37] == 1) {
    return HUE_GREEN;
  }
  if (keys[38] == 1) {
    return HUE_AQUA;
  }
  if (keys[39] == 1) {
    return HUE_BLUE;
  }
  if (keys[40] == 1) {
    return HUE_PURPLE;
  }
  if (keys[40] == 1) {
    return HUE_PINK;
  }
  if (keys[41] == 1) {
    return random(0, 255);
  }
  return 255;
}

int lookupTable(String code) {

  if (code == "3c") {
    Serial.println("returning 0");
    return 0;
  }
  if (code == "01") {
    return 1;
  }
  if (code == "02") {
    return 2;
  }
  if (code == "03") {
    return 3;
  }
  if (code == "04") {
    return 4;
  }
  if (code == "05") {
    return 5;
  }
  if (code == "06") {
    return 6;
  }
  if (code == "07") {
    return 7;
  }
  if (code == "08") {
    return 8;
  }
  if (code == "09") {
    return 9;
  }
  if (code == "0A") {
    return 10;
  }
  if (code == "0B") {
    return 11;
  }
  if (code == "0C") {
    return 12;
  }
  if (code == "0D") {
    return 13;
  }
  if (code == "0E") {
    return 14;
  }
  if (code == "0F") {
    return 15;
  }
  if (code == "10") {
    return 16;
  }
  if (code == "11") {
    return 17;
  }
  if (code == "12") {
    return 18;
  }
  if (code == "13") {
    return 19;
  }
  if (code == "14") {
    return 20;
  }
  if (code == "15") {
    return 21;
  }
  if (code == "16") {
    return 22;
  }
  if (code == "17") {
    return 23;
  }
  if (code == "18") {
    return 24;
  }
  if (code == "19") {
    return 25;
  }
  if (code == "19") {
    return 25;
  }
  if (code == "1A") {
    return 26;
  }
  if (code == "1B") {
    return 27;
  }
  if (code == "1C") {
    return 28;
  }
  if (code == "1D") {
    return 29;
  }
  if (code == "1E") {
    return 30;
  }
  if (code == "1F") {
    return 31;
  }
  //  if (code == "20") {
  //    return 32;
  //  }
  //  if (code == "21") {
  //    return 33;
  //  }
  //  if (code == "22") {
  //    return 34;
  //  }
  //  if (code == "23") {
  //    return 35;
  //  }
  //  if (code == "24") {
  //    return 36;
  //  }
  //  if (code == "25") {
  //    return 37;
  //  }
  //  if (code == "26") {
  //    return 38;
  //  } if (code == "27") {
  //    return 39;
  //  }
  //  if (code == "28") {
  //    return 40;
  //  }
  //  if (code == "29") {
  //    return 41;
  //  }
  //  if (code == "2A") {
  //    return 42;
  //  }
  //  if (code == "2B") {
  //    return 43;
  //  }
  //  if (code == "2C") {
  //    return 44;
  //  }
  //  if (code == "2D") {
  //    return 45;
  //  } if (code == "2E") {
  //    return 46;
  //  }
  //  if (code == "2F") {
  //    return 47;
  //  }
  //  if (code == "30") {
  //    return 48;
  //  }
  //  if (code == "31") {
  //    return 49;
  //  }
  //  if (code == "32") {
  //    return 50;
  //  }
  //  if (code == "33") {
  //    return 51;
  //  }
  //  if (code == "34") {
  //    return 52;
  //  } if (code == "35") {
  //    return 53;
  //  }
  //  if (code == "36") {
  //    return 54;
  //  }
  //  if (code == "37") {
  //    return 55;
  //  }
  //  if (code == "38") {
  //    return 56;
  //  }
  //  if (code == "39") {
  //    return 57;
  //  }
  //  if (code == "3A") {
  //    return 58;
  //  }
  //  if (code == "3B") {
  //    return 59;
  //  } if (code == "3C") {
  //    return 60;
  //  }
  //  if (code == "3D") {
  //    return 61;
  //  }
  //  if (code == "3E") {
  //    return 62;
  //  }
  //  if (code == "3F") {
  //    return 63;
  //  }
  //  if (code == "40") {
  //    return 64;
  //  }
  //  if (code == "41") {
  //    return 65;
  //  }
  //  if (code == "42") {
  //    return 66;
  //  }
  //  if (code == "43") {
  //    return 67;
  //  }
  //  if (code == "44") {
  //    return 68;
  //  }
  //  if (code == "45") {
  //    return 69;
  //  }
  //  if (code == "46") {
  //    return 70;
  //  }
  //  if (code == "47") {
  //    return 71;
  //  }
  //  if (code == "48") {
  //    return 72;
  //  }
}


void loop() {
//  randomColors();
  midiEventPacket_t rx = MidiUSB.read();
  switch (String(rx.byte2, HEX)) {
    case "3c":            //Note On message
      Serial.println("hit");
      break;
    default:
      break;
  }

  //  midiEventPacket_t rx;
  //  do {
  //    //     randomColors();
  //    //    Serial.println("loop");
  //    rx = MidiUSB.read();
  //    if (rx.header != 0) {
  //
  //
  //      //      Serial.print(rx.byte2, HEX);
  //      String keyPressedCode = String(rx.byte2, HEX);
  //      randomColors();
  //      for (int i = 0; i < 599; i++)
  //      {
  //        Serial.println("");
  //        Serial.print("  |----");
  //        Serial.print(i);
  //        Serial.print("-");
  //        Serial.print(leds[i]);
  //        Serial.print("----|   ");
  //      }
  //     keys[0] = true;
  //     lookupTable(keyPressedCode);
  //      Serial.println(String(keys[0]));
  //      Serial.println(keyPressedCode);
  //
  //      Serial.println(StirlookupTable(keyPressedCode));
  //      if (keys[lookupTable(keyPressedCode)] == 0) {
  //        //        Serial.println("keyPressed let go");
  //        keys[lookupTable(keyPressedCode)] = 1;
  //      } else {
  //        //        Serial.println("keyPressed pressed");
  //        keys[lookupTable(keyPressedCode)] = 0;
  //      }
  //    }
  //
  //  } while (rx.header != 0);
}

//void everyOtherEven() {
//  FastLED.clear();
//  for (int i = 0; i <= NUM_LEDS - 1; i++) {
//    if ((i / ARRAY_SIZE) % 2 == 0) {
//      leds[i] = CHSV(HUE_AQUA, 255, 255);
//    } else {
//      leds[i] = CHSV(HUE_AQUA, 255, 100);
//    }
//    //    Serial.print("\n");
//  }
//  FastLED.show();
//}

//void burst() {
//  for (int x = 100; x <= 255; x++) {
//    for (int i = 0; i <= NUM_LEDS - 1; i++) {
//      leds[i] = CHSV(HUE_AQUA, 255, x);
//
//    }
//    FastLED.show();
//
//  }
//}



//void solidColor() {
//  FastLED.clear();
//  for (int i = 0; i <= NUM_LEDS - 1; i++) {
//    leds[i] = CHSV(HUE_AQUA, 255, 255);
//    FastLED.show();
//  }
//
//}
void randomColors() {
  FastLED.clear();
  for (int i = 0; i <= NUM_LEDS - 1; i++) {
    if (random(0, 10) % 2 == 0) {
      leds[i] = CRGB ( 100, 100, 100);
    }
  }
  FastLED.show();
}
//
//void everyOtherOdd() {
//  FastLED.clear();
//  for (int i = 0; i <= NUM_LEDS - 1; i++) {
//    if ((i / ARRAY_SIZE) % 2 == 1) {
//      leds[i] = CHSV(HUE_AQUA, 255, 255);
//    } else {
//      leds[i] = CHSV(HUE_AQUA, 255, 100);
//    }
//    //    Serial.print("\n");
//  }
//  FastLED.show();
//}
