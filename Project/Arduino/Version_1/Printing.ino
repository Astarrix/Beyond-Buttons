void RawInitPrinter() {
  printer.wake();
  printer.reset();
  PrinterSerial.write(27);  // ESC
  PrinterSerial.write(64);  // @ - Initialize printer
  delay(500);
  RawPrintSettings();
}

void RawPrintSettings(byte HeatingDots, byte FeedTime, byte HeatTime) {
  PrinterSerial.write(27);           // ESC
  PrinterSerial.write(55);           // 7 - Print settings
  PrinterSerial.write(HeatingDots);  // Heating dots (7 - max heat)
  PrinterSerial.write(FeedTime);     // Print and feed time (100 * 10 microseconds)
  PrinterSerial.write(HeatTime);     // Heating time (20 * 10 microseconds)
}

void PrintOnPrinter(byte Format, String text, int AutoFeed) {
  printer.reset();  // reset previous instructions
  // weirdly using my raw init disables some formatting options, so some are written raw in seperate functions

  if (bitRead(Format, 0)) {  // 1 - justification - 0 = Left / 1 = Center
    printer.justify('C');
  } else {
    printer.justify('L');
  }
  if (bitRead(Format, 1)) {  // 2 - bold - 0 = Off / 1 = On
    printer.boldOn();
  } else {
    printer.boldOff();
  }
  if (bitRead(Format, 2)) {  // 4 - size - 0 = Small / 1 = Large
    printer.setSize('L');
  } else {
    printer.setSize('S');
  };
  if (bitRead(Format, 3)) {  // 8 - double width - 0 = Off / 1 = On
    printer.doubleWidthOn();
  } else {
    printer.doubleWidthOff();
  }
  if (bitRead(Format, 4)) {  // 16 - inverse - 0 = Off / 1 = On
    ToggleInverse(true);
  } else {
    ToggleInverse(false);
  }
  if (bitRead(Format, 5)) {  // 32 - double height 0 = Off / 1 = On
    printer.doubleHeightOn();
  } else {
    printer.doubleHeightOff();
  };

  printer.println(text);
  if (AutoFeed > 0) { printer.feed(AutoFeed); }
}

void ToggleInverse(bool Active) {
  PrinterSerial.write(29);
  PrinterSerial.write('B');
  PrinterSerial.write(int(Active));
}