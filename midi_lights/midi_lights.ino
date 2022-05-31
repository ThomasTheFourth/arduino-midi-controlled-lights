#include <MIDIUSB.h>
#include <FastLED.h>

#define LED_PIN 7
#define NUM_LEDS 360
#define ARRAY_SIZE 30
CRGB leds[NUM_LEDS];
int color = 0;

void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.clear();
  FastLED.show();
}

void loop() {
  //listen for new MIDI messages
  midiEventPacket_t rx = MidiUSB.read();
  processMidi(rx);
  symbol();

}

void symbol() {
  leds[359] = CHSV(HUE_AQUA, 255, 255); leds[358] = CHSV(HUE_AQUA, 255, 255); leds[357] = CHSV(HUE_AQUA, 255, 255); leds[356] = CHSV(HUE_AQUA, 255, 255); leds[355] = CHSV(HUE_AQUA, 255, 255); leds[354] = CHSV(HUE_AQUA, 255, 255); leds[353] = CHSV(HUE_AQUA, 255, 255); leds[352] = CHSV(HUE_AQUA, 255, 255); leds[351] = CHSV(HUE_AQUA, 255, 255); leds[350] = CHSV(HUE_AQUA, 255, 255); leds[349] = CHSV(HUE_AQUA, 255, 255); leds[348] = CHSV(HUE_AQUA, 255, 255); leds[347] = CHSV(HUE_AQUA, 255, 255); leds[346] = CHSV(HUE_AQUA, 255, 255); leds[345] = CHSV(HUE_AQUA, 255, 255); leds[344] = CHSV(HUE_AQUA, 255, 255); leds[343] = CHSV(HUE_AQUA, 255, 255); leds[342] = CHSV(HUE_AQUA, 255, 255); leds[341] = CHSV(HUE_AQUA, 255, 255); leds[340] = CHSV(HUE_AQUA, 255, 255); leds[339] = CHSV(HUE_AQUA, 255, 255); leds[338] = CHSV(HUE_AQUA, 255, 255); leds[337] = CHSV(HUE_AQUA, 255, 255); leds[336] = CHSV(HUE_AQUA, 255, 255); leds[335] = CHSV(HUE_AQUA, 255, 255); leds[334] = CHSV(HUE_AQUA, 255, 255); leds[333] = CHSV(HUE_AQUA, 255, 255); leds[332] = CHSV(HUE_AQUA, 255, 255); leds[331] = CHSV(HUE_AQUA, 255, 255); leds[330] = CHSV(HUE_AQUA, 255, 255); leds[300] = CHSV(HUE_AQUA, 255, 255); leds[303] = CHSV(HUE_BLUE, 255, 255); leds[304] = CHSV(HUE_BLUE, 255, 255); leds[305] = CHSV(HUE_BLUE, 255, 255); leds[306] = CHSV(HUE_BLUE, 255, 255); leds[307] = CHSV(HUE_BLUE, 255, 255); leds[308] = CHSV(HUE_BLUE, 255, 255); leds[309] = CHSV(HUE_BLUE, 255, 255); leds[310] = CHSV(HUE_BLUE, 255, 255); leds[311] = CHSV(HUE_BLUE, 255, 255); leds[312] = CHSV(HUE_BLUE, 255, 255); leds[313] = CHSV(HUE_BLUE, 255, 255); leds[314] = CHSV(HUE_BLUE, 255, 255); leds[315] = CHSV(HUE_BLUE, 255, 255); leds[316] = CHSV(HUE_BLUE, 255, 255); leds[317] = CHSV(HUE_BLUE, 255, 255); leds[318] = CHSV(HUE_BLUE, 255, 255); leds[319] = CHSV(HUE_BLUE, 255, 255); leds[320] = CHSV(HUE_BLUE, 255, 255); leds[321] = CHSV(HUE_BLUE, 255, 255); leds[322] = CHSV(HUE_BLUE, 255, 255); leds[323] = CHSV(HUE_BLUE, 255, 255); leds[324] = CHSV(HUE_BLUE, 255, 255); leds[325] = CHSV(HUE_BLUE, 255, 255); leds[326] = CHSV(HUE_BLUE, 255, 255); leds[329] = CHSV(HUE_AQUA, 255, 255); leds[299] = CHSV(HUE_AQUA, 255, 255); leds[296] = CHSV(HUE_BLUE, 255, 255); leds[295] = CHSV(HUE_BLUE, 255, 255); leds[294] = CHSV(HUE_BLUE, 255, 255); leds[293] = CHSV(HUE_BLUE, 255, 255); leds[292] = CHSV(HUE_BLUE, 255, 255); leds[291] = CHSV(HUE_BLUE, 255, 255); leds[290] = CHSV(HUE_BLUE, 255, 255); leds[289] = CHSV(HUE_BLUE, 255, 255); leds[288] = CHSV(HUE_BLUE, 255, 255); leds[287] = CHSV(HUE_BLUE, 255, 255); leds[286] = CHSV(HUE_BLUE, 255, 255); leds[285] = CHSV(HUE_BLUE, 255, 255); leds[284] = CHSV(HUE_BLUE, 255, 255); leds[283] = CHSV(HUE_BLUE, 255, 255); leds[282] = CHSV(HUE_BLUE, 255, 255); leds[281] = CHSV(HUE_BLUE, 255, 255); leds[280] = CHSV(HUE_BLUE, 255, 255); leds[279] = CHSV(HUE_BLUE, 255, 255); leds[278] = CHSV(HUE_BLUE, 255, 255); leds[277] = CHSV(HUE_BLUE, 255, 255); leds[276] = CHSV(HUE_BLUE, 255, 255); leds[275] = CHSV(HUE_BLUE, 255, 255); leds[274] = CHSV(HUE_BLUE, 255, 255); leds[273] = CHSV(HUE_BLUE, 255, 255); leds[270] = CHSV(HUE_AQUA, 255, 255); leds[240] = CHSV(HUE_AQUA, 255, 255); leds[253] = CHSV(HUE_BLUE, 255, 255); leds[254] = CHSV(HUE_BLUE, 255, 255); leds[255] = CHSV(HUE_BLUE, 255, 255); leds[256] = CHSV(HUE_BLUE, 255, 255); leds[269] = CHSV(HUE_AQUA, 255, 255); leds[239] = CHSV(HUE_AQUA, 255, 255); leds[226] = CHSV(HUE_BLUE, 255, 255); leds[225] = CHSV(HUE_BLUE, 255, 255); leds[224] = CHSV(HUE_BLUE, 255, 255); leds[223] = CHSV(HUE_BLUE, 255, 255); leds[210] = CHSV(HUE_AQUA, 255, 255); leds[180] = CHSV(HUE_AQUA, 255, 255); leds[193] = CHSV(HUE_BLUE, 255, 255); leds[194] = CHSV(HUE_BLUE, 255, 255); leds[195] = CHSV(HUE_BLUE, 255, 255); leds[196] = CHSV(HUE_BLUE, 255, 255); leds[209] = CHSV(HUE_AQUA, 255, 255); leds[179] = CHSV(HUE_AQUA, 255, 255); leds[166] = CHSV(HUE_BLUE, 255, 255); leds[165] = CHSV(HUE_BLUE, 255, 255); leds[164] = CHSV(HUE_BLUE, 255, 255); leds[163] = CHSV(HUE_BLUE, 255, 255); leds[150] = CHSV(HUE_AQUA, 255, 255); leds[120] = CHSV(HUE_AQUA, 255, 255); leds[133] = CHSV(HUE_BLUE, 255, 255); leds[134] = CHSV(HUE_BLUE, 255, 255); leds[135] = CHSV(HUE_BLUE, 255, 255); leds[136] = CHSV(HUE_BLUE, 255, 255); leds[149] = CHSV(HUE_AQUA, 255, 255); leds[119] = CHSV(HUE_AQUA, 255, 255); leds[106] = CHSV(HUE_BLUE, 255, 255); leds[105] = CHSV(HUE_BLUE, 255, 255); leds[104] = CHSV(HUE_BLUE, 255, 255); leds[103] = CHSV(HUE_BLUE, 255, 255); leds[90] = CHSV(HUE_AQUA, 255, 255); leds[60] = CHSV(HUE_AQUA, 255, 255); leds[63] = CHSV(HUE_BLUE, 255, 255); leds[64] = CHSV(HUE_BLUE, 255, 255); leds[65] = CHSV(HUE_BLUE, 255, 255); leds[66] = CHSV(HUE_BLUE, 255, 255); leds[67] = CHSV(HUE_BLUE, 255, 255); leds[68] = CHSV(HUE_BLUE, 255, 255); leds[69] = CHSV(HUE_BLUE, 255, 255); leds[70] = CHSV(HUE_BLUE, 255, 255); leds[71] = CHSV(HUE_BLUE, 255, 255); leds[72] = CHSV(HUE_BLUE, 255, 255); leds[73] = CHSV(HUE_BLUE, 255, 255); leds[74] = CHSV(HUE_BLUE, 255, 255); leds[75] = CHSV(HUE_BLUE, 255, 255); leds[76] = CHSV(HUE_BLUE, 255, 255); leds[77] = CHSV(HUE_BLUE, 255, 255); leds[78] = CHSV(HUE_BLUE, 255, 255); leds[79] = CHSV(HUE_BLUE, 255, 255); leds[80] = CHSV(HUE_BLUE, 255, 255); leds[81] = CHSV(HUE_BLUE, 255, 255); leds[82] = CHSV(HUE_BLUE, 255, 255); leds[83] = CHSV(HUE_BLUE, 255, 255); leds[84] = CHSV(HUE_BLUE, 255, 255); leds[85] = CHSV(HUE_BLUE, 255, 255); leds[86] = CHSV(HUE_BLUE, 255, 255); leds[89] = CHSV(HUE_AQUA, 255, 255); leds[59] = CHSV(HUE_AQUA, 255, 255); leds[56] = CHSV(HUE_BLUE, 255, 255); leds[55] = CHSV(HUE_BLUE, 255, 255); leds[54] = CHSV(HUE_BLUE, 255, 255); leds[53] = CHSV(HUE_BLUE, 255, 255); leds[52] = CHSV(HUE_BLUE, 255, 255); leds[51] = CHSV(HUE_BLUE, 255, 255); leds[50] = CHSV(HUE_BLUE, 255, 255); leds[49] = CHSV(HUE_BLUE, 255, 255); leds[48] = CHSV(HUE_BLUE, 255, 255); leds[47] = CHSV(HUE_BLUE, 255, 255); leds[46] = CHSV(HUE_BLUE, 255, 255); leds[45] = CHSV(HUE_BLUE, 255, 255); leds[44] = CHSV(HUE_BLUE, 255, 255); leds[43] = CHSV(HUE_BLUE, 255, 255); leds[42] = CHSV(HUE_BLUE, 255, 255); leds[41] = CHSV(HUE_BLUE, 255, 255); leds[40] = CHSV(HUE_BLUE, 255, 255); leds[39] = CHSV(HUE_BLUE, 255, 255); leds[38] = CHSV(HUE_BLUE, 255, 255); leds[37] = CHSV(HUE_BLUE, 255, 255); leds[36] = CHSV(HUE_BLUE, 255, 255); leds[35] = CHSV(HUE_BLUE, 255, 255); leds[34] = CHSV(HUE_BLUE, 255, 255); leds[33] = CHSV(HUE_BLUE, 255, 255); leds[30] = CHSV(HUE_AQUA, 255, 255); leds[0] = CHSV(HUE_AQUA, 255, 255); leds[1] = CHSV(HUE_AQUA, 255, 255); leds[2] = CHSV(HUE_AQUA, 255, 255); leds[3] = CHSV(HUE_AQUA, 255, 255); leds[4] = CHSV(HUE_AQUA, 255, 255); leds[5] = CHSV(HUE_AQUA, 255, 255); leds[6] = CHSV(HUE_AQUA, 255, 255); leds[7] = CHSV(HUE_AQUA, 255, 255); leds[8] = CHSV(HUE_AQUA, 255, 255); leds[9] = CHSV(HUE_AQUA, 255, 255); leds[10] = CHSV(HUE_AQUA, 255, 255); leds[11] = CHSV(HUE_AQUA, 255, 255); leds[12] = CHSV(HUE_AQUA, 255, 255); leds[13] = CHSV(HUE_AQUA, 255, 255); leds[14] = CHSV(HUE_AQUA, 255, 255); leds[15] = CHSV(HUE_AQUA, 255, 255); leds[16] = CHSV(HUE_AQUA, 255, 255); leds[17] = CHSV(HUE_AQUA, 255, 255); leds[18] = CHSV(HUE_AQUA, 255, 255); leds[19] = CHSV(HUE_AQUA, 255, 255); leds[20] = CHSV(HUE_AQUA, 255, 255); leds[21] = CHSV(HUE_AQUA, 255, 255); leds[22] = CHSV(HUE_AQUA, 255, 255); leds[23] = CHSV(HUE_AQUA, 255, 255); leds[24] = CHSV(HUE_AQUA, 255, 255); leds[25] = CHSV(HUE_AQUA, 255, 255); leds[26] = CHSV(HUE_AQUA, 255, 255); leds[27] = CHSV(HUE_AQUA, 255, 255); leds[28] = CHSV(HUE_AQUA, 255, 255); leds[29] = CHSV(HUE_AQUA, 255, 255); FastLED.show();
}

void activateColor(int key) {
  if (key ==  48) {
    color = HUE_RED;
  }
  if (key == 50) {
    color = HUE_ORANGE;
  }
  if (key == 52) {
    color = HUE_YELLOW;
  }
  if (key == 53) {
    color = HUE_GREEN;
  }
  if (key == 55) {
    color = HUE_AQUA;
  }
  if (key == 57) {
    color = HUE_BLUE;
  }
  if (key == 59) {
    color = HUE_PURPLE;
  }
  //  if (key) {
  //    color = HUE_PINK;
  //  }
}

void deactivateColor(int key) {
  //  Serial.println("deactivating color");
  color = 0;
}

void clearRow(int tier) {
  int tierStart = (tier - 1 ) * ARRAY_SIZE;
  int tierEnd = tierStart + (ARRAY_SIZE - 1);
  //  Serial.println("----");
  //  Serial.println(tierStart);
  //  Serial.println(tierEnd);
  for (int i = tierStart; i <= tierEnd; i++) {
    leds[i] = CHSV(0, 0, 0);
  }
  //  for (int i = tierStart + (NUM_LEDS / 2); i <= tierEnd - 1 + (NUM_LEDS / 2); i++) {
  //    leds[i] = CHSV(0, 0, 0);
  //  }
  FastLED.show();
}

void lightRow(int tier) {
  int tierStart = (tier - 1) * ARRAY_SIZE;
  int tierEnd = tierStart + (ARRAY_SIZE - 1);
  //  Serial.println("lighintg tier");
  for (int i = tierStart; i <= tierEnd; i++) {
    leds[i] = CHSV(color, 255,  255);
  }
  //    FastLED.show();
  //  for (int i = tierStart + (NUM_LEDS / 2); i <= tierEnd - 1 + (NUM_LEDS / 2); i++) {
  //    leds[i] = CHSV(color, 255, 255);
  //  }
  //  FastLED.clear();
  FastLED.show();
}

void processMidi(midiEventPacket_t rx) {
  if (rx.header == 0x9) {
    handleNoteOn(rx.byte1 & 0xF, rx.byte2, rx.byte3);
  }
  if (rx.header == 0x8) {
    handleNoteOff(rx.byte1 & 0xF, rx.byte2, rx.byte3);
  }
}

void handleNoteOff(byte channel, byte pitch, byte velocity) {
  if (pitch >= 60 && pitch < 70) {
    clearRow((pitch + 1) - 60);
  }
  if (pitch >= 40 && pitch < 60) {
    deactivateColor(pitch);
  }


  if (pitch == 72) {
    clear();
  }
}

void lightAllRows() {
  for (int i = 0; i < NUM_LEDS;  i++) {
    leds[i] = CHSV(color, 255,  255);
  }
  FastLED.show();
}

void clear() {
  for (int i = 0; i < NUM_LEDS;  i++) {
    leds[i] = CHSV(0, 0, 0);
  }
  FastLED.show();
}


void handleNoteOn(byte channel, byte pitch, byte velocity) {
  // it is possible to use the actual midi velocity here, just be sure to
  // double to value because midi is 0-127
  // and then change digitalWrite to analogWrite
  Serial.println(pitch);
  if (velocity > 0) {
    velocity = HIGH;
  }

  if (pitch >= 60 && pitch < 70) {
    lightRow((pitch + 1) - 60);
  }
  if (pitch >= 40 && pitch < 60) {
    activateColor(pitch);
  }

  if (pitch == 72) {
    lightAllRows();
  }
}
