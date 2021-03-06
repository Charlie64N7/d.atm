# d.atm
'd.atm' is an IoT project that interacts with the Ethereum Mainnet.


<br>
<br>
<br>


Code Base

d.atm is an Arduino prototype that uses a livedata ruby server connected via pc to query blockchain information via a lcd interface.   


<br>
<br>
<br>


Configuration

1. Once d.atm is fully assembled, establish connection from an available usb port on your pc into the d.atm port. This is located on the rear side of d.atm. 

 2. Unzip the contents from the github respository. Move the folder OWL to “documents/Arduino/Libraries”.

3. Using the Arduino IDE, open “/datm/datm.ino” file. Then go to “Tools/Board” and make sure “Arduino Uno” is selected. In “Tools/Port” select the port that says “(Arduino Uno)”. Lastly, click “Upload” to run the code onto d.atm. Now, whenever plugged in, this .ino file will be running. 

 4. https://accounts.blockcypher.com/tokens.
Follow the link and create an API token. Copy this code. 

5. Create a new terminal tab (mac) or Powershell (windows). Then open “OWL_SERVER/ethereum_server.rb” in your prefered text editor. Go to line 10 and replace “yourtoken” with your code you copied earlier, then save. 

6. Type “ruby” followed by a space in your terminal window and drag the ethereum server from your text editor into the terminal. Execute the code by pressing the “return” key (“enter” on windows). 


<br>
<br>
<br>


Demo

 https://youtu.be/iYKEeWNK3mE - Ruby Server demo. You may notice that the arduino code is different. This was because of quick testing purposes. The server requests were made autonomosly instead of through the d.atm interface. 

You are now ready to use d.atm. If there are any issues please contact me via charleslgdesigns@gmail.com


<br>
<br>
<br>


User interface

https://www.tinkercad.com/things/5uQPr3lYk0Z-datm Interactive Tinkercad demo

https://youtu.be/dLzMCHl_nEI - Tinkercad demo.


<br>
<br>
<br>


To navigated through the menu, use the left (<) and right button (>). Press select to get live data from the following parameters, this is done through a http get request through the ruby server when you press the button. 


 1. Block Number:
Current height of the blockchain.


 2. Hash:
The hash of the latest confirmed block in the blockchain


3. Unconfirmed Transactions:
Number of unconfirmed transactions in memory pool (likely to be included in next block).


4. High Gas Price:
A rolling average of the gas price (in wei) for transactions to be confirmed within 1 to 2 blocks.


 5. Mid Gas Price:
A rolling average of the gas price (in wei) for transactions to be confirmed within 3 to 6 blocks.


6. Low Gas Price:
A rolling average of the gas price (in wei) for transactions to be confirmed in 7 or more blocks.


<br>
<br>
<br>


Enjoy your time using d.atm. If you feel like there are improvements/variants that could be made in the code, please fork the github repository.
 

<br>
<br>
<br>

