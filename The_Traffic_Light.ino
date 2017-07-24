int green = 12;
int red = 11;
int blue = 10;
int yellow = 9;
int very_bright = 8;


void setup() {
  // put your setup code here, to run once:
    pinMode(blue, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(very_bright, OUTPUT);
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    changeLights();
    delay(0);

}

void changeLights(){ 
    // turn red on for 0.1 seconds
    digitalWrite(red,HIGH);
    delay(0);
  
    // turn red off, then turn very_bright on for 0.1 seconds
    digitalWrite(red, LOW);
    digitalWrite(very_bright, HIGH);
    delay(0);
    
    // turn very_bright off, yellow on for 0.1 seconds
    digitalWrite(very_bright, LOW);
    digitalWrite(yellow, HIGH);
    delay(0);

    // turn off yellow, then turn blue on for 0.1 seconds
    digitalWrite(yellow, LOW);
    digitalWrite(blue, HIGH);
    delay(0);

    // turn on very_bright for 0.1 seconds
    digitalWrite(blue, LOW);
    digitalWrite(very_bright, HIGH);
    delay(0);

    // turn off very_bright, then turn red on for 0.1 seconds
    digitalWrite(very_bright, LOW);
    digitalWrite(red, HIGH);
    delay(0);

    // turn off red, then turn on green for 0.1 seconds
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(0);

    // turn off green for 0.1 seconds
    digitalWrite(green, LOW);
    delay(0);
}
