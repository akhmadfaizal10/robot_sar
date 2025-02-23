int speed = 150; // Atur kecepatan default

void stanby() {
  ax12a.moveSpeed(1, S1, speed);
  ax12a.moveSpeed(2, S2, speed);
  ax12a.moveSpeed(3, S3, speed);
  ax12a.moveSpeed(4, S4, speed);
  ax12a.moveSpeed(5, S5, speed);
  ax12a.moveSpeed(6, S6, speed);
  
  ax12a.moveSpeed(7, S7, speed);
  ax12a.moveSpeed(8, S8, speed);
  ax12a.moveSpeed(9, S9, speed);
  ax12a.moveSpeed(10, S10, speed);
  ax12a.moveSpeed(11, S11, speed);
  ax12a.moveSpeed(12, S12, speed);
  
  ax12a.moveSpeed(13, S13, speed);
  ax12a.moveSpeed(14, S14, speed);
  ax12a.moveSpeed(15, S15, speed);
  ax12a.moveSpeed(16, S16, speed);
  ax12a.moveSpeed(17, S17, speed);
  ax12a.moveSpeed(18, S18, speed);
}

void coxa_maju7_9_11() {
  ax12a.moveSpeed(1, S1 - 50, speed);
  ax12a.moveSpeed(3, S3 - 50, speed);
  ax12a.moveSpeed(5, S5 + 50, speed);
}

void fermur_naik7_9_11() {
  ax12a.moveSpeed(7, S7 + 150, speed);
  ax12a.moveSpeed(9, S9 + 150, speed);
  ax12a.moveSpeed(11, S11 + 150, speed);
}

void fermur() {
 ax12a.moveSpeed(7, S7, speed);
  ax12a.moveSpeed(8, S8, speed);
  ax12a.moveSpeed(9, S9, speed);
  ax12a.moveSpeed(10, S10, speed);
  ax12a.moveSpeed(11, S11, speed);
  ax12a.moveSpeed(12, S12, speed);
  
}

void tibia_naik7_9_11() {
  ax12a.moveSpeed(13, S13 + 100, speed);
  ax12a.moveSpeed(15, S15 + 100, speed);
  ax12a.moveSpeed(17, S17 + 100, speed);
}

void coxa_maju8_10_12() {
  ax12a.moveSpeed(2, S2 - 50, speed);
  ax12a.moveSpeed(4, S4 + 50, speed);
  ax12a.moveSpeed(6, S6 + 50, speed);
}

void fermur_naik8_10_12() {
  ax12a.moveSpeed(8, S8 + 150, speed);
  ax12a.moveSpeed(10, S10 + 150, speed);
  ax12a.moveSpeed(12, S12 + 150, speed);
}

void tibia_naik8_10_12() {
  ax12a.moveSpeed(14, S14 + 100, speed);
  ax12a.moveSpeed(16, S16 + 100, speed);
  ax12a.moveSpeed(18, S18 + 100, speed);
}

void coxa_mundur7_9_11() {
  ax12a.moveSpeed(1, S1 + 50, speed);
  ax12a.moveSpeed(3, S3 + 50, speed);
  ax12a.moveSpeed(5, S5 - 50, speed);
}

void coxa_mundur8_10_12() {
  ax12a.moveSpeed(2, S2 + 50, speed);
  ax12a.moveSpeed(4, S4 - 50, speed);
  ax12a.moveSpeed(6, S6 - 50, speed);
}

void coxa_muter7_9_11() {
  ax12a.moveSpeed(1, S1 + 50, speed);
  ax12a.moveSpeed(3, S3 + 50, speed);
  ax12a.moveSpeed(5, S5 + 50, speed);
}

void coxa_muter8_10_12() {
  ax12a.moveSpeed(2, S2 + 50, speed);
  ax12a.moveSpeed(4, S4 + 50, speed);
  ax12a.moveSpeed(6, S6 + 50, speed);
}
void coxa8_10_12() {
  // ax12a.moveSpeed(1, S1, speed);  //+ kebelakang
  ax12a.moveSpeed(2, S2, speed);
  // ax12a.moveSpeed(3, S3, speed);//+ kebelakang
  ax12a.moveSpeed(4, S4, speed);
  // ax12a.moveSpeed(5, S5, speed);//- kebelakang
  ax12a.moveSpeed(6, S6, speed);
}
void coxa7_9_11() {
  ax12a.moveSpeed(1, S1, speed);  // + kebelakang
  // ax12a.moveSpeed(2, S2, speed);
  ax12a.moveSpeed(3, S3, speed);  // + kebelakang
  // ax12a.moveSpeed(4, S4, speed);
  ax12a.moveSpeed(5, S5, speed);  // - kebelakang
  // ax12a.moveSpeed(6, S6, speed);
}
