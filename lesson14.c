// take trip km,available petrol,tank capacity,average per litre from user.
// calculate how many litre petrol user has to fill in vehicle tank.---

#include<stdio.h>
void main()
{
    float capacity,average,available_petrol,trip_km,fill_up,total;

   
    printf("enter tank capacity");
    scanf("%f",&capacity);
    printf("\nenter average per litre");
    scanf("%f",&average);
    printf("\nenter available petrol");
    scanf("%f",&available_petrol);
    printf("\nenter trip km");
    scanf("%f",&trip_km);

    total=trip_km/average;
    fill_up=total-available_petrol;
    if (total>available_petrol)
    {
        printf("you have to fill up %.2f litre for your trip",fill_up);
    }
    else
    {
        printf("you have sufficient petrol for given km.");
    }
    
    


}

// cpacity=5.3 litres
// average per litre=40 km per litre
// available=1 litres
// trip km=60km
// 1litre-40km
// litres-trip km
// tripkm/average=total petrol needed
// fill-up=total-available
