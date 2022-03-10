#include<stdio.h>
void main()
{
	float units,amount,charge,tb,surcharge;
	printf("units consumed");
	scanf("%f",&units);
	if(units<=199)
	{
		charge=1.20;
	}
	else if(units>=200 && units<400)
	{
		charge=1.50;
	}
	else if(units>=400 && units<600)
	{
		charge=1.80;
	}
	else 
	{
		charge=2.00;
	}
	amount=units*charge;
	if(amount>400)
	{
		surcharge=amount*0.15;
	}
	tb=surcharge+amount;
	printf("%.1f\n",units);
	printf("amount: %.2f\n",amount);
	printf("surcharge:%.2f\n",surcharge);
	printf("total bill:%.2f\n",tb);
}