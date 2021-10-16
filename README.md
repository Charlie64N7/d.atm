# d.atm
'd.atm' is an IoT project that interacts with the Ethereum Mainnet. 

Configuration

1. Once d.atm is fully assembled, establish connection from an available usb port on your pc into the d.atm port. This is located on the rear side of d.atm. 

2. Unzip the contents from the github respository. Move the folder “OWL” to “documents/Arduino/Libraries”.

3. Using the Arduino IDE, open “/datm/datm.ino” file. Then go to “Tools/Board” and make sure “Arduino Uno” is selected. In “Tools/Port” select the port that says “(Arduino Uno)”. Lastly, click “Upload” to run the code onto d.atm. Now, whenever plugged in, this .ino file will be running. 

4. https://accounts.blockcypher.com/tokens. 
Follow the link and create an API token. Copy this code. 

5. Create a new terminal tab (mac) or Powershell (windows). Then open “OWL_SERVER/ethereum_server.rb” in your prefered text editor. Go to line 10 and replace “yourtoken” with your code you copied earlier, then save. 

6. Type “ruby” followed by a space in your terminal window and drag the ethereum server from your text editor into the terminal. Execute the code by pressing the “return” key (“enter” on windows). 

https://youtu.be/iYKEeWNK3mE - Link to a demo of the ruby server. You may notice that the arduino code is different. This was because of quick testing purposes. The server requests were made autonomosly instead of through the d.atm interface. 


You are now ready to use d.atm. If there are any issues please contact me via charleslgdesigns@gmail.com



