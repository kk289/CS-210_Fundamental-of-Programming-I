/* MP10 - Sunrise, Sunset
 * Author : kevil khadka
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926

int main()
{
  double latitude;
  double longitude;
  double timezone;
  double day_of_year;
  double lamda;
  double eqtime;
  double decl;
  double ha;
  double sunrise;
  double sunset;
  double sunrise_hour;
  int sunrise_minute;
  double sunset_hour;
  int sunset_minute;
  
  printf("Daylight-Sensitive Zombie Protection System\n");
  printf("This program will calculate sunrise and sunset time for any date and location\n");
  
  printf("\nEnter latitude, longitude:");
  scanf("%lf", &latitude);
  scanf("%lf", &longitude);
  
  printf("Enter Timezone:");
  scanf("%lf", &timezone);
  
  printf("Enter day of year:");
  scanf("%lf", &day_of_year);
  
  lamda = ((2 * PI / 365) * (day_of_year - 1));
  eqtime =  229.18*(0.000075 + 0.001868*cos(lamda) - 0.032077*sin(lamda)- 0.014615*cos(2*lamda) - 0.040849*sin(2*lamda));
  decl = 0.006918 - 0.399912*cos(lamda) + 0.070257*sin(lamda) - 0.006758*cos(2*lamda) + 0.000907*sin(2*lamda) - 0.002697*cos(3*lamda) + 0.00148*sin(3*lamda);
  ha = acos((cos(1.5853)/(cos(latitude * PI / 180)* cos(decl)))- tan(latitude * PI/180)*tan(decl))*(180/PI);
  sunrise = 720 + 4*(longitude - ha) - eqtime - (60* timezone);
  sunset = 720 + 4*(longitude + ha) - eqtime - (60* timezone);
  sunrise_hour = floor(sunrise/60);
  sunrise_minute = sunrise - (sunrise_hour * 60);
  sunset_hour = floor(sunset/60);
  sunset_minute = sunset - (sunset_hour * 60);
  printf("Sunrise: %g:%02d\n", sunrise_hour, sunrise_minute);
  printf("Sunset: %g:%02d\n", sunset_hour, sunset_minute);
  return 0;
}
