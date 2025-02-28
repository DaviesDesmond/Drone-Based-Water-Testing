#include <SPI.h>
#include <SD.h>

class LogData{
  public:
    //constructor for LogData with generic pinout
    //this should be run in setup
    LogData(int CSpin = 10, int MOSIpin = 11, int MISOpin = 12, int SCKpin = 13);

  private:
    int m_CSpin;
    int m_MOSIpin;
    int m_MISOpin;
    int m_SCKpin;
    File SDDataLog;

};



LogData::LogData(int CSpin = 10, int MOSIpin = 11, int MISOpin = 12, int SCKpin = 13)
{
  /*
    @param CSpin - SPI Chip Select pin for SD card
    @param MOSIpin - SPI MOSI (main out sub in) pin for SD card
    @param MISOpin - SPI MISO (main in sub out) pin for SD card
    @param SCKpin - SPI Clock pin used by SD card
    
    
    @brief - basic constructor for data loging. If initiated without arguments should still work
  */

  m_CSpin = CSpin;
  m_MOSIpin = MOSIpin;
  m_MISOpin = MISOpin;
  m_SCKpin = SCKpin;

};


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
