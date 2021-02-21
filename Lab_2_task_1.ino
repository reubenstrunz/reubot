

// CHANGE THESE TO MATCH YOUR WIRING, THEN DELETE THE PREVIOUS "#error" LINE
const int LEYE = 3;
const int REYE = 9;
int settingL;
int settingR;
void setup() {
  Serial.begin(9600);

  pinMode( LEYE, INPUT );
  pinMode( REYE, INPUT );
  if( digitalRead( LEYE ) == HIGH ){
    settingL = HIGH;
  }else{ settingL = LOW;}
  if( digitalRead( REYE ) == HIGH ){
    settingR = HIGH;
  }else{ settingR = LOW;}
}

void loop() {
  if( digitalRead( LEYE ) == settingL ){
    
  }else{
    Serial.println("Change on left ");
    if( digitalRead( LEYE ) == HIGH ){
    settingL = HIGH;
  }else{
    settingL = LOW;
  }
  }

 if( digitalRead( REYE ) == settingR ){
    
 }else{
    Serial.println("Change on right ");
    if( digitalRead( REYE ) == HIGH ){
    settingR = HIGH;
  }else{
    settingR = LOW;
  }
  }
  
  delay(5);
}
