/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB® Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25.2
        Device            :  PIC18F14K22
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 */

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SPI_CS aliases
#define SPI_CS_TRIS               TRISA0
#define SPI_CS_LAT                LATA0
#define SPI_CS_PORT               PORTAbits.RA0
#define SPI_CS_WPU                WPUA0
#define SPI_CS_ANS                ANS0
#define SPI_CS_SetHigh()    do { LATA0 = 1; } while(0)
#define SPI_CS_SetLow()   do { LATA0 = 0; } while(0)
#define SPI_CS_Toggle()   do { LATA0 = ~LATA0; } while(0)
#define SPI_CS_GetValue()         PORTAbits.RA0
#define SPI_CS_SetDigitalInput()    do { TRISA0 = 1; } while(0)
#define SPI_CS_SetDigitalOutput()   do { TRISA0 = 0; } while(0)

#define SPI_CS_SetPullup()    do { WPUA0 = 1; } while(0)
#define SPI_CS_ResetPullup()   do { WPUA0 = 0; } while(0)
#define SPI_CS_SetAnalogMode()   do { ANS0 = 1; } while(0)
#define SPI_CS_SetDigitalMode()   do { ANS0 = 0; } while(0)
// get/set SDI aliases
#define SDI_TRIS               TRISB4
#define SDI_LAT                LATB4
#define SDI_PORT               PORTBbits.RB4
#define SDI_WPU                WPUB4
#define SDI_ANS                ANS10
#define SDI_SetHigh()    do { LATB4 = 1; } while(0)
#define SDI_SetLow()   do { LATB4 = 0; } while(0)
#define SDI_Toggle()   do { LATB4 = ~LATB4; } while(0)
#define SDI_GetValue()         PORTBbits.RB4
#define SDI_SetDigitalInput()    do { TRISB4 = 1; } while(0)
#define SDI_SetDigitalOutput()   do { TRISB4 = 0; } while(0)

#define SDI_SetPullup()    do { WPUB4 = 1; } while(0)
#define SDI_ResetPullup()   do { WPUB4 = 0; } while(0)
#define SDI_SetAnalogMode()   do { ANS10 = 1; } while(0)
#define SDI_SetDigitalMode()   do { ANS10 = 0; } while(0)
// get/set RX aliases
#define RX_TRIS               TRISB5
#define RX_LAT                LATB5
#define RX_PORT               PORTBbits.RB5
#define RX_WPU                WPUB5
#define RX_ANS                ANS11
#define RX_SetHigh()    do { LATB5 = 1; } while(0)
#define RX_SetLow()   do { LATB5 = 0; } while(0)
#define RX_Toggle()   do { LATB5 = ~LATB5; } while(0)
#define RX_GetValue()         PORTBbits.RB5
#define RX_SetDigitalInput()    do { TRISB5 = 1; } while(0)
#define RX_SetDigitalOutput()   do { TRISB5 = 0; } while(0)

#define RX_SetPullup()    do { WPUB5 = 1; } while(0)
#define RX_ResetPullup()   do { WPUB5 = 0; } while(0)
#define RX_SetAnalogMode()   do { ANS11 = 1; } while(0)
#define RX_SetDigitalMode()   do { ANS11 = 0; } while(0)
// get/set SCK aliases
#define SCK_TRIS               TRISB6
#define SCK_LAT                LATB6
#define SCK_PORT               PORTBbits.RB6
#define SCK_WPU                WPUB6
#define SCK_SetHigh()    do { LATB6 = 1; } while(0)
#define SCK_SetLow()   do { LATB6 = 0; } while(0)
#define SCK_Toggle()   do { LATB6 = ~LATB6; } while(0)
#define SCK_GetValue()         PORTBbits.RB6
#define SCK_SetDigitalInput()    do { TRISB6 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISB6 = 0; } while(0)

#define SCK_SetPullup()    do { WPUB6 = 1; } while(0)
#define SCK_ResetPullup()   do { WPUB6 = 0; } while(0)
// get/set TX aliases
#define TX_TRIS               TRISB7
#define TX_LAT                LATB7
#define TX_PORT               PORTBbits.RB7
#define TX_WPU                WPUB7
#define TX_SetHigh()    do { LATB7 = 1; } while(0)
#define TX_SetLow()   do { LATB7 = 0; } while(0)
#define TX_Toggle()   do { LATB7 = ~LATB7; } while(0)
#define TX_GetValue()         PORTBbits.RB7
#define TX_SetDigitalInput()    do { TRISB7 = 1; } while(0)
#define TX_SetDigitalOutput()   do { TRISB7 = 0; } while(0)

#define TX_SetPullup()    do { WPUB7 = 1; } while(0)
#define TX_ResetPullup()   do { WPUB7 = 0; } while(0)
// get/set USER_LED aliases
#define USER_LED_TRIS               TRISC5
#define USER_LED_LAT                LATC5
#define USER_LED_PORT               PORTCbits.RC5
#define USER_LED_SetHigh()    do { LATC5 = 1; } while(0)
#define USER_LED_SetLow()   do { LATC5 = 0; } while(0)
#define USER_LED_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define USER_LED_GetValue()         PORTCbits.RC5
#define USER_LED_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define USER_LED_SetDigitalOutput()   do { TRISC5 = 0; } while(0)

// get/set SDO aliases
#define SDO_TRIS               TRISC7
#define SDO_LAT                LATC7
#define SDO_PORT               PORTCbits.RC7
#define SDO_ANS                ANS9
#define SDO_SetHigh()    do { LATC7 = 1; } while(0)
#define SDO_SetLow()   do { LATC7 = 0; } while(0)
#define SDO_Toggle()   do { LATC7 = ~LATC7; } while(0)
#define SDO_GetValue()         PORTCbits.RC7
#define SDO_SetDigitalInput()    do { TRISC7 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISC7 = 0; } while(0)

#define SDO_SetAnalogMode()   do { ANS9 = 1; } while(0)
#define SDO_SetDigitalMode()   do { ANS9 = 0; } while(0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
 */