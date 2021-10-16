# d.atm
'd.atm' is an IoT project that interacts with the Ethereum Mainnet.

<b>Code Base<b> 

d.atm is an Arduino prototype that uses a livedata ruby server connected via pc to query blockchain information via a lcd interface.    

<b>Configuration<b>

1. Once <b>d.atm<b/> is fully assembled, establish connection from an available usb port on your pc into the d.atm port. This is located on the rear side of <b>d.atm.</b> 

 2. Unzip the contents from the github respository. Move the folder OWL to “documents/Arduino/Libraries”.

3. Using the Arduino IDE, open <b>“/datm/datm.ino”</b> file. Then go to <b>“Tools/Board”</> and make sure <b>“Arduino Uno”</b> is selected. In <b>“Tools/Port”</b> select the port that says “(Arduino Uno)”. Lastly, click “Upload” to run the code onto d.atm. Now, whenever plugged in, this .ino file will be running. 

 4. <b>https://accounts.blockcypher.com/tokens.</b>
Follow the link and create an API token. Copy this code. 

5. Create a new terminal tab (mac) or Powershell (windows). Then open <b>“OWL_SERVER/ethereum_server.rb”</b> in your prefered text editor. Go to line 10 and replace “yourtoken” with your code you copied earlier, then save. 

6. Type <b>“ruby”</b> followed by a space in your terminal window and drag the ethereum server from your text editor into the terminal. Execute the code by pressing the “return” key (<b>“enter”<b/> on windows). 

 <b>https://youtu.be/iYKEeWNK3mE</b> - Link to a demo of the ruby server. You may notice that the arduino code is different. This was because of quick testing purposes. The server requests were made autonomosly instead of through the <b>d.atm<b/> interface. 

You are now ready to use d.atm. If there are any issues please contact me via <b>charleslgdesigns@gmail.com</b>

<b>User interface</b>

To navigated through the menu, use the left (<) and right button (>). Press select to get live data from the following parameters, this is done through a http get request through the ruby server when you press the button. 

 <b>1. Block Number:</b> 
Current height of the blockchain.

 <b>2. Hash:</b>
The hash of the latest confirmed block in the blockchain

<b>3. Unconfirmed Transactions:<b/>
Number of unconfirmed transactions in memory pool (likely to be included in next block).

<b>4. High Gas Price:<b/>
A rolling average of the gas price (in wei) for transactions to be confirmed within 1 to 2 blocks.

 <b>5. Mid Gas Price:</b>
A rolling average of the gas price (in wei) for transactions to be confirmed within 3 to 6 blocks.

6. Low Gas Price:
A rolling average of the gas price (in wei) for transactions to be confirmed in 7 or more blocks.

Enjoy your time using d.atm. If you feel like there are improvements that could be made in the code, please fork the github repository.
 



