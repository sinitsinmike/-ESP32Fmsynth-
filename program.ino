//-----------------------------------SOUNDBANK----------------------------------------------
//byte parameters correction valid parametes level
//Use just prog and progmemoria corrections!
//equal midi recevie parameter corrections!
void proginit() {
  op1volumeorig = op1volume;
  op2volumeorig = op2volume;
  op3volumeorig = op3volume;
  op4volumeorig = op4volume;
  op5volumeorig = op5volume;
  op6volumeorig = op6volume;
  op1generatorfreqorig = op1generatorfreq;
  op2generatorfreqorig = op2generatorfreq;
  op3generatorfreqorig = op3generatorfreq;
  op4generatorfreqorig = op4generatorfreq;
  op5generatorfreqorig = op5generatorfreq;
  op6generatorfreqorig = op6generatorfreq;
  op1generatorfreqfix = op1generatorfreqfixp << 15;
  op2generatorfreqfix = op2generatorfreqfixp << 15;
  op3generatorfreqfix = op3generatorfreqfixp << 15;
  op4generatorfreqfix = op4generatorfreqfixp << 15;
  op5generatorfreqfix = op5generatorfreqfixp << 15;
  op6generatorfreqfix = op6generatorfreqfixp << 15;
  picheglevel = picheglevel << 10;
  op1detune = op1detunep << 12;
  op2detune = op2detunep << 12;
  op3detune = op3detunep << 12;
  op4detune = op4detunep << 12;
  op5detune = op5detunep << 12;
  op6detune = op6detunep << 12;
  c = 4000 + mastertune * 30;
  Q = Qp / 25.0;
  Q2 = Q2p / 25.0;
  f0orig = expgains128[pareqfreq0]>>1+1;
  f02orig =expgains128[pareqfreq1]>>1+1;
  limitcount();
  limitcount2();
  oplevel = oplevel / 2 + 1;
  alg = algorithm % 7;
  alg2 = algorithm / 7;
  reverblevel = reverblevel + 1;
  picheglevel = pichvolume << 9;
  menukiir();
  eqkiszamol();
  eqkiszamol2();
  menuoldal = 1;
  stepprogchanged = 1;
  initprog();
}


void program9() {
  delaylowpasseqrighton = 1;
  delaylowpasseqlefton = 1;
  limiterlefton = 0;
  limiterrighton = 0;
  highpassrighteqon = 0;
  parametereqrighton = 0;
  highpasslefteqon = 0;
  parametereqlefton = 0;
  mastertune = 63;
  szorzo = 10;
  lfo2volume = 100;
  modulation = 0;
  lfo2freq = 30;
  lfo2delay = 10;
  Q2p = 76;
  pareqfreq1 = 60;
  Qp = 76;
  pareqfreq0 = 60;
  eqvalue = 57;
  chorusfreq = 40;
  choruslevel = 8;
  delay2time = 4;
  delaytime = 6;
  reverbdiffusion = 32;
  reverblevel = 51;
  limitgain = 30;
  algorithm = 27;
  frame = 6;
  level = 15;
  oplevel = 1;
  feedbacklevel = 73;
  pichkezd = 10;
  pichrr = 40;
  pichal = 63;
  pichvolume = 40;
  pichrl = 63;
  pichd2r = 40;
  pichd2l = 63;
  pichd1r = 40;
  pichd1l = 63;
  pichar = 10;
  op6pich = 1;
  op6rr = 40;
  op6rl = 0;
  op6d2r = 40;
  op6d2l = 70;
  op6d1r = 40;
  op6d1l = 80;
  op6ar = 5;
  op6al = 100;
  op6volume = 6;
  op6waveform = 2;
  op6generatorfreq = 12;
  op6notefixed = 0;
  op6generatorfreqfix = 10;
  op6detune = 63;
  op6lep = 22;
  op5pich = 1;
  op5rr = 40;
  op5rl = 0;
  op5d2r = 40;
  op5d2l = 70;
  op5d1r = 40;
  op5d1l = 80;
  op5ar = 6;
  op5al = 100;
  op5volume = 6;
  op5lep = 22;
  op5detune = 63;
  op5generatorfreqfix = 10;
  op5notefixed = 0;
  op5generatorfreq = 12;
  op5waveform = 2;
  op4pich = 1;
  op4rr = 40;
  op4rl = 0;
  op4d2r = 40;
  op4d2l = 70;
  op4d1r = 40;
  op4d1l = 80;
  op4ar = 6;
  op4al = 100;
  op4volume = 6;
  op4lep = 22;
  op4detune = 63;
  op4generatorfreqfixp = 10;
  op4notefixed = 0;
  op4generatorfreq = 12;
  op4waveform = 2;
  op3pich = 1;
  op3rr = 40;
  op3rl = 0;
  op3d2r = 40;
  op3d2l = 70;
  op3d1r = 40;
  op3d1l = 80;
  op3ar = 6;
  op3al = 100;
  op3volume = 6;
  op3lep = 22;
  op3detune = 63;
  op3generatorfreqfix = 10;
  op3notefixed = 0;
  op3generatorfreq = 12;
  op3waveform = 2;
  op2pich = 1;
  op2rr = 40;
  op2rl = 0;
  op2d2r = 40;
  op2d2l = 70;
  op2d1r = 40;
  op2d1l = 80;
  op2ar = 6;
  op2al = 100;
  op2volume = 6;
  op2lep = 22;
  op2detune = 63;
  op2generatorfreqfix = 10;
  op2notefixed = 0;
  op2generatorfreq = 12;
  op2waveform = 2;
  op1pich = 1;
  op1rr = 40;
  op1rl = 0;
  op1d2r = 40;
  op1d2l = 70;
  op1d1r = 40;
  op1d1l = 80;
  op1ar = 0;
  op1al = 100;
  op1generatorfreq = 12;
  op1waveform = 2;
  op1lep = 22;
  op1detune = 63;
  op1generatorfreqfix = 10;
  op1notefixed = 0;
  op1volume = 6;
  op1notefixed = 1;
  op2notefixed = 1;
  op3notefixed = 1;
  op4notefixed = 1;
  op5notefixed = 1;
  op6notefixed = 1;
  op1veloc = 3;
  op2veloc = 3;
  op3veloc = 3;
  op4veloc = 3;
  op5veloc = 3;
  op6veloc = 3;
  pachname = "P0: INITSOUND   ";
  proginit();

}

void program1() {
  alg = 2;
  chorusalg = 64;
  choruslevel = 4;
  fixfreqstep = 101;
  frame = 2;
  lfo2freq = 0;
  level = 16;
  modulation = 0;
  op1notefixed = true;
  op2notefixed = true;
  op3notefixed = true;
  op4notefixed = true;
  op5notefixed = true;
  op6notefixed = true;
  op1al = 127;
  op1ar = 1;
  op1d1l = 127;
  op1d1r = 127;
  op1d2l = 95;
  op1d2r = 127;
  op1generatorfreq = 7;
  op1generatorfreqfix = 127;
  op1rl = 127;
  op1rr = 127;
  op1veloc = 3;
  op1volume = 1;
  op1waveform = 2;
  op2al = 127;
  op2ar = 1;
  op2d1l = 82;
  op2d1r = 127;
  op2d2l = 127;
  op2d2r = 127;
  op2generatorfreq = 7;
  op2generatorfreqfix = 127;
  op2rl = 127;
  op2rr = 127;
  op2veloc = 3;
  op2volume = 10;
  op2waveform = 2;
  op3al = 65;
  op3ar = 15;
  op3d1l = 1;
  op3d1r = 127;
  op3d2l = 1;
  op3d2r = 1;
  op3generatorfreq = 7;
  op3generatorfreqfix = 127;
  op3rl = 1;
  op3rr = 1;
  op3veloc = 3;
  op3volume = 127;
  op3waveform = 4;
  op4al = 127;
  op4ar = 1;
  op4d1l = 127;
  op4d1r = 82;
  op4d2l = 108;
  op4d2r = 127;
  op4generatorfreq = 7;
  op4generatorfreqfix = 127;
  op4rl = 127;
  op4rr = 125;
  op4veloc = 3;
  op4volume = 1;
  op4waveform = 1;
  op5al = 62;
  op5ar = 1;
  op5d1l = 50;
  op5d1r = 50;
  op5d2l = 50;
  op5d2r = 50;
  op5generatorfreq = 7;
  op5generatorfreqfix = 127;
  op5rl = 50;
  op5rr = 50;
  op5veloc = 3;
  op5volume = 9;
  op5waveform = 2;
  op6al = 1;
  op6ar = 1;
  op6d1l = 1;
  op6d1r = 1;
  op6d2l = 1;
  op6d2r = 1;
  op6generatorfreq = 7;
  op6generatorfreqfix = 127;
  op6rl = 1;
  op6rr = 1;
  op6veloc = 3;
  op6volume = 2;
  op6waveform = 2;
  oplfo = 1;
  pichal = 1;
  pichar = 1;
  pichd1l = 1;
  pichd1r = 1;
  pichd2l = 1;
  pichd2r = 0;
  picheglevel = 10;
  pichkezd = 1;
  op1pich = 0;
  op2pich = 0;
  op3pich = 0;
  op4pich = 0;
  op5pich = 1;
  op6pich = 0;
  pichrl = 1;
  pichrr = 1;
  szorzo = 10;
  pachname = "P1:KOTO1        ";
  proginit();
}

void program2() {
  alg = 1;
  chorusalg = 64;
  choruslevel = 4;
  fixfreqstep = 101;
  frame = 2;
  lfo2freq = 0;
  level = 16;
  modulation = 0;
  op1notefixed = true;
  op2notefixed = true;
  op3notefixed = true;
  op4notefixed = true;
  op5notefixed = true;
  op6notefixed = true;
  op1al = 127;
  op1ar = 1;
  op1d1l = 127;
  op1d1r = 127;
  op1d2l = 95;
  op1d2r = 127;
  op1generatorfreq = 7;
  op1generatorfreqfix = 127 ;
  op1rl = 127;
  op1rr = 127;
  op1veloc = 3;
  op1volume = 1;
  op1waveform = 1;
  op2al = 127;
  op2ar = 1;
  op2d1l = 82;
  op2d1r = 127;
  op2d2l = 127;
  op2d2r = 127;
  op2generatorfreq = 7;
  op2generatorfreqfix = 127 * 40000;
  op2rl = 127;
  op2rr = 127;
  op2veloc = 3;
  op2volume = 10;
  op2waveform = 2;
  op3al = 65;
  op3ar = 15;
  op3d1l = 1;
  op3d1r = 127;
  op3d2l = 1;
  op3d2r = 1;
  op3generatorfreq = 7;
  op3generatorfreqfix = 127;
  op3rl = 1;
  op3rr = 1;
  op3veloc = 3;
  op3volume = 127;
  op3waveform = 4;
  op4al = 127;
  op4ar = 1;
  op4d1l = 127;
  op4d1r = 82;
  op4d2l = 108;
  op4d2r = 127;
  op4generatorfreq = 7;
  op4generatorfreqfix = 127;
  op4rl = 127;
  op4rr = 125;
  op4veloc = 3;
  op4volume = 1;
  op4waveform = 1;
  op5al = 62;
  op5ar = 1;
  op5d1l = 50;
  op5d1r = 50;
  op5d2l = 50;
  op5d2r = 50;
  op5generatorfreq = 7;
  op5generatorfreqfix = 127 ;
  op5rl = 50;
  op5rr = 50;
  op5veloc = 3;
  op5volume = 9;
  op5waveform = 2;
  op6al = 1;
  op6ar = 1;
  op6d1l = 1;
  op6d1r = 1;
  op6d2l = 1;
  op6d2r = 1;
  op6generatorfreq = 7;
  op6generatorfreqfix = 127 ;
  op6rl = 1;
  op6rr = 1;
  op6veloc = 3;
  op6volume = 2;
  op6waveform = 2;
  oplfo = 1;
  pichal = 1;
  pichar = 1;
  pichd1l = 1;
  pichd1r = 1;
  pichd2l = 1;
  pichd2r = 0;
  picheglevel = 10 ;
  pichkezd = 1;
  op1pich = 0;
  op2pich = 0;
  op3pich = 0;
  op4pich = 0;
  op5pich = 0;
  op6pich = 0;
  pichrl = 1;
  pichrr = 1;
  reverblevel = 7;
  szorzo = 10;
  pachname = "P2:KOTO2        ";
  proginit();
}

void program3() {
  alg = 1;
  chorusalg = 64;
  choruslevel = 8;
  fixfreqstep = 101;
  frame = 2;
  lfo2freq = 1;
  level = 17;
  modulation = 0;
  op1notefixed = true;
  op2notefixed = true;
  op3notefixed = true;
  op4notefixed = true;
  op5notefixed = false;
  op6notefixed = true;
  op1al = 80;
  op1ar = 7;
  op1d1l = 20;
  op1d1r = 50;
  op1d2l = 30;
  op1d2r = 10;
  op1generatorfreq = 14;
  op1generatorfreqfix = 127;
  op1rl = 30;
  op1rr = 40;
  op1veloc = 3;
  op1volume = 1;
  op1waveform = 1;
  op2al = 200;
  op2ar = 5;
  op2d1l = 82;
  op2d1r = 127;
  op2d2l = 127;
  op2d2r = 127;
  op2generatorfreq = 28;
  op2generatorfreqfix = 127;
  op2rl = 10;
  op2rr = 1;
  op2veloc = 3;
  op2volume = 1;
  op2waveform = 2;
  op3al = 30;
  op3ar = 2;
  op3d1l = 1;
  op3d1r = 127;
  op3d2l = 1;
  op3d2r = 1;
  op3generatorfreq = 28;
  op3generatorfreqfix = 127;
  op3rl = 1;
  op3rr = 10;
  op3veloc = 3;
  op3volume = 4;
  op3waveform = 4;
  op4al = 40;
  op4ar = 30;
  op4d1l = 20;
  op4d1r = 2;
  op4d2l = 30;
  op4d2r = 10;
  op4generatorfreq = 14;
  op4generatorfreqfix = 127;
  op4rl = 20;
  op4rr = 10;
  op4veloc = 3;
  op4volume = 126;
  op4waveform = 1;
  op5al = 4;
  op5ar = 10;
  op5d1l = 11;
  op5d1r = 14;
  op5d2l = 14;
  op5d2r = 4;
  op5generatorfreq = 7;
  op5generatorfreqfix = 127 ;
  op5rl = 5;
  op5rr = 4;
  op5veloc = 3;
  op5volume = 4;
  op5waveform = 5;
  op6al = 7;
  op6ar = 9;
  op6d1l = 8;
  op6d1r = 5;
  op6d2l = 8;
  op6d2r = 5;
  op6generatorfreq = 14;
  op6generatorfreqfix = 127 ;
  op6rl = 7;
  op6rr = 9;
  op6veloc = 3;
  op6volume = 4;
  op6waveform = 2;
  oplfo = 1;
  pichal = 0;
  pichar = 10;
  pichd1l = 0;
  pichd1r = 2;
  pichd2l = 0;
  pichd2r = 10;
  picheglevel = 10;
  pichkezd = 0;
  op1pich = 0;
  op2pich = 0;
  op3pich = 0;
  op4pich = 0;
  op5pich = 0;
  op6pich = 0;
  pichrl = 0;
  pichrr = 30;
  reverblevel = 7;
  szorzo = 10;
  pachname = "P3:PAN PIPE";
  proginit();
}

void program4() {
  op2ar = 44;
  op1generatorfreq = 12;
  op1generatorfreqfix = 22;
  op1lep = 19;
  op2lep = 19;
  op2volume = 41;
  feedbacklevel = 0;
  op2waveform = 11;
  //pichvolume= 0;
  op1ar = 0;
  op1al = 127;
  frame = 4;
  op2d1l = 127;
  op2d2l = 89;
  op2d1r = 48;
  op2generatorfreq = 48;
  op2rl = 0;
  op2rr = 127;
  op2d2r = 70;
  op2al = 127;
  op1waveform = 2;
  op1volume = 19;
  reverblevel = 0;
  alg = 4; //!
  op1rl = 75;
  op1rr = 127;
  op1d2r = 60;
  op1d2l = 73;
  op1d1r = 51;
  op1d1l = 127;
  op6volume = 0;
  op5volume = 0;
  op4volume = 0;
  op3volume = 0;
  lfo2freq = 89;
  lfo2volume = 100;
  level = 15;
  //reverbmastertune= 44;!!
  szorzo = 7;
  op4d2r = 52;
  op4rl = 59;
  op3waveform = 1;
  level = 16;
  //feedbackoplevel= 7;!!
  op4generatorfreq = 3;
  op6generatorfreq = 8;
  op6generatorfreqfix = 3;
  op6waveform = 1;
  //op6notefixed= 0;!!
  op5ar = 55;
  op5generatorfreq = 24;
  //op5notefixed= 1;!!
  op4waveform = 1;
  op4ar = 0;
  op3generatorfreqfix = 3;
  op3generatorfreq = 3;
  //op3notefixed= 0;!!
  //op2notefixed= 1;!!
  level = 16;
  //chorusop3lep= 21;
  //op6pich= 0;!!
  //op5pich= 0;!!
  //op4pich= 1;
  //op3pich= 1;
  //op2pich= 0;
  //op1pich= 1;
  //op4notefixed= 1;!!
  //op1notefixed= 1;!!
  op5generatorfreqfix = 7;
  op3d2l = 127;
  op3d1l = 67;
  op3ar = 127;
  op3al = 69;
  op2generatorfreqfix = 5;
  level = 17;
  op6detune = 19;
  op5detune = 0;
  op3detune = 11;
  op4detune = 0;
  op2detune = 5;
  op1detune = 24;
  op6lep = 22;
  op5lep = 22;
  op4lep = 21;
  op6ar = 0;
  op5al = 127;
  //reverbdiffuse= 115;!!
  chorusfreq = 61;
  op5waveform = 1;
  op4generatorfreqfix = 0;
  op5rl = 0;
  //pichdetune= 20;!!
  pichkezd = 43;
  //pichnotefixed= 0;!!
  //pichpich= 0;!!
  pichrr = 0;
  pichar = 64;
  pichrl = 61;
  pichd2r = 41;
  pichd2l = 87;
  pichd1r = 28;
  pichd1l = 69;
  pichal = 108;
  op6rr = 127;
  op6rl = 0;
  op6d2r = 37;
  op6d2l = 59;
  op6d1r = 30;
  op6d1l = 75;
  op6al = 127;
  op5rr = 127;
  op5d2r = 30;
  op5d2l = 127;
  op5d1r = 50;
  op5d1l = 127;
  op3rr = 127;
  op3rl = 0;
  op3d2r = 41;
  op3d1r = 66;
  op4d1r = 64;
  op4d1l = 127;
  op4al = 127;
  op4rr = 127;
  op4d2l = 59;

  pachname = "P4:BRASS TVA  ";
  proginit();
}

void program5() {
  alg = 3;
  chorusalg = 64;
  choruslevel = 8;
  fixfreqstep = 100;
  frame = 2;
  lfo2freq = 1;
  level = 16;
  modulation = 0;
  op1notefixed = true;
  op2notefixed = true;
  op3notefixed = true;
  op4notefixed = true;
  op5notefixed = true;
  op6notefixed = true;
  op1al = 43;
  op1ar = 1;
  op1d1l = 54;
  op1d1r = 97;
  op1d2l = 1;
  op1d2r = 86;
  op1generatorfreq = 28;
  op1generatorfreqfix = 1;
  op1rl = 1;
  op1rr = 71;
  op1veloc = 3;
  op1volume = 2;
  op1waveform = 1;
  op2al = 101;
  op2ar = 1;
  op2d1l = 62;
  op2d1r = 37;
  op2d2l = 34;
  op2d2r = 39;
  op2generatorfreq = 7;
  op2generatorfreqfix = 127;
  op2rl = 1;
  op2rr = 61;
  op2veloc = 3;
  op2volume = 2;
  op2waveform = 2;
  op3al = 47;
  op3ar = 5;
  op3d1l = 74;
  op3d1r = 1;
  op3d2l = 30;
  op3d2r = 1;
  op3generatorfreq = 1;
  op3generatorfreqfix = 66;
  op3rl = 1;
  op3rr = 1;
  op3veloc = 3;
  op3volume = 50;
  op3waveform = 2;
  op4al = 63;
  op4ar = 19;
  op4d1l = 24;
  op4d1r = 88;
  op4d2l = 75;
  op4d2r = 34;
  op4generatorfreq = 7;
  op4generatorfreqfix = 1 ;
  op4rl = 0;
  op4rr = 32;
  op4veloc = 3;
  op4volume = 2;
  op4waveform = 1;
  op5al = 104;
  op5ar = 1;
  op5d1l = 19;
  op5d1r = 50;
  op5d2l = 13;
  op5d2r = 15;
  op5generatorfreq = 14;
  op5generatorfreqfix = 1;
  op5rl = 1;
  op5rr = 30;
  op5veloc = 3;
  op5volume = 6;
  op5waveform = 2;
  op6al = 22;
  op6ar = 1;
  op6d1l = 29;
  op6d1r = 15;
  op6d2l = 19;
  op6d2r = 28;
  op6generatorfreq = 7;
  op6generatorfreqfix = 1 ;
  op6rl = 1;
  op6rr = 28;
  op6veloc = 3;
  op6volume = 42;
  op6waveform = 2;
  oplfo = 1;
  pichal = 1;
  pichar = 1;
  pichd1l = 1;
  pichd1r = 1;
  pichd2l = 1;
  pichd2r = 20;
  picheglevel = 1;
  pichkezd = 1;
  op1pich = 0;
  op2pich = 0;
  op3pich = 0;
  op4pich = 0;
  op5pich = 0;
  op6pich = 0;
  pichrl = 1;
  pichrr = 1;
  revalg = 4;
  szorzo = 10;
  hangokinit();
  reverblevel = 7;
  pachname = "P5:Sine Wave    ";
  proginit();
}

void program6() {
  alg = 4;
  chorusalg = 64;
  choruslevel = 8;
  fixfreqstep = 40;
  frame = 2;
  level = 16;
  lfo2freq = 1;
  modulation = 0;
  op1notefixed = true;
  op2notefixed = true;
  op3notefixed = true;
  op4notefixed = true;
  op5notefixed = true;
  op6notefixed = true;
  op1al = 51;
  op1ar = 1;
  op1d1l = 56;
  op1d1r = 127;
  op1d2l = 47;
  op1d2r = 127;
  op1generatorfreq = 12;
  op1generatorfreqfix = 1 ;
  op1rl = 0;
  op1rr = 127;
  op1veloc = 3;
  op1volume = 38;
  op1waveform = 2;
  op2al = 127;
  op2ar = 1;
  op2d1l = 62;
  op2d1r = 37;
  op2d2l = 34;
  op2d2r = 39;
  op2generatorfreq = 12;
  op2generatorfreqfix = 1 ;
  op2rl = 1;
  op2rr = 61;
  op2veloc = 3;
  op2volume = 36;
  op2waveform = 2;
  op3al = 127;
  op3ar = 1;
  op3d1l = 127;
  op3d1r = 127;
  op3d2l = 127;
  op3d2r = 127;
  op3generatorfreq = 24;
  op3generatorfreqfix = 1 ;
  op3rl = 0;
  op3rr = 127;
  op3veloc = 3;
  op3volume = 36;
  op3waveform = 6;
  op4al = 127;
  op4ar = 97;
  op4d1l = 0;
  op4d1r = 72;
  op4d2l = 0;
  op4d2r = 38;
  op4generatorfreq = 24;
  op4generatorfreqfix = 119 ;
  op4rl = 0;
  op4rr = 10;
  op4veloc = 3;
  op4volume = 19;
  op4waveform = 6;
  op5al = 127;
  op5ar = 1;
  op5d1l = 50;
  op5d1r = 45;
  op5d2l = 50;
  op5d2r = 45;
  op5generatorfreq = 12;
  op5generatorfreqfix = 1 ;
  op5rl = 0;
  op5rr = 50;
  op5veloc = 3;
  op5volume = 113;
  op5waveform = 2;
  op6al = 50;
  op6ar = 1;
  op6d1l = 50;
  op6d1r = 50;
  op6d2l = 50;
  op6d2r = 50;
  op6generatorfreq = 12;
  op6generatorfreqfix = 1 ;
  op6rl = 0;
  op6rr = 50;
  op6veloc = 3;
  op6volume = 21;
  op6waveform = 2;
  oplfo = 1;
  pichal = 0;
  pichar = 57;
  pichd1l = 100;
  pichd1r = 100;
  pichd2l = 0;
  pichd2r = 100;
  picheglevel = 47;
  pichkezd = 95;
  op1pich = 1;
  op2pich = 0;
  op3pich = 0;
  op4pich = 1;
  op5pich = 2;
  op6pich = 0;
  pichrl = 100;
  pichrr = 100;
  szorzo = 10;
  pachname = "P6:FM Bass";
  reverblevel = 7;
  proginit();
}

void program7() {
  alg = 5;
  chorusalg = 64;
  choruslevel = 8;
  fixfreqstep = 40;
  frame = 8;
  level = 17;
  lfo2freq = 1;
  modulation = 0;
  op1notefixed = true;
  op2notefixed = true;
  op3notefixed = true;
  op4notefixed = true;
  op5notefixed = true;
  op6notefixed = true;
  op1al = 127;
  op1ar = 0;
  op1d1l = 127;
  op1d1r = 34;
  op1d2l = 74;
  op1d2r = 39;
  op1generatorfreq = 12;
  op1generatorfreqfix = 1 ;
  op1rl = 0;
  op1rr = 81;
  op1veloc = 3;
  op1volume = 5;
  op1waveform = 2;
  op2al = 58;
  op2ar = 23;
  op2d1l = 56;
  op2d1r = 46;
  op2d2l = 34;
  op2d2r = 42;
  op2generatorfreq = 24;
  op2generatorfreqfix = 1 ;
  op2rl = 1;
  op2rr = 44;
  op2veloc = 3;
  op2volume = 3;
  op2waveform = 1;
  op3al = 76;
  op3ar = 1;
  op3d1l = 1;
  op3d1r = 127;
  op3d2l = 127;
  op3d2r = 127;
  op3generatorfreq = 60;
  op3generatorfreqfix = 41 ;
  op3rl = 1;
  op3rr = 1;
  op3veloc = 3;
  op3volume = 29;
  op3waveform = 2;
  op4al = 127;
  op4ar = 0;
  op4d1l = 83;
  op4d1r = 68;
  op4d2l = 58;
  op4d2r = 53;
  op4generatorfreq = 12;
  op4generatorfreqfix = 1 ;
  op4rl = 0;
  op4rr = 38;
  op4veloc = 3;
  op4volume = 3;
  op4waveform = 2;
  op5al = 59;
  op5ar = 1;
  op5d1l = 50;
  op5d1r = 50;
  op5d2l = 50;
  op5d2r = 50;
  op5generatorfreq = 60;
  op5generatorfreqfix = 10 ;
  op5rl = 1;
  op5rr = 50;
  op5veloc = 3;
  op5volume = 9;
  op5waveform = 3;
  op6al = 50;
  op6ar = 21;
  op6d1l = 45;
  op6d1r = 50;
  op6d2l = 50;
  op6d2r = 50;
  op6generatorfreq = 6;
  op6generatorfreqfix = 127 ;
  op6rl = 1;
  op6rr = 1;
  op6veloc = 3;
  op6volume = 22;
  op6waveform = 3;
  oplfo = 1;
  pichal = 0;
  pichal = 50;
  pichar = 20;
  pichd1l = 100;
  pichd1r = 20;
  pichd2l = 50;
  picheglevel = 17 ;
  pichkezd = 1;
  op1pich = 1;
  op2pich = 0;
  op3pich = 0;
  op4pich = 2;
  op5pich = 0;
  op6pich = 0;
  pichrl = 50;
  pichrr = 70;
  revalg = 8;
  reverblevel = 7;
  szorzo = 10;
  pachname = "P7:Scotland Pipe";
  proginit();
}

void program8() {
  oplevel = 2;
  alg = 2;
  chorusalg = 64;
  choruslevel = 8;
  feedbacklevel = 3;
  fixfreqstep = 40;
  frame = 2;
  level = 17;
  lfo2freq = 1;
  modulation = 0;
  op1notefixed = true;
  op2notefixed = true;
  op3notefixed = true;
  op4notefixed = true;
  op5notefixed = true;
  op6notefixed = true;
  op1al = 127;
  op1ar = 0;
  op1d1l = 127;
  op1d1r = 127;
  op1d2l = 50;
  op1d2r = 127;
  op1rl = 0;
  op1rr = 127;
  op1generatorfreq = 12;
  op1generatorfreqfix = 1;
  op1rl = 0;
  op1rr = 127;
  op1veloc = 3;
  op1volume = 48;
  op1waveform = 1;
  op2al = 127;
  op2ar = 1;
  op2d1l = 127;
  op2d1r = 127;
  op2d2l = 50;
  op2d2r = 127;
  op2rl = 0;
  op3rr = 127;
  op2generatorfreq = 12;
  op2generatorfreqfix = 1 ;
  op2veloc = 3;
  op2volume = 72;
  op2waveform = 2;
  op3al = 127;
  op3ar = 1;
  op3d1l = 127;
  op3d1r = 127;
  op3d2l = 127;
  op3d2r = 127;
  op3d1r = 127;
  op3d2l = 127;
  op3d2r = 127;
  op3generatorfreq = 96;
  op3generatorfreqfix = 1 ;
  op3rl = 0;
  op3rr = 127;
  op3veloc = 3;
  op3volume = 0;
  op3waveform = 2;
  op4al = 127;
  op4ar = 97;
  op4d1l = 0;
  op4d1r = 72;
  op4d2l = 0;
  op4d2r = 38;
  op4generatorfreq = 12;
  op4generatorfreqfix = 192 ;
  op4rl = 62;
  op4rr = 1;
  op4veloc = 3;
  op4volume = 0;
  op4waveform = 2;
  op5al = 127;
  op5ar = 1;
  op5d1l = 50;
  op5d1r = 45;
  op5d2l = 50;
  op5d2r = 45;
  op5generatorfreq = 48;
  op5generatorfreqfix = 1;
  op5rl = 1;
  op5rr = 50;
  op5veloc = 3;
  op5volume = 0;
  op5waveform = 2;
  op6al = 50;
  op6ar = 1;
  op6d1l = 50;
  op6d1r = 50;
  op6d2l = 50;
  op6d2r = 50;
  op6generatorfreq = 12;
  op6generatorfreqfix = 1;
  op6rl = 1;
  op6rr = 50;
  op6veloc = 3;
  op6volume = 0;
  op6waveform = 2;
  oplfo = 1;
  pichal = 0;
  pichar = 57;
  pichd1l = 100;
  pichd1r = 100;
  pichd2l = 0;
  pichd2r = 100;
  picheglevel = 47;
  pichkezd = 95;
  op1pich = 1;
  op2pich = 0;
  op3pich = 0;
  op4pich = 1;
  op5pich = 2;
  op6pich = 0;
  pichrl = 100;
  pichrr = 100;
  reverblevel = 8;
  szorzo = 10;
  pachname = "P8:Brass 1";
  proginit();
}

void program0() {
delaylowpasseqrighton=1;
delaylowpasseqlefton=1;
limiterlefton=0;
limiterrighton=0;
highpassrighteqon=0;
parametereqrighton=1;
highpasslefteqon=0;
parametereqlefton=0;
mastertune=72;
szorzo=10;
lfo2volume=0;
modulation=36;
lfo2freq=23;
lfo2delay=112;
Q2p=76;
Qp=76;
pareqfreq0=60;
pareqfreq1=60;
eqvalue=57;
chorusfreq=40;
choruslevel=8;
delay2time=4;
delaytime=6;
reverbdiffusion=21;
reverblevel=128;
limitgain=30;
algorithm=22;
frame=6;
level=15;
oplevel=1;
feedbacklevel=5;
op1al= 127;
op1ar= 0;
op1d1l= 127;
op1d1r= 83;
op1d2l= 89;
op1d2r= 76;
op1rl= 0;
op1rr= 64;
op2al= 127;
op2ar= 29;
op2d1l= 127;
op2d1r= 64;
op2d2l= 79;
op2d2r= 73;
op2rl= 0;
op2rr= 127;
op3al= 127;
op3ar= 6;
op3d1l= 80;
op3d1r= 40;
op3d2l= 70;
op3d2r= 40;
op3rl= 0;
op3rr= 40;
op4al= 100;
op4ar= 6;
op4d1l= 80;
op4d1r= 40;
op4d2l= 70;
op4d2r= 40;
op4rl= 0;
op4rr= 40;
op5al= 76;
op5ar= 0;
op5d1l= 95;
op5d1r= 79;
op5d2l= 70;
op5d2r= 67;
op5rl= 0;
op5rr= 89;
op6al= 100;
op6ar= 0;
op6d1l= 111;
op6d1r= 79;
op6d2l= 95;
op6d2r= 38;
op6rl= 0;
op6rr= 111;
op1volume= 10;
op1waveform= 6;
op1generatorfreq= 12;
op1notefixed= 1;
op1generatorfreqfixp= 10;
op1detunep= 63;
op1lep= 22;
op1pich= 1;
op2volume= 127;
op2waveform= 2;
op2generatorfreq= 10;
op2notefixed= 0;
op2generatorfreqfixp= 1;
op2detunep= 63;
op2lep= 22;
op2pich= 1;
op3volume= 0;
op3waveform= 2;
op3generatorfreq= 1;
op3notefixed= 1;
op3generatorfreqfixp= 6;
op3detune= 63;
op3lep= 22;
op3pich= 1;
op4volume= 16;
op4waveform= 0;
op4generatorfreq= 12;
op4notefixed= 1;
op4generatorfreqfixp= 10;
op4detunep= 63;
op4lep= 22;
op4pich= 1;
op5volume= 1;
op5waveform= 6;
op5generatorfreq= 6;
op5notefixed= 1;
op5generatorfreqfixp= 10;
op5detunep= 63;
op5lep= 22;
op5pich= 1;
op6volume= 68;
op6waveform= 2;
op6generatorfreq= 12;
op6notefixed= 1;
op6generatorfreqfixp= 10;
op6detunep= 63;
op6lep= 22;
op6pich= 1;
pichvolume= 0;
pichkezd= 10;
pichal= 63;
pichar= 10;
pichd1l= 63;
pichd1r= 40;
pichd2l= 63;
pichd2r= 40;
pichrl= 63;
pichrr= 40;
pachname = "P09:Balaton 01";
  proginit();
}

void program10() {
  delaylowpasseqrighton = 1;
  delaylowpasseqlefton = 1;
  limiterlefton = 0;
  limiterrighton = 0;
  highpassrighteqon = 0;
  parametereqrighton = 0;
  highpasslefteqon = 0;
  parametereqlefton = 0;
  mastertune = 63;
  szorzo = 10;
  lfo2volume = 100;
  modulation = 0;
  lfo2freq = 30;
  lfo2delaytime = 10;
  Q2p = 76;
  pareqfreq1 = 60;
  Qp = 76;
  pareqfreq0 = 60;
  eqvalue = 57;
  chorusfreq = 40;
  choruslevel = 8;
  delay2time = 4;
  delaytime = 6;
  reverbdiffusion = 32;
  reverblevel = 51;
  limitgain = 30;
  algorithm = 41;
  frame = 6;
  level = 15;
  oplevel = 1;
  feedbacklevel = 38;
  pichkezd = 10;
  pichrr = 40;
  pichal = 63;
  pichvolume = 0;
  pichrl = 63;
  pichd2r = 40;
  pichd2l = 63;
  pichd1r = 40;
  pichd1l = 63;
  pichar = 10;
  op6pich = 1;
  op6rr = 40;
  op6rl = 0;
  op6d2r = 40;
  op6d2l = 70;
  op6d1r = 40;
  op6d1l = 80;
  op6ar = 5;
  op6al = 100;
  op6volume = 6;
  op6waveform = 2;
  op6generatorfreq = 12;
  op6notefixed = 0;
  op6generatorfreqfixp = 10;
  op6detunep = 63;
  op6lep = 22;
  op5pich = 1;
  op5rr = 40;
  op5rl = 0;
  op5d2r = 40;
  op5d2l = 70;
  op5d1r = 40;
  op5d1l = 80;
  op5ar = 6;
  op5al = 100;
  op5volume = 6;
  op5lep = 22;
  op5detunep = 63;
  op5generatorfreqfixp = 10;
  op5notefixed = 0;
  op5generatorfreq = 12;
  op5waveform = 2;
  op4pich = 1;
  op4rr = 40;
  op4rl = 0;
  op4d2r = 40;
  op4d2l = 70;
  op4d1r = 40;
  op4d1l = 80;
  op4ar = 6;
  op4al = 100;
  op4volume = 6;
  op4lep = 22;
  op4detunep = 63;
  op4generatorfreqfixp = 10;
  op4notefixed = 0;
  op4generatorfreq = 12;
  op4waveform = 2;
  op3pich = 1;
  op3rr = 40;
  op3rl = 0;
  op3d2r = 40;
  op3d2l = 70;
  op3d1r = 40;
  op3d1l = 80;
  op3ar = 6;
  op3al = 100;
  op3volume = 6;
  op3lep = 22;
  op3detunep = 63;
  op3generatorfreqfixp = 10;
  op3notefixed = 0;
  op3generatorfreq = 12;
  op3waveform = 2;
  op2pich = 1;
  op2rr = 40;
  op2rl = 0;
  op2d2r = 40;
  op2d2l = 70;
  op2d1r = 40;
  op2d1l = 80;
  op2ar = 6;
  op2al = 100;
  op2volume = 6;
  op2lep = 22;
  op2detunep = 63;
  op2generatorfreqfixp = 10;
  op2notefixed = 0;
  op2generatorfreq = 12;
  op2waveform = 2;
  op1pich = 1;
  op1rr = 40;
  op1rl = 0;
  op1d2r = 40;
  op1d2l = 70;
  op1d1r = 40;
  op1d1l = 80;
  op1ar = 6;
  op1al = 100;
  op1generatorfreq = 12;
  op1waveform = 2;
  op1lep = 22;
  op1detunep = 63;
  op1generatorfreqfixp = 10;
  op1notefixed = 0;
  op1volume = 6;
  op1notefixed = 1;
  op2notefixed = 1;
  op3notefixed = 1;
  op4notefixed = 1;
  op5notefixed = 1;
  op6notefixed = 1;
  op1veloc = 3;
  op2veloc = 3;
  op3veloc = 3;
  op4veloc = 3;
  op5veloc = 3;
  op6veloc = 3;
  pachname = "P10: INITSOUND  ";
  proginit();

}
