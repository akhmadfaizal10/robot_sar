void stanby() {
  ax12a.move(1, S1);  // (S1));
  ax12a.move(2, S2);
  ax12a.move(3, S3);
  ax12a.move(4, S4);
  ax12a.move(5, S5);
  ax12a.move(6, S6);

  ax12a.move(7, S7);
  ax12a.move(8, S8);
  ax12a.move(9, S9);
  ax12a.move(10, S10);
  ax12a.move(11, S11);
  ax12a.move(12, S12);

  ax12a.move(13, S13);
  ax12a.move(14, S14);
  ax12a.move(15, S15);
  ax12a.move(16, S16);
  ax12a.move(17, S17);
  ax12a.move(18, S18);
}

void Maju(int speed) {
  /*
  digitalWrite(2, 1);
  ax12a.moveSpeed(7, S7 + 200, speed);
  ax12a.moveSpeed(9, S9 + 200, speed);
  ax12a.moveSpeed(11, S11 + 200, speed);
  digitalWrite(2, 0);
  ax12a.moveSpeed(1, S1 - 40, speed);
  ax12a.moveSpeed(3, S3 - 40, speed);
  ax12a.moveSpeed(5, S5 + 40, speed);
  delay(800);
  ax12a.moveSpeed(7, S7, speed);
  ax12a.moveSpeed(9, S9, speed);
  ax12a.moveSpeed(11, S11, speed);
  delay(800);
  ax12a.moveSpeed(1, S1 + 40, speed);
  ax12a.moveSpeed(3, S3 + 40, speed);
  ax12a.moveSpeed(5, S5 - 40, speed);
  delay(800);


  */


  ax12a.moveSpeed(8, S8 + 200, speed);
  ax12a.moveSpeed(10, S10 + 200, speed);
  ax12a.moveSpeed(12, S12 + 200, speed);
  //////////////
  ax12a.moveSpeed(7, S7 + 200, speed);
  ax12a.moveSpeed(9, S9 + 200, speed);
  ax12a.moveSpeed(11, S11 + 200, speed);
  //////////////////////


  ax12a.moveSpeed(2, S2 - 40, speed);
  ax12a.moveSpeed(4, S4 + 40, speed);
  ax12a.moveSpeed(6, S6 + 40, speed);
  /////////////////////////
  ax12a.moveSpeed(1, S1 - 40, speed);
  ax12a.moveSpeed(3, S3 - 40, speed);
  ax12a.moveSpeed(5, S5 + 40, speed);
  ////////////////////////
  delay(800);
  ax12a.moveSpeed(8, S8, speed);
  ax12a.moveSpeed(10, S10, speed);
  ax12a.moveSpeed(12, S12, speed);

  /////////////////////////////
  ax12a.moveSpeed(7, S7, speed);
  ax12a.moveSpeed(9, S9, speed);
  ax12a.moveSpeed(11, S11, speed);
  //////////////

  delay(800);

  ax12a.moveSpeed(2, S2 + 40, speed);
  ax12a.moveSpeed(4, S4 - 40, speed);
  ax12a.moveSpeed(6, S6 - 40, speed);
  ///////////////////////////////////
  ax12a.moveSpeed(1, S1 + 40, speed);
  ax12a.moveSpeed(3, S3 + 40, speed);
  ax12a.moveSpeed(5, S5 - 40, speed);
  delay(800);
}

void Mundur() {
}

void GeserKa() {
}

void GeserKi() {
}