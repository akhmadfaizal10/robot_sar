//maju
void forward(){
 fermur_naik7_9_11();
    delay(detik);  // Beri waktu kaki terangkat

    coxa8_10_12();  
    // Tidak perlu delay jika hanya menggerakkan paha tanpa mengangkat kaki
    
    coxa_maju7_9_11();
    delay(detik);  // Beri waktu kaki maju

    fermur();
    delay(detik);  // Beri waktu kaki turun

    fermur_naik8_10_12();
    delay(detik);  // Beri waktu kaki terangkat

    coxa7_9_11();  
    // Tidak perlu delay jika hanya menggerakkan paha tanpa mengangkat kaki

    coxa_maju8_10_12();
    delay(detik);  // Beri waktu kaki maju

    fermur();
    delay(detik);  // Beri waktu kaki turun
}

void backward() {
    fermur_naik7_9_11();
    delay(detik);  // Beri waktu kaki terangkat

    coxa8_10_12();  
    // Tidak perlu delay jika hanya menggerakkan paha tanpa mengangkat kaki

    coxa_mundur7_9_11();
    delay(detik);  // Beri waktu kaki mundur

    fermur();
    delay(detik);  // Beri waktu kaki turun

    fermur_naik8_10_12();
    delay(detik);  // Beri waktu kaki terangkat

    coxa7_9_11();  
    // Tidak perlu delay jika hanya menggerakkan paha tanpa mengangkat kaki

    coxa_mundur8_10_12();
    delay(detik);  // Beri waktu kaki mundur

    fermur();
    delay(detik);  // Beri waktu kaki turun
}

void muter() {
    fermur_naik7_9_11();
    delay(detik);  // Beri waktu kaki terangkat

    coxa8_10_12();  
    // Tidak perlu delay jika hanya menggerakkan paha tanpa mengangkat kaki

    coxa_muter7_9_11();
    delay(detik);  // Beri waktu kaki berputar

    fermur();
    delay(detik);  // Beri waktu kaki turun

    fermur_naik8_10_12();
    delay(detik);  // Beri waktu kaki terangkat

    coxa7_9_11();  
    // Tidak perlu delay jika hanya menggerakkan paha tanpa mengangkat kaki

    coxa_muter8_10_12();
    delay(detik);  // Beri waktu kaki berputar

    fermur();
    delay(detik);  // Beri waktu kaki turun
}


