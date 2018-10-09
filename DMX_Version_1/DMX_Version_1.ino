#include <FastLED.h>
#include <Conceptinetics.h>

#define COLOR_ORDER GRB
// How many leds in your strip?
#define NUM_LEDS 256

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 8
// #define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];


#define DMX_SLAVE_CHANNELS   1
// Configure a DMX slave controller
DMX_Slave dmx_slave ( DMX_SLAVE_CHANNELS );
const int channel = 1;

void setup() {
      pinMode(LED_BUILTIN, OUTPUT);
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);                       // wait for a second
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
      delay(1000); 

      dmx_slave.enable ();
      dmx_slave.setStartAddress (channel);

      FastLED.addLeds<WS2812B, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
      FastLED.setBrightness(10);
      clear();
}

void loop() { 
  dmxControler();
  //clear();
  //UG();
  //delay(800);
  //clear();
  //EG();
  //delay(800);
  //clear();
  //eins();
  //delay(800);
  //clear();
  //zwei();
  //delay(800);
}

void dmxControler(){
  if ( dmx_slave.getChannelValue (1) >= 192 )
    zwei();
  else if(dmx_slave.getChannelValue (1) >= 128 &&  dmx_slave.getChannelValue (1) <= 191){
    eins();
  }else if(dmx_slave.getChannelValue (1) >= 64 &&  dmx_slave.getChannelValue (1) <= 127){
    EG();
  }else if(dmx_slave.getChannelValue (1) <= 63){
   UG();
  }
}
void UG(){
   for(int i=0;i<=255;i++){
    if(i>=17 && i<=30){
      leds[i]=CRGB::Red;
    }else if(i>=33 && i<=46){
      leds[i]=CRGB::Red;
    }else if(i>=49 && i<=50){
      leds[i]=CRGB::Red;
    }else if(i>=77&& i<=78){
      leds[i]=CRGB::Red;
    }else if(i>=81 && i<=94){
      leds[i]=CRGB::Red;
    }else if(i>=97 && i<=110){
      leds[i]=CRGB::Red;
    }
    
    else if(i>=145 && i<=158){
      leds[i]=CRGB::Red;
    }else if(i>=161 && i<=174){
      leds[i]=CRGB::Red;
    }else if(i>=177 && i<=178){
      leds[i]=CRGB::Red;
    }else if(i>=189 && i<=190){
      leds[i]=CRGB::Red;
    }else if(i>=193 && i<=194){
      leds[i]=CRGB::Red;
    }else if(i>=199 && i<=200){
      leds[i]=CRGB::Red;
    }else if(i>=205 && i<=206){
      leds[i]=CRGB::Red;
    }else if(i>=209 && i<=216){
      leds[i]=CRGB::Red;
    }else if(i>=221 && i<=222){
      leds[i]=CRGB::Red;
    }else if(i>=225 && i<=226){
      leds[i]=CRGB::Red;
    }else if(i>=231 && i<=238){
      leds[i]=CRGB::Red;
    }
  }
  feld();
  FastLED.show();
}
void EG(){
   for(int i=0;i<=255;i++){
    if(i>=17 && i<=30){
      leds[i]=CRGB::Red;
    }else if(i>=33 && i<=46){
      leds[i]=CRGB::Red;
    }else if(i>=49 && i<=50){
      leds[i]=CRGB::Red;
    }else if(i>=55 && i<=56){
      leds[i]=CRGB::Red;
    }else if(i>=61 && i<=62){
      leds[i]=CRGB::Red;
    }else if(i>=65 && i<=66){
      leds[i]=CRGB::Red;
    }else if(i>=71 && i<=72){
      leds[i]=CRGB::Red;
    }else if(i>=77 && i<=78){
      leds[i]=CRGB::Red;
    }else if(i>=81 && i<=82){
      leds[i]=CRGB::Red;
    }else if(i>=87 && i<=88){
      leds[i]=CRGB::Red;
    }else if(i>=93 && i<=94){
      leds[i]=CRGB::Red;
    }else if(i>=97 && i<=98){
      leds[i]=CRGB::Red;
    }else if(i>=109 && i<=110){
      leds[i]=CRGB::Red;
    }else if(i>=145 && i<=158){
      leds[i]=CRGB::Red;
    }else if(i>=161 && i<=174){
      leds[i]=CRGB::Red;
    }else if(i>=177 && i<=178){
      leds[i]=CRGB::Red;
    }else if(i>=189 && i<=190){
      leds[i]=CRGB::Red;
    }else if(i>=193 && i<=194){
      leds[i]=CRGB::Red;
    }else if(i>=199 && i<=200){
      leds[i]=CRGB::Red;
    }else if(i>=205 && i<=206){
      leds[i]=CRGB::Red;
    }else if(i>=209 && i<=216){
      leds[i]=CRGB::Red;
    }else if(i>=221 && i<=222){
      leds[i]=CRGB::Red;
    }else if(i>=225 && i<=226){
      leds[i]=CRGB::Red;
    }else if(i>=231 && i<=238){
      leds[i]=CRGB::Red;
    }
  }
  feld();
  FastLED.show();
}

void eins(){
  for(int i=0;i<=255;i++){
    if(i>=88 && i<=90){
      leds[i]=CRGB::Red;
    }else if(i>=100 && i<=102){
      leds[i]=CRGB::Red;
    }else if(i>=122 && i<=124){
      leds[i]=CRGB::Red;
    }else if(i>=130 && i<=142){
      leds[i]=CRGB::Red;
    }else if(i>=145 && i<=158){
      leds[i]=CRGB::Red;
    }
  }
  feld();
  FastLED.show();
}
void zwei(){
  for(int i=0;i<=255;i++){
    if(i>=81 && i<=88){
      leds[i]=CRGB::Red;
    }else if(i>=93&& i<=94){
      leds[i]=CRGB::Red;
    }else if(i>=97 && i<=98){
      leds[i]=CRGB::Red;
    }else if(i>=103 && i<=110){
      leds[i]=CRGB::Red;
    }else if(i>=113 && i<=114){
      leds[i]=CRGB::Red;
    }else if(i>=119 && i<=120){
      leds[i]=CRGB::Red;
    }else if(i>=125 && i<=126){
      leds[i]=CRGB::Red;
    }else if(i>=129 && i<=130){
      leds[i]=CRGB::Red;
    }else if(i>=135 && i<=136){
      leds[i]=CRGB::Red;
    }else if(i>=141 && i<=142){
      leds[i]=CRGB::Red;
    }else if(i>=145 && i<=146){
      leds[i]=CRGB::Red;
    }else if(i>=151 && i<=158){
      leds[i]=CRGB::Red;
    }else if(i>=161 && i<=168){
      leds[i]=CRGB::Red;
    }else if(i>=173 && i<=174){
      leds[i]=CRGB::Red;
    }
  }
  feld();
  FastLED.show();
}
void clear(){
  for(int i=0; i<255;i++){
    leds[i]=CRGB::Black;
  }
}
void feld(){
  for(int i=0; i<=255;i++){
    if(i<=15 || i>=240 ||oben(i) || unten(i)){
      leds[i] = CRGB::Black;
    }
  }
}
boolean unten(int i) {
  if(i==15 || i==16 || i==47 || i==48 || i==79 || i==80 || i==111 || i==112 || i==143 || i==144 || i==175 || i==176 || i==207 || i==208 || i==239 || i==240){
    return true;
  }
  //if(i==14 || i==17 || i==46 || i==49 || i==78 || i==81 || i==110 || i==113 || i==142 || i==145 || i==174 || i==177 || i==206 || i==209 || i==238 || i==241){
  //  return true;
  //}
  else 
    return false;
}
boolean oben(int i){
  if(i==0 || i==31 || i==32 || i==63 || i==64 || i==95 || i==96 || i==127 || i==128 || i==159 || i==160 || i==191 || i==192 || i==223 || i==224 || i==255){
    return true;
  }
  //if(i==1 || i==30 || i==33 || i==62 || i==65 || i==94 || i==97 || i==126 || i==129 || i==158 || i==161 || i==190 || i==193 || i==222 || i==225 || i==254){
  //  return true;
  //}
  else 
    return false;
}
