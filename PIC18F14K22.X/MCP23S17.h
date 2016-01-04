#ifndef MCP23S17_H
#define MCP23S17_H

//------------------------------------------>
// Constans: Define MCP23S17 Registers
//------------------------------------------<
// MCP23S17 SPI Slave Device
#define SPI_SLAVE_ID    0x40
#define SPI_SLAVE_ADDR  0x00      // A2=0,A1=0,A0=0; these 3-bits need to be the same as the hardware setup.
#define SPI_SLAVE_WRITE 0x00
#define SPI_SLAVE_READ  0x01
// MCP23S17 Registers
#define SIOCON1      0x05   // Need to modify the BANK bit first.
#define SIOCON2      0x15
// MCP23S17 Registers
#define IODIRA      0x00
#define IODIRB      0x01
#define IPOLA       0x02
#define IPOLB       0x03
#define GPINTENA    0x04
#define GPINTENB    0x05
#define DEFVALA     0x06
#define DEFVALB     0x07
#define INTCONA     0x08
#define INTCONB     0x09
#define IOCON1      0x0A
#define IOCON2      0x0B
#define GPPUA       0x0C
#define GPPUB       0x0D
#define INTFA       0x0E
#define INTFB       0x0F
#define INTCAPA     0x10
#define INTCAPB     0x11
#define GPIOA       0x12
#define GPIOB       0x13
#define OLATA       0x14
#define OLATB       0x15


void MCP23S17_Init(void);
void MCP23S17_Write(unsigned char addr, unsigned char data);
unsigned char MCP23S17_Read(unsigned char addr);
void MCP23S17_SPI_Select(void);
void MCP23S17_SPI_Release(void);
        
#endif