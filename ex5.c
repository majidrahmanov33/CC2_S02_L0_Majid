#include<stdio.h>

int countElement(int a[x][],int size2,int a,int b);

int main(void) {

int a,b,i,j,size1,size2;

printf("Give us 2 dimension sizes: ");
scanf("%d  %d",&size1,&size2);

int a[size1][size2];

printf("Start filling your table:\n");

for ( i = 0 ; i < size1 ; i++ ) {
for ( j = 0 ; j < size2 ; j++ ) {
scanf("%d",&a[i][j]);
} //endfor
} //endfor

printf("Here is your table of array:\n");

for ( i = 0 ; i < size1 ; i++ ) {
for ( j = 0 ; j < size2 ; j++ ) {
printf("%d",a[i][j]);
} //endfor 
printf("\n");
} //endfor

printf("Now give the range [a,b]\n");
scanf("%d  %d",&a,&b);
printf("We have %d elements in our array from range [a,b]\n",countElement(a[size1],size2,a,b);

return 0; } //end of main


int countElement (int a[size1],int size,int a,int b) {
int i,j,count=0;
for ( i = 0 ; i < size1 ; i++ ) {
for ( j = 0; j < size2 ; j++ ) {
if ( a <= a[i][j] && a[i][j] <= b ) count++;
} //endfor
} // endfor
return count; 
} //end of function




