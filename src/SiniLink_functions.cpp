#include <Arduino.h>

#include "Tinker_SiniLink.h"
// #include "Tinker_MQTT.h"
#define MQTT_BUFFER_SIZE (100)       // This number is arbitrary

void MQTT_SendSTAT(const char *Topic, const char *Message);
void MQTT_SendNOTI(const char *Topic, const char *Message);
void MQTT_SendTELE(const char *Topic, const char *Message);
#include "Tinker_DEBUG.h"

#define SiniLink_BUTTN 4  // The button
#define SiniLink_POWER 5  // Switch the connections + red LED
#define SiniLink_LED01 14 // Green LED
#define SiniLink_LNKLD 16 // Blue LED

// void SiniLink_test()
// {
//     if (TestState)
//         TestState = LOW;
//     else
//         TestState = HIGH;
//     // SiniLink_LED(TestState);
//     // SiniLink_LINKLED(TestState);
//     SiniLink_Relay(TestState);
// }

void SiniLink_init()
{
    DEBUG_Init("SiniLink");

    pinMode(SiniLink_POWER, OUTPUT);
    pinMode(SiniLink_LED01, OUTPUT);
    pinMode(SiniLink_LNKLD, OUTPUT);
}

bool SiniLink_PWR_STATE;
bool SiniLink_LED01_STATE;
bool SiniLink_LED02_STATE;

void SiniLink_MQTT(char* Topic, char Message[MQTT_BUFFER_SIZE])
{
            // MQTT_SendNOTI(Topic, Message);
            // Serial.print("-=[");
            // Serial.print(Topic);
            // Serial.println("]=-");
            // Serial.print("-=[");
            // Serial.print(Message);
            // Serial.println("]=-");

    if (strcmp(Topic, "Power") == 0)
    {
            // MQTT_SendTELE(Topic, Topic);
            MQTT_SendNOTI("triggered", "Power!!!");
        if (strcmp(Message, "on") == 0)
            SiniLink_Relay(HIGH);
        if (strcmp(Message, "off") == 0)
            SiniLink_Relay(LOW);
        if (strcmp(Message, "toggle") == 0)
            SiniLink_Relay(!SiniLink_PWR_STATE);
    }
    else if (strcmp(Topic, "LED01") == 0)
    {
            // MQTT_SendTELE(Topic, Topic);
            MQTT_SendNOTI("triggered", "LED01!!!");
        if (strcmp(Message, "on") == 0)
            SiniLink_LED(HIGH);
        if (strcmp(Message, "off") == 0)
            SiniLink_LED(LOW);
        if (strcmp(Message, "toggle") == 0)
            SiniLink_LED(!SiniLink_LED01_STATE);
    }
    else if (strcmp(Topic, "LED02") == 0)
    {
            // MQTT_SendTELE(Topic, Topic);
            MQTT_SendNOTI("triggered", "LED02!!!");
        if (strcmp(Message, "on") == 0)
            SiniLink_LINKLED(HIGH);
        if (strcmp(Message, "off") == 0)
            SiniLink_LINKLED(LOW);
        if (strcmp(Message, "toggle") == 0)
            SiniLink_LINKLED(!SiniLink_LED02_STATE);
    }
}

// Detect button press
void SiniLink_Button()
{
}

// Turn relay on/off
void SiniLink_Relay(bool OnOff)
{
    if (OnOff)
    {
        DEBUG_LineOut("Relay ON");
        digitalWrite(SiniLink_POWER, HIGH);
        SiniLink_PWR_STATE = HIGH;
        MQTT_SendSTAT("Power", "ON");
    }
    else
    {
        DEBUG_LineOut("Relay OFF");
        digitalWrite(SiniLink_POWER, LOW);
        SiniLink_PWR_STATE = LOW;
        MQTT_SendSTAT("Power", "OFF");
    }
}

// Turn LED on/off
void SiniLink_LED(bool OnOff)
{
    if (OnOff)
    {
        DEBUG_LineOut("LED ON");
        digitalWrite(SiniLink_LED01, HIGH);
        SiniLink_LED01_STATE = HIGH;
        MQTT_SendSTAT("LED01", "ON");
    }
    else
    {
        DEBUG_LineOut("LED OFF");
        digitalWrite(SiniLink_LED01, LOW);
        SiniLink_LED01_STATE = LOW;
        MQTT_SendSTAT("LED01", "OFF");
    }
}

// Turn Link LED on/off
void SiniLink_LINKLED(bool OnOff)
{
    if (OnOff)
    {
        DEBUG_LineOut("Link LED ON");
        digitalWrite(SiniLink_LNKLD, HIGH);
        SiniLink_LED02_STATE = HIGH;
        MQTT_SendSTAT("LED02", "ON");
    }
    else
    {
        DEBUG_LineOut("Link LED OFF");
        digitalWrite(SiniLink_LNKLD, LOW);
        SiniLink_LED02_STATE = LOW;
        MQTT_SendSTAT("LED02", "OFF");
    }
}
