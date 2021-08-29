#include <math.h>
#include <stdio.h>
double linear_equation(double b,double c){
	double x;
	x = c*(-1)/b;
	return x;
}
double quadratic_equation1(double a,double b,double c){
	double x1,D;
	D = b*b-4*a*c;
	x1 = (b*(-1)+sqrt(D))/(2*a);
	return x1;
}
double quadratic_equation2(double a,double b,double c){
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
void output(int a){
	if(a == 1){
	 printf("R");
	}
	else if(a == 2){
	 printf("No roots");
	}
	else if(a == 3){
	 printf("%.6lf",linear_equation(b,c));
	}
	else if(a == 4){
	 if(quadratic_equation1(a,b,c) == quadratic_equation2(a,b,c)){
	  printf("%.6lf",quadratic_equation1(a,b,c));
	}
	 else{
	  printf("%.6lf",quadratic_equation1(a,b,c));
	  printf(" ");
	  printf("%.6lf",quadratic_equation2(a,b,c));
	 }
	}	
}
int main () {
double a = 0,b = 0,c = 0;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
output(solution(a,b,c));
return 0;
}
