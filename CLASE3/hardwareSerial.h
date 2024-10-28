#ifndef HardwareSerial_h
#define HardwareSerial_h

class HardwareSerial: public Stream
{
public:
    HardwareSerial(int uart_nr);

    void begin(unsigned long baud, uint32_t config=SERIAL_8N1, int8_t rxPin=-1, int8_t txPin=-1, bool invert=false, unsigned long timeout_ms = 20000UL);
    int available(void);
    int read(void);
    size_t read(uint8_t *buffer, size_t size);
    inline size_t read(char * buffer, size_t size)
    {
        return read((uint8_t*) buffer, size);
    }
    size_t write(uint8_t);
    size_t write(const uint8_t *buffer, size_t size);
protected:
    int _uart_nr;
    uart_t* _uart;
    uint8_t _tx_pin;
    uint8_t _rx_pin;
};

extern HardwareSerial Serial;
extern HardwareSerial Serial1;
extern HardwareSerial Serial2;
#endif

#endif // HardwareSerial_h
