/*
Programmer Name = Shelake Kalyani
Program Name = Program to input electricity unit charge and calculate the total electricity bill according to the given condiition.
			For first 50 units Rs.0.50/unit.
			For next 100 units Rs.0.75/unit.
			For next 100 units Rs.1.20/unit.
			For unit above 250 Rs.1.50/unit.
			An additional surcharge of 20%  is added to the bill.

Technology used = C
*/

#include <stdio.h>
int main()
{
    int unit;
    float amt,total_amt,sur_charge;
    
    printf("\n Enter total unit consumed:");
    scanf("%d",&unit);
    if(unit<=50)
    {
        amt=unit*0.50;
    }
    else if(unit<=150)
    {
        amt=25+((unit-50)*0.75);
    }
    else if(unit<=250)
    {
        amt=100+((unit-150)*1.20);
    }
    else
    {
        amt=220+((unit-250)*1.50);
    }
    sur_charge=amt*0.20;
    total_amt=amt + sur_charge;
    printf("\n Electricity Bill = Rs.%.2f",total_amt);
}

/*
Output:
	
 Enter total unit consumed:800

 Electricity Bill = Rs.1254.00
*/
