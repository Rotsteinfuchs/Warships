// Warships - Game
// (c) 2024 Rotsteinfuchs

const int SCREEN_WIDTH = 100; //full: 200
const int SCREEN_HEIGHT = 8; //full: 50
const int GRID_WIDTH = 8;
const int GRID_HEIGHT = 8;
int grid[GRID_WIDTH][GRID_HEIGHT] = {};

void setup() {
  Serial.begin(9600);
  restart();
}

void loop() {
}

String centerText(String text) {

  // calculate number of lines

  int linenr = 1;
  char chararray[text.length()];
  text.toCharArray(chararray, text.length());

  for (char c : chararray) {
    if (c == '\n') linenr++;
  }

  //store lines

  int count = 1;
  String lines[linenr] = {};
  for (char c : chararray) {
    if (c == '\n') count++;
    else lines[count] += c;
  }

  for(String l : lines) {
    Serial.println("test" + l);
  }

  /*

  String result = "";

  for (int i = 0; i <= (SCREEN_HEIGHT + linenr) / 2; i++) {
    result += '\n';
  }
  for (String l : lines) {
    for (int i = 0; i <= (SCREEN_WIDTH + l.length()) / 2; i++) {
      result += ' ';
    }
    result += l;
  }
  for (int i = 0; i <= (SCREEN_HEIGHT + linenr) / 2; i++) {
    result += '\n';
  }

  return result;

  */
}

void restart() {
  Serial.println(centerText("Schiffe versenken\n\n\nMade by Rotsteinfuchs"));
  /*
  for (int count = 3; count >= 0; count--) {
    delay(1000);
    Serial.println(centerText(String(count) + "..."));
  }
  Serial.println(centerText("[Place game here]"));
  */
}
