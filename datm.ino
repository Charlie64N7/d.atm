#include <OWL.h>

OWL o;

void setup() {

  o.connect(9600);
  
}

void getEthData() {

  
  o.sendCommand("get_block_number", " "  );
  OWLCommand bn_response = o.awaitReply();
  o.sendCommand("println", "latest block number is" + String(bn_response.data));
  
  o.sendCommand("get_hash", " ");
  OWLCommand h_response = o.awaitReply();
  o.sendCommand("println", "latest hash is" + String(h_response.data));

  o.sendCommand("get_unconfirmed_count", " ");
  OWLCommand uc_response = o.awaitReply();
  o.sendCommand("println", "latest unconfirmed block count is" + String(uc_response.data));

  o.sendCommand("get_high_gas_price", " ");
  OWLCommand hg_response = o.awaitReply();
  o.sendCommand("println", "latest high gas price is" + String(hg_response.data));

  o.sendCommand("get_medium_gas_price", " ");
  OWLCommand mg_response = o.awaitReply();
  o.sendCommand("println", "latest medium gas price is" + String(mg_response.data));

  o.sendCommand("get_low_gas_price", " ");
  OWLCommand lg_response = o.awaitReply();
  o.sendCommand("println", "latest low gas price is" + String(lg_response.data));
  
  int block_number = bn_response.data.toInt();
  int hash_number = h_response.data.toInt();
  int unconfirmed_blocknumber = uc_response.data.toInt();
  int high_gas_price = hg_response.data.toInt();
  int medium_gas_price = mg_response.data.toInt();
  int low_gas_price = lg_response.data.toInt();

}
