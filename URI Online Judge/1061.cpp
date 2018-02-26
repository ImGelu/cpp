#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
int iDays, iDays2, iHours, iHours2, iMin, iMin2, iSec, iSec2;
int iDayPeriod, iHourPeriod, iMinPeriod, iSecPeriod;
scanf("Dia %d\n", &iDays);
scanf("%d : %d : %d\n", &iHours, &iMin, &iSec);
scanf("Dia %d\n", &iDays2);
scanf("%d : %d : %d\n", &iHours2, &iMin2, &iSec2);
if(iHours > iHours2) {
-- iDays2;
iHours2 += 24;
}
if(iMin > iMin2) {
-- iHours2;
iMin2 += 60;
}
if(iSec > iSec2) {
-- iMin2;
iSec2 += 60;
}
iDayPeriod = iDays2 - iDays;
iHourPeriod=iHours2 - iHours;
iMinPeriod=iMin2-iMin;
iSecPeriod=iSec2-iSec;
cout<<iDayPeriod<<" dia(s)"<<'\n';
cout<<iHourPeriod<<" hora(s)"<<'\n';
cout<<iMinPeriod<<" minuto(s)"<<'\n';
cout<<iSecPeriod<<" segundo(s)"<<'\n';
return 0;
}