#include <math.h>
#include <stdio.h>
double linear_root(double b,double c){
	double x = 0;
	x = c*(-1)/b;
	return x;
}
double first_quadratic_root(double a,double b,double c){
	double x1 =0,D = 0;
	D = b*b-4*a*c;
	x1 = (b*(-1)+sqrt(D))/(2*a);
	return x1;
}
double second_quadratic_root(double a,double b,double c){
	double x2 = 0,D = 0;
	D = b*b-4*a*c;
	x2 = (b*(-1)-sqrt(D))/(2*a);
	return x2;
}
int solution(double a,double b,double c){
	if(a == 0 && b == 0){
		if(c == 0){
			return 1;
		}
		else{
			return 2;
		}
	}
	else if(a == 0){
		return 3;
	}
	else{
		if(b*b-4*a*c < 0){
			return 2;	
		}
		else{
			return 4;
		}
	}
}
void output(int s,double a,double b,double c){
	if(s == 1){
		printf("R");
	}
	else if(s == 2){
		printf("No roots");
	}
	else if(s == 3){
		printf("%.6lf",linear_root(b,c));
	}
	else if(s == 4){
		if(first_quadratic_root(a,b,c) == second_quadratic_root(a,b,c)){
			printf("%.6lf",first_quadratic_root(a,b,c));
		}
		else{
			printf("%.6lf",first_quadratic_root(a,b,c));
			printf(" ");
			printf("%.6lf",second_quadratic_root(a,b,c));
		}
	}	
}
int main () {
	double a = 0,b = 0,c = 0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	output(solution(a,b,c),a,b,c);
	return 0;
}
