#ifndef HardwareSerial_h
#define HardwareSerial_h

class HardwareSerial: public Stream{
	public:
		HardwareSerial(uint8_t uart_nr);
		void begin(unsigned long baud, uint32_t config = SERIAL_8N1, int8_t rxPin = -1, int8_t txPin = -1);
		int available(void);
		int read(void);
		size_t write(uint8_t);
	protected:
  		uint8_t _uart_nr;
};

#define Serial Serial0
extern HardwareSerial Serial0;
extern HardwareSerial Serial1;
extern HardwareSerial Serial2;

#endif  // HardwareSerial_h
