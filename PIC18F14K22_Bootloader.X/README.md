# PIC18F14K22.X
Bootloader for PIC18F14K22.
<br>
For this Project:
* MPLAB v3.10

Note: Pin C6 will be the bootloader enable pin. When this pin is LOW upon reset, it will stay in bootloader mode. When this pin is high and application code is valid, the application code will run.