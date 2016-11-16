#ifndef __TOUCH_H

#define __TOUCH_H

extern struct struct1 coordinate;      //����һ����ΪTp_pix�Ľṹ����,���ڴ�Ŵ����Ĵ����������
extern unsigned int  lx,ly;  

void start_7843(void);
void Write_7843(unsigned char temp);          //SPIд8λ�����������IC
unsigned int Read_7843(void);                     //SPI ������
struct struct1 AD7843(void) ;
unsigned char pix_filter(struct struct1 pix1,struct struct1 pix2);
unsigned char Getpix(void);
void drawpoint(unsigned int x,unsigned int y,unsigned int color);
void Print_Decimal(unsigned char i,unsigned int buffer);
void Display_Coordinate(int x,unsigned int y,unsigned int color);
void ShowBotton(void);
void Detect_TP(void);
unsigned char AI_Read_TP(unsigned char MS_TIME);
void GUI_TOUCH_X_ActivateX(void);
void GUI_TOUCH_X_ActivateY(void);
 int GUI_TOUCH_X_MeasureX(void);
 int GUI_TOUCH_X_MeasureY(void);
unsigned int ADS_Read_XY(unsigned char xy);
#endif
