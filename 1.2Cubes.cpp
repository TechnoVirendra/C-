/*
Write a program to find the total number of smaller cubes so obtained.
*/
/*
Step 1- Start
Step 2-Declare 4 integersside_ of_painted_cube,side_of_cube_to_cut_into, number_of_cubes and new_side
Step 3- Read side_ of_painted_cube,side_of_cube_to_cut_into
Step 4- Divide side_ of_painted_cube byside_of_cube_to_cut_into and store in new_side
Step 5-  Calculatenumber_of_cubes by multiplying new_side 3 times and store in number_of_cubesi.e
number_of_cubes= new_side* new_side* new_side
Step 6- Print value of variable number_of_cubes
Step 7- Stop
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int side_of_cube,cut_into,new_side,number_of_cubes;
	printf("Side of Painted Cube :");
	scanf("%d",&side_of_cube);
	printf("Side of cube to cut into :");
	scanf("%d",&cut_into);
	new_side=side_of_cube/cut_into;
	number_of_cubes=pow(new_side,3);
	printf("Number of Smaller cubes generated = %d",number_of_cubes);
	return 0;
}
