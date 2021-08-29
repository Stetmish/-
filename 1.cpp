#include <math.h>
#include <stdio.h>
double x1,x2,x,D;
void linear_equation(double b,double c){
	x=c*(-1)/b;
}
void quadratic_equation(double a,double b,double c){
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
}
void solution(double a,double b,double c){
	if(a==0 && b==0){
		if(c==0){
		 printf("R");
		}
		else{
			printf("No roots");
		}
	}
	else if(a==0){
		linear_equation(b,c);
		printf("%.6lf",x);
	}
	else{
	D=b*b-4*a*c;
		if(D<0){
		printf("No roots");	
		}
		else{
	quadratic_equation(a,b,c);
		printf("%.6lf",x1);
		printf(" ");
		printf("%.6lf",x2);
	}
}
}
int main () {
double a,b,c;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
solution(a,b,c);
return 0;
}
