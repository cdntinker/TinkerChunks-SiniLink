
#ifndef SmartSwitch_DEFINES
#define SmartSwitch_DEFINES
  #ifndef SmartSwitch_BUTTN01
    #define SmartSwitch_BUTTN01 4  // Button 1 - The button
  #endif
  #ifndef SmartSwitch_RELAY01
    #define SmartSwitch_RELAY01 5  // Relay 1  - The Relay + red LED
  #endif
  #ifndef SmartSwitch_RELAY02
    #define SmartSwitch_RELAY02 5  // Relay 1  - The Relay + red LED
  #endif
  #ifndef SmartSwitch_LED01
    #define SmartSwitch_LED01 14 // LED 1    - Green LED
  #endif
  #ifndef SmartSwitch_LED02
    #define SmartSwitch_LED02 16 // LEDLINK  - Blue LED
  #endif
#endif // SmartSwitch_DEFINES

void SmartSwitch_init();

void SmartSwitch_Button();
void SmartSwitch_Relay(int RelayNum, bool OnOff);
void SmartSwitch_Toggle(int RelayNum);

void SmartSwitch_LED(bool OnOff);
void SmartSwitch_LINKLED(bool OnOff);

void MQTT_HandleMessages(const char *Topic, const char *Message);
