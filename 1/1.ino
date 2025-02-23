#include <AX12A.h>
#include "definsi.h"

/*
Konversi sudut ke nilai step:
step = (sudut / 300) * 1023
*/

#define DirectionPin  5          // Pin untuk arah komunikasi
#define BaudRate      1000000ul  // Baud rate komunikasi
#define servoID_14    2          // ID Servo 14

// Fungsi untuk konversi sudut ke nilai step
int sudut(float angle) {
  return (int)((angle / 300.0) * 1023.0);
}

void setup() {
  delay(1000); // Waktu tunggu untuk servo siap
  ax12a.begin(BaudRate, DirectionPin, &Serial);
//Serial.begin(9600);
  // Pastikan servo keluar dari mode endless (penting untuk pengaturan sudut)
  ax12a.setEndless(servoID_14, OFF);
    // Pastikan servo keluar dari mode endless (penting untuk pengaturan sudut)
  ax12a.setEndless(1, OFF);
  ax12a.setEndless(2, OFF);
  ax12a.setEndless(3, OFF);
  ax12a.setEndless(4, OFF);
  ax12a.setEndless(5, OFF);
  ax12a.setEndless(6, OFF);
  ax12a.setEndless(7, OFF);
  ax12a.setEndless(8, OFF);
  ax12a.setEndless(9, OFF);
  ax12a.setEndless(10, OFF);
  ax12a.setEndless(11, OFF);
  ax12a.setEndless(12, OFF);
  ax12a.setEndless(13, OFF);
  ax12a.setEndless(14, OFF);
  ax12a.setEndless(15, OFF);
  ax12a.setEndless(16, OFF);

delay(1000);
stanbay();


}

void loop() {
  move(maju);
 



}


void stanbay(){


  ax12a.move(1, sudut(180));
  ax12a.move(2, sudut(195));
  ax12a.move(3, sudut(120));
  ax12a.move(4, sudut(125));
  ax12a.move(5, sudut(105));
  ax12a.move(6, sudut(180));
  ax12a.move(7, sudut(150));
  ax12a.move(8, sudut(150));
  ax12a.move(9, sudut(150));
  ax12a.move(10, sudut(150));
  ax12a.move(11, sudut(150));
  ax12a.move(12, sudut(150));
  ax12a.move(13, sudut(150));
  ax12a.move(14, sudut(150));
  ax12a.move(15, sudut(150));
  ax12a.move(16, sudut(150));


}



void move(int arah ){
  if (arah == maju ){
//naik maju turun 
majuA();
//majuB();
  }
}

