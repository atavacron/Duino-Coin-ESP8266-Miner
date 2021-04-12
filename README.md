# Duino-Coin-ESP8266-Miner

Here's my entire project directory for the miners that I use with my ESP-01 devices; minus the **wifi-manager.hpp** file which consists of: 

    #ifndef _WIFI_MANAGER_HPP__
    #define _WIFI_MANAGER_HPP__

    #define NETWORK_SSID    "YourNetwork_SSID"
    #define NETWORK_PWD     "YourNetwork_PWD"

    #define DOCU_USERNAME   "YourDUCO_UserName"

    #endif // _WIFI_MANAGER_HPP__

#Notes on Compiling:

I use Visual-Studio Code with Arduino extension for development. This repo includes my .vscode settings which will need to be changed to match your specific development environment.

Once the code is working the way I like, I then compile a "Final" version using the Arduino IDE. For some reason, VSC compilation doesn't seem to provide the same object-code as the Arduino IDE since the Arduino version of the code executes twice as fast. I'm assuming that it has to do with the compiler flags, which I thought were the same but evidently they are not...

In either case, I compile using the 160mhz compiler setting.

#Personal Hashrates:

Using my ESP-01 devices, I get the following hash-rates:

<table>
  <tr><th><b>Compiler</b></th><th><b>MHZ</b></th><th><b>Hash-Rate</b>/th></tr>
  <tr><td>VSC</td><td>80</td><td>3.2Kh/s</td></tr>
  <tr><td>VSC</td><td>160</td><td>6.2Kh/s</td></tr>
  <tr><td>Arduino IDE</td><td>80</td><td>4.6Kh/s</td></tr>
  <tr><td>Arduino IDE</td><td>160</td><td>9.2Kh/s</td></tr>
</table>
