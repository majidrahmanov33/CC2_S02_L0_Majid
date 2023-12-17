#include<stdio.h>

int main(void) {

int x,y;

printf("Enter your coordinates: ");
scanf("%d  %d",&x,&y);

if ( x > 0 && y > 0 ) printf("Coordinate point (%d , %d) lies in FIRST quadrant.\n",x,y);
if ( x > 0 && y < 0 ) printf("Coordinate point (%d , %d) lies in FOURTH quadrant.\n",x,y);
if ( x < 0 && y > 0 ) printf("Coordinate point (%d , %d) lies in SECOND quadrant.\n",x,y);
if ( x < 0 && y < 0 ) printf("Coordinate point (%d , %d) lies in THIRD quadrant.\n",x,y);

return 0; } //end of main 

