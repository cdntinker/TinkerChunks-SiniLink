// GPIO  4 = Button 1
// GPIO  5 = Relay 1
// GPIO 14 = LED 1
// GPIO 16 = LEDLINK

// bool TestState = LOW;

void SiniLink_test();

void SiniLink_init();

void SiniLink_Button();
void SiniLink_Relay(bool OnOff);
void SiniLink_Toggle();

void SiniLink_LED(bool OnOff);
void SiniLink_LINKLED(bool OnOff);

void MQTT_HandleMessages(const char *Topic, const char *Message);
