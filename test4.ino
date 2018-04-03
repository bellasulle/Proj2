#define redPin 11
#define greenPin 10
#define bluePin 9
#define delayTime 20

int incomingByte;



void setup() {
 Serial.begin(9600);
 
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);



  }
void loop() {

if (Serial.available() > 0) {   // see if there's incoming serial data
   incomingByte = Serial.read(); // read it
   
    setColor(80, 0, 80); 
    delay(1000);
    setColor(0,incomingByte,0);  //0,incomingbyte,o = blue -- 0,0,incomingbyte = green 
    delay(1000);
    setColor(255, 255, 0); 
    delay(1000); 
    setColor(incomingByte,0,0);
    delay(1000);
    setColor(0,0,incomingByte);
    delay(1000);
    
    
//   

}
return 1;
}


//  if(incomingByte == 'G'){
//  digitalWrite(redPin,HIGH)
////  setColor(50, 0, 0); //red
//  delay(1000)}
//  
//  if (incomingByte == 'H'){
////   setColor(255, 255, 0); //orange
//  delay(1000)}
//  
//   if (incomingByte == 'J'){
////  setColor(0, 255, 0); //yellow
//  delay(1000)}
//  
//  if (incomingByte =='K'){
////   setColor(255, 50, 0); //green
//  delay(1000)}
//    



void setColor(int red, int green, int blue){

  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
