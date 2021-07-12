#if defined(SiniLink) && !defined(TestCode)
void MQTT_HandleMessages(const char *Topic, const char Message[MQTT_BUFFER_SIZE])
{
    if (strcmp(Topic, "/Power") == 0)
    {
        // MQTT_SendTELE(Topic, Topic);
        MQTT_SendNOTI("triggered", "Power!!!");
        if (strcmp(Message, "on") == 0)
            SiniLink_Relay(HIGH);
        if (strcmp(Message, "off") == 0)
            SiniLink_Relay(LOW);
        if (strcmp(Message, "toggle") == 0)
            SiniLink_Toggle();
        // SiniLink_Relay(!SiniLink_PWR_STATE);
    }
    else if (strcmp(Topic, "/LED01") == 0)
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
    else if (strcmp(Topic, "/LED02") == 0)
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

    else
    {
        DEBUG_Trouble("Dunno Whatcha want...");
        MQTT_SendNOTI("Error", "Dunno Whatcha want...");
    }
}
#endif
