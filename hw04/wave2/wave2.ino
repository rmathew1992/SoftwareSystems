/*
  

 Author: Allen Downey 
 
 Based on http://arduino.cc/en/Tutorial/AnalogInput
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe

 License: Public Domain
 
 */
 
 
int ledPin = 5;       // select the pin for the LED
int buttonPin1 = 2;
int buttonPin2 = 3;

void setup() {
  Serial.begin(9600);

  DDRD = B11100000;
  DDRB = B00111111; 
//  pinMode(buttonPin1, INPUT_PULLUP);  
//  pinMode(buttonPin2, INPUT_PULLUP);  

//  pinMode(ledPin, OUTPUT);
  
//  pinMode(13, OUTPUT);  
//  pinMode(12, OUTPUT);  
//  pinMode(11, OUTPUT);  
//  pinMode(10, OUTPUT);  
//  pinMode(9, OUTPUT);  
//  pinMode(8, OUTPUT);  
//  pinMode(7, OUTPUT);  
//  pinMode(6, OUTPUT);  
}

void writeByte(int x) {
  int pin;
  
  for (pin=13; pin>=6; pin--) {
    int portB
    if (pin > 7) {
      a = (pin-8);
      portB = (x&1)>>a;
      PORTB |= portB;
    }
    else {
      b = pin;
      portB = (x&1)>>b;
      PORTD |= portB;
    }
    x >>= 1;
  }

  PORTB ^= B00111111;
  PORTD ^= B11111110;
}

int low = 36;
int high = 255;
int stride = 5;
int counter = low;

void loop() {
  int button1 = digitalRead(buttonPin1);
  if (button1) return;
  
  counter += stride;
  if (counter > high) {
    counter = low;
    //Serial.println(counter);
  }

  // write to the digital pins  
  writeByte(counter);
}
