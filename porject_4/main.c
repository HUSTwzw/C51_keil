#include <REGX52.H>
#include <INTRINS.H>
void light(int num);
void delay(int time);
int main(void)
{
	while(1)
	{
		light(1);
		delay(1);
		light(2);
		delay(1);
		light(3);
		delay(1);
		light(4);
		delay(1);
		light(5);
		delay(1);
		light(6);
		delay(1);
		light(7);
		delay(1);
		light(8);
		delay(1);
	}
}

void light(int num)
{
	switch(num)
	{
		case 1:P2_4=0;P2_3=0;P2_2=0;P0=0x06;break;
		case 2:P2_4=0;P2_3=0;P2_2=1;P0=0x5B;break;
		case 3:P2_4=0;P2_3=1;P2_2=0;P0=0x4F;break;
		case 4:P2_4=0;P2_3=1;P2_2=1;P0=0x66;break;
		case 5:P2_4=1;P2_3=0;P2_2=0;P0=0x6D;break;
		case 6:P2_4=1;P2_3=0;P2_2=1;P0=0x7D;break;
		case 7:P2_4=1;P2_3=1;P2_2=0;P0=0x07;break;
		case 8:P2_4=1;P2_3=1;P2_2=1;P0=0x7F;break;
	}
	
}

void delay(int time)	//@11.0592MHz
{
	unsigned char data i;
	while(time--)
	{
		{
			_nop_();
			i = 25;
			while (--i);
		}
	}
}