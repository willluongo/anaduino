const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;

int DISPLAY_TIME = 1000;

void setup()
{
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}


void loop()
{
  drawRed(DISPLAY_TIME);
  drawYellow(DISPLAY_TIME);
  drawGreen(DISPLAY_TIME);
  drawBlue(DISPLAY_TIME);
}

void drawRed(int duration)
{
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, LOW);
  
  delay(duration);
}

void drawYellow(int duration)
{
  // TODO: Not very yellow. :( Let's fix this.
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
  
  delay(duration);
}

void drawGreen(int duration)
{
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
  
  delay(duration);
}

void drawBlue(int duration)
{
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
  
  delay(duration);
}

