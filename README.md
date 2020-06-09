# UART_RaspberryPi_Arduino-UNO
UART communication between a Raspberry Pi and Arduino UNO using WiringPi library

## Install WritingPi
____________________________

##### sudo apt-get update && sudo apt-get upgrade
Now we need git:


##### sudo apt-get install git git-core

Now we need git: Now WiringPi can be downloaded and installed:

##### git clone git://git.drogon.net/wiringPi
##### cd wiringPi
##### ./build

That’s it. To later upgrade to a newer version you can type the following command in that folder:
##### git pull origin
##### ./build
and the latest version is installed.
____________________________________
### First you should link raspberry pi's Tx to Arduino Rx and also raspberry pi's Rx to Arduino Tx and then establish a common ground

![Capture](https://user-images.githubusercontent.com/63366676/84160218-d4fd2480-aa65-11ea-8d8b-f2347e535877.PNG)

