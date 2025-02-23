void majuA(){
  //naik maju turun 
  ax12a.move(13, sudut(S13));
  ax12a.move(14, sudut(150));
  ax12a.move(15, sudut(150));
  ax12a.move(16, sudut(150));
  ax12a.move(17, sudut(150));
  ax12a.move(18, sudut(150));

ax12a.move(7, sudut(150));
ax12a.move(9, sudut(150));     //mundur 
ax12a.move(11, sudut(150));
delay(100);
ax12a.move(1, sudut(210));
ax12a.move(3, sudut(145));
ax12a.move(5, sudut(95));                   
//////////////////
delay(200);
ax12a.move(8, sudut(180));
ax12a.move(12, sudut(180));
ax12a.move(10, sudut(180));
delay(100);
ax12a.move(2, sudut(170));
ax12a.move(4, sudut(145));
ax12a.move(6, sudut(200));

delay(1000);
/////////////////////
ax12a.move(7, sudut(180));
ax12a.move(9, sudut(180));
delay(100);
ax12a.move(1, sudut(170));
ax12a.move(3, sudut(105));
ax12a.move(5, sudut(135));
delay(200);
/////////////
ax12a.move(8, sudut(150));
ax12a.move(12, sudut(150));     //mundur 
ax12a.move(10, sudut(150));

delay(100);
ax12a.move(2, sudut(210));
ax12a.move(4, sudut(105));
ax12a.move(6, sudut(180));                   



delay(1000);

}


void majuB(){



ax12a.move(8, sudut(150));
ax12a.move(12, sudut(150));     //mundur 
ax12a.move(10, sudut(150));

delay(100);
ax12a.move(2, sudut(210));
ax12a.move(4, sudut(105));
ax12a.move(6, sudut(180));                   

delay(1000);

//Serial.println("B");
ax12a.move(8, sudut(180));
ax12a.move(12, sudut(180));
ax12a.move(10, sudut(180));
delay(100);
ax12a.move(2, sudut(170));
ax12a.move(4, sudut(145));
ax12a.move(6, sudut(200));
delay(2000);

delay(1000);

ax12a.move(8, sudut(150));
ax12a.move(12, sudut(150));     //mundur 
ax12a.move(10, sudut(150));

delay(100);
ax12a.move(2, sudut(210));
ax12a.move(4, sudut(105));
ax12a.move(6, sudut(180));  


}