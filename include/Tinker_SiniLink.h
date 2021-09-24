
#ifndef SmartSwitch_DEFINES
#define SmartSwitch_DEFINES
  #define SmartSwitch_BUTTN 4  // Button 1 - The button
  #define SmartSwitch_POWER 5  // Relay 1  - The Relay + red LED
  #define SmartSwitch_LED01 14 // LED 1    - Green LED
  #define SmartSwitch_LNKLD 16 // LEDLINK  - Blue LED
#endif // SmartSwitch_DEFINES

// #ifndef SonoffBasic_DEFINES
// #define SonoffBasic_DEFINES
//   #define SonoffBasic_BUTTN 0  // Button 1 - The button
//   #define SonoffBasic_POWER 12 // Relay 1  - The Relay
//   #define SonoffBasic_LED01 13 // LED 1    - Green LED (inverted)
// #endif // SonoffBasic_DEFINES

// bool TestState = LOW;

void SmartSwitch_test();

void SmartSwitch_init();

void SmartSwitch_Button();
void SmartSwitch_Relay(bool OnOff);
void SmartSwitch_Toggle();

void SmartSwitch_LED(bool OnOff);
void SmartSwitch_LINKLED(bool OnOff);

void MQTT_HandleMessages(const char *Topic, const char *Message);
