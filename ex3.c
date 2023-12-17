#include<stdio.h>

int main(void) {

int size;

printf("Enter a size(must be an odd integer!) to get the pattern: ");
scanf("%d",&size);
int min=1;
int max=size;


for ( int i = 1 ; i <= size ; i++ ) {
for ( int j = 1 ; j <= size ; j++ ) {
if( j == min || j == max ){
printf("#");
}
else{
printf("*");
}

}
min++;
max--;
printf("\n");
}




return 0; } //end of main
