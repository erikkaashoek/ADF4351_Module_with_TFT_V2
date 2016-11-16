#ifndef __USER_CONF_H

#define __USER_CONF_H
//*****************************************************************************
#ifndef uchar
#define uchar unsigned char 
#endif

#ifndef schar
#define schar signed char 
#endif

#ifndef uint
#define uint unsigned int 
#endif

#ifndef sint
#define sint signed int 
#endif



/*����������*/
void Chip_Init(void);
void USART1_Putc(unsigned char c);
void USART1_Puts(char * str);

void LCD_DrawPoint(unsigned int x,unsigned int y);
void LCD_Fill(unsigned int xsta,unsigned int ysta,unsigned int xend,unsigned int yend,unsigned int color);
void LCD_DrawPoint_big(unsigned int x,unsigned int y);
void LCD_DrawLine(unsigned int x1, unsigned int y1, unsigned int x2, unsigned int y2);
void GUIsquare2pix(unsigned int x0,unsigned int y0,unsigned int x1,unsigned int y1,unsigned int full_colour);

void drawpoint(unsigned int x,unsigned int y,unsigned int color); 
void Print_Decimal(unsigned char i,unsigned int buffer);
void Display_Coordinate(int x,unsigned int y,unsigned int color);
void Con_Coordinate(int x,unsigned int y,unsigned int color);
void Drow_Touch_Point(unsigned char x,unsigned int y);			   
void Draw_Big_Point(unsigned char x,unsigned int y);


/*IO����*/
/*2.8��TFT�������ӿڶ���*/
#define  RS_CLR	        GPIO_ResetBits(GPIOC, GPIO_Pin_12)   //RS�õ�
#define  RS_SET	        GPIO_SetBits(GPIOC, GPIO_Pin_12)     //RS�ø�
#define  RW_CLR	        GPIO_ResetBits(GPIOC, GPIO_Pin_11)   //RW�õ�
#define  RW_SET	        GPIO_SetBits(GPIOC, GPIO_Pin_11)  	//RW�ø�
#define  RD_CLR	        GPIO_ResetBits(GPIOC, GPIO_Pin_10)   //E�õ�
#define  RD_SET	        GPIO_SetBits(GPIOC, GPIO_Pin_10)     //E�ø�
#define  CS_CLR	        GPIO_ResetBits(GPIOC, GPIO_Pin_8)   //CS�õ�
#define  CS_SET	        GPIO_SetBits(GPIOC, GPIO_Pin_8)     //CS�ø�
#define  RST_CLR	    GPIO_ResetBits(GPIOC, GPIO_Pin_6)   //RST�õ�
#define  RST_SET	    GPIO_SetBits(GPIOC, GPIO_Pin_6)     //RST�ø�
#define  LE_CLR	        GPIO_ResetBits(GPIOB, GPIO_Pin_14)   //LE�õ�
#define  LE_SET	        GPIO_SetBits(GPIOB, GPIO_Pin_14)     //LE�ø�


//TFT�������ӿڶ���
#define PEN             GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)    //PC12�����ֵ
#define TPDOUT          GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_12)   //PC11�����ֵ
#define TPBUSY          GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_13)    //PC12�����ֵ
#define TPDI_CLR		GPIO_ResetBits(GPIOB, GPIO_Pin_15)    //TPDI�õ�
#define TPDI_SET		GPIO_SetBits(GPIOB, GPIO_Pin_15)      //TPDI�ø�
#define TPCS_CLR		GPIO_ResetBits(GPIOC, GPIO_Pin_7)    //TPCS�õ�
#define TPCS_SET		GPIO_SetBits(GPIOC, GPIO_Pin_7)      //TPCS�ø�
#define TPCLK_CLR		GPIO_ResetBits(GPIOC, GPIO_Pin_9)    //TPCLK�õ�
#define TPCLK_SET		GPIO_SetBits(GPIOC, GPIO_Pin_9)      //TPCLK�ø�

//************************************************************************

#define SET_LE()		GPIO_SetBits(GPIOC, GPIO_Pin_14)
#define CLR_LE()		GPIO_ResetBits(GPIOC, GPIO_Pin_14)

#define	SET_SCL()		GPIO_SetBits(GPIOC, GPIO_Pin_0)
#define	CLR_SCL()		GPIO_ResetBits(GPIOC, GPIO_Pin_0)

#define SET_DATA()		GPIO_SetBits(GPIOC, GPIO_Pin_15)
#define CLR_DATA()		GPIO_ResetBits(GPIOC, GPIO_Pin_15)

#define SET_CE()		GPIO_SetBits(GPIOC, GPIO_Pin_13)
#define CLR_CE()		GPIO_ResetBits(GPIOC, GPIO_Pin_13)
//************************************************************************
#define Key_1()						GPIO_ReadInputDataBit(GPIOD,GPIO_Pin_2)
#define Key_2()						GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_5)
#define Key_3()						GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_8)
#define Key_4()						GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_9)

#define USB_DISCON_L()				GPIO_ResetBits(GPIOC, GPIO_Pin_5)
#define USB_DISCON_H()	    		GPIO_SetBits(GPIOC, GPIO_Pin_5)
//************************************************************************
#endif

