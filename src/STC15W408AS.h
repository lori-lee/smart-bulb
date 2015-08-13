#if !defined __STC15W408AS_H__
#define __STC15W408AS_H__
//IE2 (Interruption Enable Register 2)
sfr IE2 = 0xAF;

//sbit ET4 = IE2 ^ 6;
//sbit ET3 = IE2 ^ 5;
//sbit ES4 = IE2 ^ 4;
//sbit ES3 = IE2 ^ 3;
//sbit ET2 = IE2 ^ 2;
//sbit ESPI= IE2 ^ 1;
//sbit ES2 = IE2 ^ 0;

//IP2 (Interruption Priority Register 2)
sfr IP2 = 0xB5;

//sbit PX4    = IP2 ^ 4;
//sbit PPWMFD = IP2 ^ 3;
//sbit PPWM   = IP2 ^ 2;
//sbit PSPI   = IP2 ^ 1;
//sbit PS2    = IP2 ^ 0;

//S2CON (Serial Port Control Register 2)
sfr S2CON = 0x9A;

//sbit S2SM0 = S2CON ^ 7;
//sbit S2SM2 = S2CON ^ 5;
//sbit S2REN = S2CON ^ 4;
//sbit S2TB8 = S2CON ^ 3;
//sbit S2RB8 = S2CON ^ 2;
//sbit S2TI  = S2CON ^ 1;
//sbit S2RI  = S2CON ^ 0;


//S3COn (Serial UART3 Control Register)
sfr S3CON = 0xAC;

//sbit S3SM0 = S3CON ^ 7;
//sbit S3ST3 = S3CON ^ 6;
//sbit S3SM2 = S3CON ^ 5;
//sbit S3REN = S3CON ^ 4;
//sbit S3TB8 = S3CON ^ 3;
//sbit S3RB8 = S3CON ^ 2;
//sbit S3TI  = S3CON ^ 1;
//sbit S3RI  = S3CON ^ 0;


//S4COn (Serial UART4 Control Register)
sfr S4CON = 0xAC;

//sbit S4SM0 = S4CON ^ 7;
//sbit S4ST3 = S4CON ^ 6;
//sbit S4SM2 = S4CON ^ 5;
//sbit S4REN = S4CON ^ 4;
//sbit S4TB8 = S4CON ^ 3;
//sbit S4RB8 = S4CON ^ 2;
//sbit S4TI  = S4CON ^ 1;
//sbit S4RI  = S4CON ^ 0;


//ADC_CONTR (ADC Control Register)
sfr ADC_CONTR = 0xBC;

//sbit ADC_POWER= ADC_CONTR ^ 7;
//sbit SPEED1   = ADC_CONTR ^ 6;
//sbit SPEED0   = ADC_CONTR ^ 5;
//sbit ADC_FLAG = ADC_CONTR ^ 4;
//sbit ADC_START= ADC_CONTR ^ 3;
//sbit CHS2     = ADC_CONTR ^ 2;
//sbit CHS1     = ADC_CONTR ^ 1;
//sbit CHIS0    = ADC_CONTR ^ 0;

//AUXR (Auxiliary Register)
sfr AUXR = 0x8E;

//sbit T0x12 = AUXR ^ 7;
//sbit T1x12 = AUXR ^ 6;
//sbit UART_M0x6 = AUXR ^ 5;
//sbit T2R   = AUXR ^ 4;
//sbit T2xCT = AUXR ^ 3;
//sbit T2x12 = AUXR ^ 2;
//sbit EXTRAM= AUXR ^ 1;
//sbit S1ST2 = AUXR ^ 0;


//EEPROM/Flash Related
sfr IAP_DATA = 0xC2;
sfr IAP_ADDRH= 0xC3;
sfr IAP_ADDRL= 0xC4;
sfr IAP_CMD  = 0xC5;
sfr IAP_TRIG = 0xC6;
sfr IAP_CONTR= 0xC7;
//WDT (Watch Dog Control Register)
sfr WDT_CONTR = 0xC1;

#endif
