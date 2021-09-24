
#ifndef SmartSwitch_DEFINES
#define SmartSwitch_DEFINES
  #ifndef SmartSwitch_BUTTN
    #define SmartSwitch_BUTTN 4  // Button 1 - The button
  #endif
  #ifndef SmartSwitch_POWER
    #define SmartSwitch_POWER 5  // Relay 1  - The Relay + red LED
  #endif
  #ifndef SmartSwitch_LED01
    #define SmartSwitch_LED01 14 // LED 1    - Green LED
  #endif
  #ifndef SmartSwitch_LNKLD
    #define SmartSwitch_LNKLD 16 // LEDLINK  - Blue LED
  #endif
#endif // SmartSwitch_DEFINES

// bool TestState = LOW;

void SmartSwitch_test();

void SmartSwitch_init();

void SmartSwitch_Button();
void SmartSwitch_Relay(bool OnOff);
void SmartSwitch_Toggle();

void SmartSwitch_LED(bool OnOff);
void SmartSwitch_LINKLED(bool OnOff);

void MQTT_HandleMessages(const char *Topic, const char *Message);
