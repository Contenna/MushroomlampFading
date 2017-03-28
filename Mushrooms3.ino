/*
 Fading for the mushroomlamp

 */

int ledPin3 = 3;
int ledPin6 = 6;
int ledPin9 = 9;    // LED connected to digital pin 9,6 and 3
int steps = 1;
int x = 0;
int y = 0;
int z = 0; 

void setup() {
  do {
    pinMode (ledPin3, OUTPUT);
    pinMode (ledPin6, OUTPUT);
    pinMode (ledPin9, OUTPUT);
    x = x + steps;
    analogWrite (ledPin3, x);
    analogWrite (ledPin6, x);
    analogWrite (ledPin9, x);
    delay (10);
  }
  while (x!=255);
}

void loop() {
  x = 255;
  y = 255; 
  delay (1000);
  
  do {
    x = x - steps;
    y = y - steps;
    analogWrite (ledPin3, x);
    analogWrite (ledPin6, y);
    delay (10);
  }
  while (x!=0 && y!=0);
  delay (1000);
  x = 0;
  y = 0;
   /* 3 = 0
     * 6 = 0
     * 9 = 255
     */

  do {
    x = x - steps;
    y = y + steps;
    analogWrite (ledPin9, x);
    analogWrite (ledPin3, y); 
    delay (10);
    
  }
  while (x!=0 && y!=255);
  delay (1000);
  x = 0;
  y = 255;
  /* 3 = 255
     * 6 = 0
     * 9 = 0
     */
  
  do {
    x = x + steps;
    y = y - steps;
    analogWrite (ledPin6, x);
    analogWrite (ledPin3, y);
    delay (10);
 
  }
  while (x!=255 && y!=0);
  delay (1000);
  x = 255;
  y = 0;
   /* 3 = 0
     * 6 = 255
     * 9 = 0
     */
  
  do {
    x = x - steps;
    y = y + steps;
    analogWrite (ledPin6, x);
    analogWrite (ledPin9, y); 
    delay (10); 
  }
  while (x!=0 && y!=255);
   x = 0;
   y = 255;
  delay (1000);
  /* 3 = 0
   * 6 = 0
   * 9 = 255
   */
 
do {
  x = x + steps;
  y = y + steps;
  analogWrite(ledPin3, x);
  analogWrite(ledPin6, y);
  delay (10);
}
  while (x!=255 && y!=255);
  x = 255;
  y = 255;
  delay (1000);
  /* 3 = 255
   * 6 = 255
   * 9 =255
   */
}

