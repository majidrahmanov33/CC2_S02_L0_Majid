#include<stdio.h>

int main(void) {

int c=0,n;

scanf("%d",&n);
while ( 1 ) {
printf("%d  ",n);
c++;
if ( n == 1 ) {
break;
} //endif
else {
if ( n % 2 != 0 ) n = 3*n + 1;
else n = n/2;
} //end of else
} //endwhile

printf("\nAnd the number of sequence is %d\n",c);

return 0; } //end of main
