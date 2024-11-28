#include <REGX52.H>
void delay(unsigned int time);

void main()
{
	int num=-1;
	while(1)
	{
		if(P3_1==0)
		{
			delay(1);	//use delay to prevent the bounce of button.
			while(P3_1==0);
			delay(1);
			num++;
			if(num==8)
			{
			num=0;
			}
			P2=~(0x01<<num);
			
		}
		if(P3_0==0)
		{
			delay(1);
			while(P3_0==0);
			delay(1);
			if(num==0)
			{
				num=7;
			}
			else
			{
				num--;
			}
			P2=~(0x01<<num);
		}
	}
}

void delay(unsigned int time)	
{
	unsigned char data i, j;

	i = 2;
	j = 199;
	while(time--)
	{
		do
		{
			while (--j);
		} 	while (--i);

	}
}