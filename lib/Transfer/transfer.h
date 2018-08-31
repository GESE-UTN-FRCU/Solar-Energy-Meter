#ifndef TRANSFER_H
#define TRANSFER_H

#include <Arduino.h> //Permite utilizar los comandos de Arduino

#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>


 
class Transfer //Definicion de la clase
{

    public:
        Transfer(bool debug);

        void setup();

        void loop();

        bool sendData(JsonObject &root);

        bool wifiConnected();


    private:
        // const char* WIFI_SSID = "FiberCorp WiFi533 2.4GHz";
        // const char* WIFI_PASS = "0103061510";
        const char* WIFI_SSID = "MiViejaMula";
        const char* WIFI_PASS = "viejamula";
        const char* ENDPOINT = "http://10.42.0.1:3000/";

        bool _debug;

        char buffer[100];

        
    
 };
 
#endif