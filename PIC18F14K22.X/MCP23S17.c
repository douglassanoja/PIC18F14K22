#ifndef MCP23S17_C
#define MCP23S17_C

#include "mcc_generated_files/mcc.h"
#include "MCP23S17.h"
#include "main.h"

void MCP23S17_Init()  // NOTE: This Fucntion can only be excuted once every power up.
{
     // Initial the MCP23S17 SPI I/O Expander
     MCP23S17_Write(SIOCON1,0x20);      // I/O Control Register: BANK=0, SEQOP=1, HAEN=0 (Disable Addressing)
     MCP23S17_Write(IODIRA,0x00);       // GPIOA As Output
     //MCP23S17_Write(IODIRA,0xFF);     // GPIOA As Input
     MCP23S17_Write(IODIRB,0x00);       // GPIOB As Output
     //MCP23S17_Write(IODIRB,0xFF);     // GPIOB As Input
     //MCP23S17_Write(GPPUA,0xFF);      // Enable Pull-up Resistor on GPIOA
     //MCP23S17_Write(GPPUB,0xFF);      // Enable Pull-up Resistor on GPIOB
     //need to have at least 80ms delay here in order to let below control have effect based on testing. 
     Wait_For_10ms(10);                 // We delay 100ms here
     MCP23S17_Write(GPIOA,0x00);        // Reset Output on GPIOA
     MCP23S17_Write(GPIOB,0x00);        // Reset Output on GPIOB
}

void MCP23S17_Write(unsigned char addr, unsigned char data)
{
    unsigned char send = 0x00;
    unsigned char rece = 0x00;
    //*--- Start SPI Communication ---//
    MCP23S17_SPI_Select();
    /* This is to initialize a Write process:
     * Transmit the 1st command: Initialize Write and
     * wait until data is received
     */
    send = SPI_SLAVE_ID | ((SPI_SLAVE_ADDR << 1) & 0x0E)| SPI_SLAVE_WRITE;
    rece = SPI_Exchange8bit(send);
    //rece = SPI_Exchange8bit(0x00);
    /* Start MCP23S17 Register Address transmission
     * Transmit the 2nd command: Send Address and
     * wait until data is received
     */
    send = addr;
    rece = SPI_Exchange8bit(send);
    //rece = SPI_Exchange8bit(0x00);
    /* Start MCP23S17 Register Data transmission
     * Transmit the 3rd command: Send Data and
     * wait until data is received 
     */
    send = data;
    rece = SPI_Exchange8bit(send);
    //rece = SPI_Exchange8bit(0x00);
    MCP23S17_SPI_Release();
}

unsigned char  MCP23S17_Read(unsigned char addr)
{
    unsigned char send = 0x00;
    unsigned char rece = 0x00;

    //*--- Start SPI Communication ---//
    MCP23S17_SPI_Select();
    /* This is to initialize a Read process:
     * Transmit the 1st command: Initialize Read and
     * wait until data is received
     */
    send = SPI_SLAVE_ID | ((SPI_SLAVE_ADDR << 1) & 0x0E)| SPI_SLAVE_READ;
    rece = SPI_Exchange8bit(send);
    /* Start MCP23S17 Register Address transmission
     * Transmit the 2nd command: Send Address and
     * wait until data is received
     */
    send = addr;
    rece = SPI_Exchange8bit(send);
    /* Start MCP23S17 Data Read transmission
     * Transmit the 3rd command: Send a Dummy and
     * wait until data is received
     */
    send = 0x00;
    rece = SPI_Exchange8bit(send);

    MCP23S17_SPI_Release();
    return(rece);
}

void MCP23S17_SPI_Select(void)
{
    SPI_CS_SetLow();
}

void MCP23S17_SPI_Release(void)
{
    SPI_CS_SetHigh();
}

#endif