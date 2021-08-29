#include <math.h>
#include <stdio.h>
double calculating_the_only_one_root(double b,double c){
	double x;
	x = c*(-1)/b;
	return x;
}
double calculating_the_first_root(double a,double b,double c){
	double x1,D;
	D = b*b-4*a*c;
	x1 = (b*(-1)+sqrt(D))/(2*a);
	return x1;
}
double calculating_the_second_root(double a,double b,double c){
	double x2,D;
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
		printf("%.6lf",calculating_the_only_one_root(b,c));
	}
	else if(s == 4){
		if(calculating_the_first_root(a,b,c) == calculating_the_second_root(a,b,c)){
			printf("%.6lf",calculating_the_first_root(a,b,c));
		}
		else{
			printf("%.6lf",calculating_the_first_root(a,b,c));
			printf(" ");
			printf("%.6lf",calculating_the_second_root(a,b,c));
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
