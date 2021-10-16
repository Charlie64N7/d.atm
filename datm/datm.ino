#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int left = 10;
const int select = 7;
const int right = 9;

int menu = 1;

const int animationSpeed = 25;
const int readDelay = 400;

void setup() {
  lcd.begin(16, 2);

  pinMode(left, INPUT_PULLUP);
  pinMode(right, INPUT_PULLUP);
  pinMode(select, INPUT_PULLUP);
  
  lcd.print("     d.atm");
  delay(readDelay*2);
  lcd.clear();
  lcd.print("    author:");
  delay(readDelay);
  lcd.clear();
  lcd.print("    Charlie");
  delay(readDelay);
  lcd.clear();
  lcd.print("  Lynch-Gerrard");
  delay(readDelay);
  lcd.clear();
  lcd.print("'<' & '>' to nav");
  delay(readDelay*4);
  lcd.clear();
  lcd.print("'select' to pick ");
  delay(readDelay*4);
  lcd.clear();
  updateMenu();
  
  
}

void loop() {
  
    if (!digitalRead(left)) {
      menu--;
      updateMenu();
      delay(100);
      while (!digitalRead(left));
    }

    if (!digitalRead(right)) {
      menu++;
      updateMenu();
      delay(100);
      while (!digitalRead(right));
    }

    if (!digitalRead(select)) {
      execute();
      updateMenu();
      delay(100);
      while (!digitalRead(select));
  } 
}

void updateMenu() {
  switch (menu) {
    case 0:
      menu = 1;
      break;
    case 1:
      lcd.clear();
      lcd.print(">block number");
      lcd.setCursor(0, 1);
      lcd.print(" hash");
      break;
    case 2:
      lcd.clear();
      lcd.print(" block number");
      lcd.setCursor(0, 1);
      lcd.print(">hash");
      break;
    case 3:
      
      lcd.clear();
      lcd.print(">unconfirmed");
      delay(readDelay);
      lcd.clear();
      lcd.print(">transactions");
      delay(readDelay);
      lcd.clear();
      lcd.print(">unconfirmed transactions");
      lcd.setCursor(0, 1);
      lcd.print(" high gas price");
      break;
    case 4:
      lcd.clear();
      lcd.print(" unconfirmed transactions");
      lcd.setCursor(0, 1);
      lcd.print(">high gas price");
      break;
    case 5:
      lcd.clear();
      lcd.print(">mid gas price");
      lcd.setCursor(0, 1);
      lcd.print(" low gas price");
      break;
    case 6:
      lcd.clear();
      lcd.print(" mid gas price");
      lcd.setCursor(0, 1);
      lcd.print(">low gas price");
      break;
  }
}

void execute() {
  switch (menu) {
    case 1:
      getBlockNumber();
      break;
    case 2:
      getHash();
      break;
    case 3:
      getUnconfirmedCount();
      break;
    case 4:
      getHighGasPrice();
      break;
    case 5:
      getMediumGasPrice();
      break;
    case 6:
      getLowGasPrice();
      break;
  }
}

void getBlockNumber() {
  
  o.sendCommand("get_block_number", " "  );
  OWLCommand bn_response = o.awaitReply();
  o.sendCommand("println", "latest block number is" + String(bn_response.data));
  int block_number = bn_response.data.toInt();
  
  lcd.clear();
  int i;
    for (i=0; i <= 15; i++) { 
      lcd.print(".");
      delay(animationSpeed);
}
      lcd.clear();
      delay(100);
      lcd.print(block_number);
      lcd.print("13394140");
      delay(750);
    
}

void getHash() {
  
  o.sendCommand("get_hash", " ");
  OWLCommand h_response = o.awaitReply();
  o.sendCommand("println", "latest hash is" + String(h_response.data));
  int hash_number = h_response.data.toInt();
  
  lcd.clear();
  int i;
    for (i=0; i <= 15; i++) { 
      lcd.print(".");
      delay(animationSpeed);
}
      lcd.clear();
      delay(100);
      lcd.print(hash_number);
      delay(750);
}
 

void getUnconfirmedCount() {

  o.sendCommand("get_unconfirmed_count", " ");
  OWLCommand uc_response = o.awaitReply();
  o.sendCommand("println", "latest unconfirmed block count is" + String(uc_response.data));
  int unconfirmed_block_number = uc_response.data.toInt();

  lcd.clear();
  int i;
    for (i=0; i <= 15; i++) { 
      lcd.print(".");
      delay(animationSpeed);
}
      lcd.clear();
      delay(100);
      lcd.print(unconfirmed_block_number);
      delay(750);
}

void getHighGasPrice() {
  
  o.sendCommand("get_high_gas_price", " ");
  OWLCommand hg_response = o.awaitReply();
  o.sendCommand("println", "latest high gas price is" + String(hg_response.data));
  int high_gas_price = hg_response.data.toInt();
  
  lcd.clear();
  int i;
    for (i=0; i <= 15; i++) { 
      lcd.print(".");
      delay(animationSpeed);
}
      lcd.clear();
      delay(100);
      lcd.print(high_gas_price " wei");
      delay(750);
}

void getMediumGasPrice() {
  
  o.sendCommand("get_medium_gas_price", " ");
  OWLCommand mg_response = o.awaitReply();
  o.sendCommand("println", "latest medium gas price is" + String(mg_response.data));
  int medium_gas_price = mg_response.data.toInt();
  
  lcd.clear();
  int i;
    for (i=0; i <= 15; i++) { 
      lcd.print(".");
      delay(animationSpeed);
}
      lcd.clear();
      delay(100);
      lcd.print(medium_gas_price " wei");
      delay(750);
}

void getLowGasPrice() {
  
  o.sendCommand("get_low_gas_price", " ");
  OWLCommand lg_response = o.awaitReply();
  o.sendCommand("println", "latest low gas price is" + String(lg_response.data));
  int low_gas_price = lg_response.data.toInt();
  lcd.clear();
  int i;
    for (i=0; i <= 15; i++) { 
      lcd.print(".");
      delay(animationSpeed);
}
      lcd.clear();
      delay(100);
      lcd.print(low_gas_price " wei");
      delay(750);
}
