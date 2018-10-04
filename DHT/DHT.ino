#include <dht.h>
//config
#define dataPin D1
#define dataPin D2
#define dataPin D3
#define dataPin D4
#define dataPin D5
//*********************************************************************************

dht DHT; // Creats a DHT object
void setup() {
  Serial.begin(115200);
}
void loop() {
#ifdef dataPin
    int readData = DHT.read11(dataPin); // Reads the data from the sensor
  float t = DHT.temperature; // Gets the values of the temperature
  float h = DHT.humidity; // Gets the values of the humidity
  
  // Printing the results on the serial monitor
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print("    Humidity = ");
  Serial.print(h);
  Serial.println(" % ");
  
  delay(1000); // Delays 2 secods, as the DHT22 sampling rate is 0.5Hz
#endif
#ifdef dataPin
    int readData = DHT.read11(dataPin); // Reads the data from the sensor
  float t = DHT.temperature; // Gets the values of the temperature
  float h = DHT.humidity; // Gets the values of the humidity
  
  // Printing the results on the serial monitor
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print("    Humidity = ");
  Serial.print(h);
  Serial.println(" % ");
  
  delay(1000); // Delays 2 secods, as the DHT22 sampling rate is 0.5Hz
#endif
#ifdef dataPin
    int readData = DHT.read11(dataPin); // Reads the data from the sensor
  float t = DHT.temperature; // Gets the values of the temperature
  float h = DHT.humidity; // Gets the values of the humidity
  
  // Printing the results on the serial monitor
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print("    Humidity = ");
  Serial.print(h);
  Serial.println(" % ");
  
  delay(1000); // Delays 2 secods, as the DHT22 sampling rate is 0.5Hz
#endif
#ifdef dataPin
    int readData = DHT.read11(dataPin); // Reads the data from the sensor
  float t = DHT.temperature; // Gets the values of the temperature
  float h = DHT.humidity; // Gets the values of the humidity
  
  // Printing the results on the serial monitor
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print("    Humidity = ");
  Serial.print(h);
  Serial.println(" % ");
  
  delay(1000); // Delays 2 secods, as the DHT22 sampling rate is 0.5Hz
#endif
#ifdef dataPin
    int readData = DHT.read11(dataPin); // Reads the data from the sensor
  float t = DHT.temperature; // Gets the values of the temperature
  float h = DHT.humidity; // Gets the values of the humidity
  
  // Printing the results on the serial monitor
  Serial.print("Temperature = ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print("    Humidity = ");
  Serial.print(h);
  Serial.println(" % ");
  
  delay(1000); // Delays 2 secods, as the DHT22 sampling rate is 0.5Hz
#endif

}
