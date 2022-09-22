# mFbCommandTouchDeck


Based FreeTouchDeck https://www.hackster.io/dustinwattsutrecht/freetouchdeck-an-bluetooth-esp32-tft-touch-macro-keypad-4c9bbd and modified to use useractions to send commands to command line 



FreeTouchDeck User Guide
The User Guide will help you with installing and configuring if you want to build the project yourself: [User guide](https://github.com/DustinWatts/FreeTouchDeck/wiki)


!- Library Dependencies -!
- Adafruit-GFX-Library (tested with version 1.10.4), available through Library Manager
- TFT_eSPI (tested with version 2.3.70), available through Library Manager
- ESP32-BLE-Keyboard (latest version) download from: https://github.com/T-vK/ESP32-BLE-Keyboard
- ESPAsyncWebserver (latest version) download from: https://github.com/me-no-dev/ESPAsyncWebServer
- AsyncTCP (latest version) download from: https://github.com/me-no-dev/AsyncTCP
- ArduinoJson (tested with version 6.17.3), available through Library Manager

# will need to to set up  ESp32 Sketch Data Upload.

have only been able to get the arduino ide working and used this link.

https://randomnerdtutorials.com/install-esp32-filesystem-uploader-arduino-ide/




UserActions.h file where user actions are defined
Action.h   modify case structure to have a case for max defined useractions
data/index.htm to use configuration web page - modify subitems array to have entry defined useraction


