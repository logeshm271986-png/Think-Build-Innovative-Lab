int seg[] = {2,3,4,5,6,7,8};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(seg[i], OUTPUT);
  }
}

void loop() {
  // a,b,c,d,e,f,g
  int A[] = {LOW, LOW, LOW, HIGH, LOW, LOW, LOW};

  for (int i = 0; i < 7; i++) {
    digitalWrite(seg[i], A[i]);
  }
}
