#include<stdio.h>
#include<math.h>
float fu(float x);
float fprime(float x, float h);
float secondd(float x, float h);

int negt(float x);
void choose(void);
int main(void)
{
	choose();
	return 0;
}
float fu(float x)
{
	float y;
	y=((3*pow(x,3)+2)*(pow(x,2)-4))/sqrt(2*pow(x,2)+2);
	return y;
}
float fprime(float x, float h)
{
	return (fu(x+h)-fu(x-h))/(2*h);
}
float secondd(float x, float h)
{
	return (fprime(x+h,h)-fprime(x-h,h))/(2*h);
}
int negt(float x)
{
	float h, dersec;
	printf("Give h ");
	scanf("%f",&h);
	dersec =secondd(x,h);
	if(dersec<0.0)
		return -1;
	if(dersec==0.0)
		return 0;
	return 1;
}
void choose(void)
{
	int b;
	float a, h;
	printf("Enter the choice ... \n");
	printf("1 the answer of f\n");
	printf("2 the answer of f'\n");
	printf("3 the answer of f''\n");
	b=getchar();
	printf("a ");
	scanf("%f",&a);
	switch(b){
		case '1':
			printf("f(%f)=%f\n", a, fu(a));
			break;
		case '2':
			printf("please give h");
                                             scanf("%f",&h);
			printf("f'(%f)=%f\n", a, fprime(a,h));
			break;
		case '3':
			printf("please give h");
                                             scanf("%f",&h);
			printf("f''(%f)=%f\n", a, secondd(a,h));
			break;
		default :
			printf("Not define ...");
			printf("Enter the chose ... \n");
			printf("1 the answer of f\n");
			printf("2 the answer of f'\n");
			printf("3 the answer of f''\n");
			b=getchar();
	}
}
