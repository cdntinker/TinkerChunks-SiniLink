
#ifndef SiniLink_DEFINES
#define SiniLink_DEFINES

#define SiniLink_BUTTN 4  // Button 1 - The button
#define SiniLink_POWER 5  // Relay 1  - Switch the connections + red LED
#define SiniLink_LED01 14 // LED 1    - Green LED
#define SiniLink_LNKLD 16 // LEDLINK  - Blue LED

#endif // SiniLink_DEFINES

// bool TestState = LOW;

void SiniLink_test();

void SiniLink_init();

void SiniLink_Button();
void SiniLink_Relay(bool OnOff);
void SiniLink_Toggle();

void SiniLink_LED(bool OnOff);
void SiniLink_LINKLED(bool OnOff);

void MQTT_HandleMessages(const char *Topic, const char *Message);
