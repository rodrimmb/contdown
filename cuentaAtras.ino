int pins[] = {2,3,4,5,9,10,11,12};
int input = 7;

int number = 8;

int finish = 1;
int buttonState = 0;

void setup(){
  Serial.begin(9600);
  
  pinMode(input,INPUT);
  
  for (int i = 0; i < number; i++){
      pinMode(pins[i], OUTPUT);
  }
}

void loop(){
  buttonState = digitalRead(input);
  if(buttonState == HIGH){
    finish=0;
    clearNumber();
  }
  
  if(finish == 1){
    digitalWrite(pins[3], HIGH);
  }else{
    for (int j=9; j >= 0; j--){
      numbers(j);
      delay(500);
      clearNumber();
    
      if(j==0){
        finish=1;
      }
    }
  }
}

void numbers(int number){
  switch(number){
    case 0:
        digitalWrite(pins[0], HIGH);
        digitalWrite(pins[1], HIGH);
        digitalWrite(pins[2], HIGH);
        digitalWrite(pins[5], HIGH);
        digitalWrite(pins[6], HIGH);
        digitalWrite(pins[7], HIGH);
    break;
    
    case 1:
        digitalWrite(pins[2], HIGH);
        digitalWrite(pins[7], HIGH);
    break;
    
    case 2:
        digitalWrite(pins[0], HIGH);
        digitalWrite(pins[1], HIGH);
        digitalWrite(pins[4], HIGH);
        digitalWrite(pins[6], HIGH);
        digitalWrite(pins[7], HIGH);
    break;
    
    case 3:
        digitalWrite(pins[1], HIGH);
        digitalWrite(pins[2], HIGH);
        digitalWrite(pins[4], HIGH);
        digitalWrite(pins[6], HIGH);
        digitalWrite(pins[7], HIGH);
    break;
    
    case 4:
        digitalWrite(pins[2], HIGH);
        digitalWrite(pins[4], HIGH);
        digitalWrite(pins[5], HIGH);
        digitalWrite(pins[7], HIGH);
    break;
    
    case 5:
        digitalWrite(pins[1], HIGH);
        digitalWrite(pins[2], HIGH);
        digitalWrite(pins[4], HIGH);       
        digitalWrite(pins[5], HIGH);
        digitalWrite(pins[6], HIGH);
    break;
    
    case 6:
        digitalWrite(pins[0], HIGH);
        digitalWrite(pins[1], HIGH);
        digitalWrite(pins[2], HIGH);
        digitalWrite(pins[4], HIGH);
        digitalWrite(pins[5], HIGH);
        digitalWrite(pins[6], HIGH);
    break;
    
    case 7:
        digitalWrite(pins[2], HIGH);
        digitalWrite(pins[6], HIGH);
        digitalWrite(pins[7], HIGH);
    break;
    
    case 8:
        digitalWrite(pins[0], HIGH);
        digitalWrite(pins[1], HIGH);
        digitalWrite(pins[2], HIGH);
        digitalWrite(pins[4], HIGH);
        digitalWrite(pins[5], HIGH);
        digitalWrite(pins[6], HIGH);
        digitalWrite(pins[7], HIGH);
    break;
    
    case 9:
        digitalWrite(pins[2], HIGH);
        digitalWrite(pins[4], HIGH);
        digitalWrite(pins[5], HIGH);
        digitalWrite(pins[6], HIGH);
        digitalWrite(pins[7], HIGH);
    break;
  }
}

void clearNumber(){
  digitalWrite(pins[0], LOW);
  digitalWrite(pins[1], LOW);
  digitalWrite(pins[2], LOW);
  digitalWrite(pins[3], LOW);
  digitalWrite(pins[4], LOW);
  digitalWrite(pins[5], LOW);
  digitalWrite(pins[6], LOW);
  digitalWrite(pins[7], LOW); 
}
