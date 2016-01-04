# PIC18F14K22.X
PIC18F14K22 with uart bootloader.
<br>
For this Project:
* MPLAB v3.10
* XC8 v1.35
* MPLAB® Code Configurator (MCC) v2.25.2

Note: Pin C6 will be the bootloader enable pin. When this pin is LOW upon reset, it will stay in bootloader mode. When this pin is high and application code is valid, the application code will run.