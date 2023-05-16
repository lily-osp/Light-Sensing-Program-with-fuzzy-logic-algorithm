// LDR Pin Definitions
const int LDR1_PIN = A0;
const int LDR2_PIN = A1;
const int LDR3_PIN = A2;
const int LDR4_PIN = A3;
const int LDR5_PIN = A4;

// Membership Function Definitions
float darkMembership(float value) {
  if (value <= 300) {
    return 1.0;
  } else if (value > 300 && value < 500) {
    return (500 - value) / 200;
  } else {
    return 0.0;
  }
}

float brightMembership(float value) {
  if (value >= 200) {
    return 1.0;
  } else if (value > 0 && value < 200) {
    return value / 200;
  } else {
    return 0.0;
  }
}

// Fuzzy Rule Definition
bool isDark(float ldr1, float ldr2, float ldr3, float ldr4, float ldr5) {
  return (ldr1 <= 300 || ldr2 <= 300 || ldr3 <= 300 || ldr4 <= 300 || ldr5 <= 300);
}

void setup() {
  // Initialize Serial Communication
  Serial.begin(9600);
}

void loop() {
  // Read the sensor values
  int ldr1Value = analogRead(LDR1_PIN);
  int ldr2Value = analogRead(LDR2_PIN);
  int ldr3Value = analogRead(LDR3_PIN);
  int ldr4Value = analogRead(LDR4_PIN);
  int ldr5Value = analogRead(LDR5_PIN);

  // Calculate the membership values
  float ldr1Dark = darkMembership(ldr1Value);
  float ldr2Dark = darkMembership(ldr2Value);
  float ldr3Dark = darkMembership(ldr3Value);
  float ldr4Dark = darkMembership(ldr4Value);
  float ldr5Dark = darkMembership(ldr5Value);

  float ldr1Bright = brightMembership(ldr1Value);
  float ldr2Bright = brightMembership(ldr2Value);
  float ldr3Bright = brightMembership(ldr3Value);
  float ldr4Bright = brightMembership(ldr4Value);
  float ldr5Bright = brightMembership(ldr5Value);

  // Determine the output
  bool isOutputDark = isDark(ldr1Value, ldr2Value, ldr3Value, ldr4Value, ldr5Value);

  // Print the input and output values
  Serial.print("LDR Values: ");
  Serial.print(ldr1Value);
  Serial.print(", ");
  Serial.print(ldr2Value);
  Serial.print(", ");
  Serial.print(ldr3Value);
  Serial.print(", ");
  Serial.print(ldr4Value);
  Serial.print(", ");
  Serial.println(ldr5Value);

  Serial.print("Output: ");
  if (isOutputDark) {
    Serial.println("dark");
  } else {
    Serial.println("bright");
  }

  // Add any additional code or actions based on the output value

  // Delay before the next iteration
  delay(1000);
}
