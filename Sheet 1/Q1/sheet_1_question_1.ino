const int LED = 13;
void setup() {
  // put your setup code here, to run once:
pinMode ( LED ,OUTPUT );
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite ( LED ,HIGH );
  delay (500);
  digitalWrite (LED , LOW );
  delay (1500);

}
