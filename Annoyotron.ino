/*
A present for my soon to be Old Boss...

Merry effin Christmas Mofo!

Released as GPLv2 by CrashSerious.

Use, modify, contribute back... so long as this header stays intact. above ---\/

__________________here_________________

 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  long DelayTime; //Delay between tones
  int PlayTime;   // Length of tone to play
  int Frequency;  // 'frequency' of tone.
  
  // turn off tone function for pin 11:
  DelayTime = random(30000,3600000); //30 seconds to 1 hour
  PlayTime = random(50,700); // min 50ms to max 700ms duration of tone
  Frequency = random(15000,27000); //min 15000 to max 27000 'I know... this isn't a real frequency'

  //just for debugging.
  Serial.println("DelayTime is");
  Serial.println(DelayTime);
  Serial.println("PlayTime is");
  Serial.println(PlayTime);
  Serial.println("Frequency is");
  Serial.println(Frequency);

  // play a note on pin 11 for 500 ms:
  tone(11, Frequency, PlayTime); // play the tone!
  delay(DelayTime); // Make the bastard crazy...

}
