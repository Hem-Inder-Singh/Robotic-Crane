char cmd;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if (Serial.available() > 0)
  {
    cmd = Serial.read();
    Serial.println(cmd);
    switch (cmd)
    {
      case 'F':
        {
          digitalWrite(13, HIGH);
          digitalWrite(12, LOW);
          digitalWrite(11, HIGH);
          digitalWrite(10, LOW);
          break;
        }
      case 'B':
        {
         
          digitalWrite(13, LOW);
          digitalWrite(12, HIGH);
          digitalWrite(11, LOW);
          digitalWrite(10, HIGH);
          break;
        }
      case 'L':
        {
          digitalWrite(13, LOW);
          digitalWrite(12, HIGH);
          digitalWrite(11, HIGH);
          digitalWrite(10, LOW);
          break;
        }
      case 'R':
        {
          
          digitalWrite(13, HIGH);
          digitalWrite(12, LOW);
          digitalWrite(11, LOW);
          digitalWrite(10, HIGH);
          delay(50);
          break;
        }
     
      case 'S':
        {
          digitalWrite(13, LOW);
          digitalWrite(12, LOW);
          digitalWrite(11, LOW);
          digitalWrite(10, LOW);
          break;
        }
    }
    switch (cmd)
    {
      case 'X':
        {
          while (cmd != 'x')
          {
            if (Serial.available() > 0)
            {
              char c = Serial.read();
              Serial.println(c);
              cmd = c;
              if (cmd == 'x')
              {
                break;
              }
              switch (c)
              {
                case 'F':
                  {
                    digitalWrite(9, HIGH);
                    digitalWrite(8, LOW);
                    delay(1500);
                    break;
                  }
                case 'B':
                  {
                    digitalWrite(9, LOW);
                    digitalWrite(8, HIGH);
                    delay(1500);
                    break;
                  }
                case 'L':
                  {
                    digitalWrite(5, HIGH);
                    digitalWrite(4, LOW);
                    delay(2000);
                    break;
                  }
                case 'R':
                  {
                    digitalWrite(5, LOW);
                    digitalWrite(4, HIGH);
                    delay(2000);
                    break;
                  }
                case 'H':
                  {
                    digitalWrite(7, LOW);
                    digitalWrite(6, HIGH);
                    delay(800);
                    break;
                  }
                case 'h':
                  {
                    digitalWrite(7, HIGH);
                    digitalWrite(6, LOW);
                    delay(400);
                    break;
                  }
                 
                case 'S':
                  {
                    digitalWrite(9, LOW);
                    digitalWrite(8, LOW);
                    digitalWrite(7, LOW);
                    digitalWrite(6, LOW);
                    digitalWrite(5, LOW);
                    digitalWrite(4, LOW);
                  }
              }
            }
          }
        }
    }
    
  }
}
