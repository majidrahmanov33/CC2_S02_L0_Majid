#include<stdio.h>

int prime(int n) {
for (int i=2 ; i <= n/2 ; i++) {
if ( n%i == 0 ) return 0; }
return 1;
} //end of function


int main(void) {

int n,save,save2,i;
printf("Enter the number: ");
scanf("%d",&n);

for ( i = 2 ; i < n ; i++ ) {
if (prime(i)) {
save = i;
}
save2 = n - save;
if (prime(save2)) {
printf("%d = %d + %d\n",n,save,save2);
} //endif
} //endfor

return 0; } //end of main
