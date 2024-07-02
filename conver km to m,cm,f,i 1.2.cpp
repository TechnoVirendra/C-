/*
The Distance between two cities (in km) is input through the keyboard. Write a prgram to convert and print this distance in metres feet, inches and centimeters using structure.
*/
#include<stdio.h>
struct height{
	float km_cities;
	float m_cities;
	float f_cities;
	float i_cities;
	float cm_cities;
}h1;
int main()
{
	printf("Enter The Distance between two Cities = ");
	scanf("%f",&h1.km_cities);
	h1.m_cities=h1.km_cities*1000;
	h1.f_cities=h1.m_cities*3.28084;
	h1.i_cities=h1.m_cities*39.3701;
	h1.cm_cities=h1.m_cities*100;
	printf("Distance Between Two Cities in \nMeter = %f\nfeet = %f\ninches = %f\ncentimeter = %f\n",h1.m_cities,h1.f_cities,h1.i_cities,h1.cm_cities);
	return 0;
}
