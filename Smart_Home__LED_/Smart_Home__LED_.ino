#define BLYNK_PRINT Serial // digunakan untuk monitor blynk di serial

#include <ESP8266WiFi.h> /* untuk modul wifi */
#include <BlynkSimpleEsp8266.h> /* file untuk blynk */


char auth[] = "8p9S_efXdrc-pwpTMd0IOUaK3eqdRO3c"; /* token yang dikirim dari blynk ke email masing2 */
char ssid[] = "Dhanu";
char pass[] = "masalupa";

void setup()
{
  // Debug console
  Serial.begin(9600); /* untuk monitor di serial print */

  Blynk.begin(auth, ssid, pass); /* menjalankan blynk sesuai token,wifi, dan passwordnya. */
 
}

void loop() /* fungsi utama dijalankan berulang kali */
{
  Blynk.run(); /* perintah untuk menjalankan blynk */
}
