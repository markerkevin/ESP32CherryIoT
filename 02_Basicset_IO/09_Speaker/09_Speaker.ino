const int spkrPin = 3; //3:ConnectorA 4:ConnectorB

#define DO 261.6
#define _DO 277.18
#define RE 293.665
#define _RE 311.127
#define MI 329.63
#define FA 349.228
#define _FA 369.994
#define SO 391.995
#define _SO 415.305
#define RA 440
#define _RA 466.164
#define TI 493.883
#define DO_oct 523.251
#define BEAT 250  // 0.25秒のテンポ



void arupusu(){
  ledcWriteTone(spkrPin, DO);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, DO);
  delay(BEAT);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
  ledcWriteTone(spkrPin, SO);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT);
  ledcWriteTone(spkrPin, DO);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT * 3);


  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
  ledcWriteTone(spkrPin, FA);
  delay(BEAT);
  ledcWriteTone(spkrPin, SO);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, DO_oct);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, DO_oct);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, SO);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT * 3);


  ledcWriteTone(spkrPin, DO_oct);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, DO_oct);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, TI);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, SO);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
  ledcWriteTone(spkrPin, RA);
  delay(BEAT);
  ledcWriteTone(spkrPin, SO);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT * 3);


  ledcWriteTone(spkrPin, DO);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, DO);
  delay(BEAT);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
  ledcWriteTone(spkrPin, SO);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
  ledcWriteTone(spkrPin, MI);
  delay(BEAT);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT);
  ledcWriteTone(spkrPin, RE);
  delay(BEAT);
  ledcWriteTone(spkrPin, DO);
  delay(BEAT);
  ledcWriteTone(spkrPin, 0);
  delay(BEAT * 3);
}

void loop() {
  // 1回だけ再生
  while(true);
}

void setup() {
  pinMode(spkrPin, OUTPUT);
  ledcAttach(spkrPin, 12000, 8); //Pin setting(Pin num, Max frequency, Resolution)
  arupusu();
}
