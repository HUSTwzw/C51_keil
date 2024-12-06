#include <REGX52.H>
#include <INTRINS.H>

void Delay100us(void);
void main(void)
{
	int num=1;
	while(1)
	{
		while(P3_1==0)
		{
			num=1;
			while(P3_1==0&&num<=5000)
			{
				P2_4=1;
				P2_3=0;
				P2_2=0;
				P0=0x06;
				Delay100us();
				num++;
			}
			num=1;
			while(P3_1==0&&num<=5000)
			{
				P2_4=1;
				P2_3=0;
				P2_2=0;
				P0=0x4F;
				Delay100us();
				num++;
			}
			num=1;
			while(P3_1==0&&num<=5000)
			{
				P2_4=1;
				P2_3=0;
				P2_2=0;
				P0=0x66;
				Delay100us();
				num++;
			}
			num=1;
			while(P3_1==0&&num<=5000)
			{
				P2_4=1;
				P2_3=0;
				P2_2=0;
				P0=0x67;
				Delay100us();
				num++;
			}
			num=1;
			while(P3_1==0&&num<=5000)
			{
				P2_4=1;
				P2_3=0;
				P2_2=0;
				P0=0x3F;
				Delay100us();
				num++;
			}
			num=1;
	  }
		while(P3_2==0)
		{
			num=1;
			while(P3_2==0&&num<=5000)
			{
			  P2_4=1;
				P2_3=0;
				P2_2=0;
				P0=0x3F;
				Delay100us();
				num++;
			}
			num=1;
			while(P3_2==0&&num<=5000)
			{
				P2_4=1;
				P2_3=0;
				P2_2=0;
				P0=0x67;
				Delay100us();
				num++;
			}
			num=1;
			while(P3_2==0&&num<=5000)
			{
				P2_4=1;
				P2_3=0;
				P2_2=0;
				P0=0x66;
				Delay100us();
				num++;
			}
			num=1;
			while(P3_2==0&&num<=5000)
			{
				P2_4=1;
				P2_3=0;
				P2_2=0;
				P0=0x4F;
				Delay100us();
				num++;
			}
			num=1;
			while(P3_2==0&&num<=5000)
			{
				P2_4=1;
				P2_3=0;
				P2_2=0;
				P0=0x06;
				Delay100us();
				num++;
			}
		}
			
		
		
		while(P3_1==1&&P3_2==1)
		{
			P2_4=1;
			P2_3=0;
			P2_2=0;
			P0=0x3F;
			Delay100us();
		}

	}
	

}

void Delay100us(void)	//@11.0592MHz
{
	unsigned char data i;

	_nop_();
	i = 43;
	while (--i);
}