int n = 0, k;
bool lights[8], countdown = false;
void setup() {
  //initializing all the pins to output
  for(int i = 1; i<=8; i++){
  pinMode(i, OUTPUT);
  }
  
}

void loop() {
  k = n; //divide by 2 meathod
  for(int c = 7; c >=0 ; c--){
  if(k%2)
  lights[c] = true;
  else
  lights[c] = false;
  k = k/2;
  }
  for (int c = 1; c <=8 ; c++){ //displaying binary, iterating backwards b/c in divide by two meathod one counts up
    if(lights[8-c])
      digitalWrite(c, HIGH);
    else
      digitalWrite(c, LOW);
  }
  //tone(10, n*100, 100); Grander plans that couldn't be implemented
  if(n==255||n==0){ //hold for 2 seconds when at 255 or 0
  delay(1900);
  //tone(10, n*100, 1900);
  }
  delay(100);
  //tone(10, n*100, 100);

  
  if(n==255)
  countdown = true;
  else if(n==0)
  countdown = false;
  if(countdown)
  n--;
  else
  n++;
}
