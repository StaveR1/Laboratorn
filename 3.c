/* На площині задані обмежені лініями область R і точки А, В, С,  розробити програму яка обчислює периметр, площу трикутника АБЦ. Якщо точки АВС належить області і не лежать на одній прямій інакше видати відповідне повідомлення. */
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int p1, p2, p3 ;
float x1, x2, x3, y1, y2, y3, p, s, l1, l2, l3; system("chop 1251");
printf ("Введіть кординати точок A, B, C ->\n");
 scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

if((x1*x1+y1*y1<=4) && (y1<=-x1*x1))
	p1=1;
	else p1=0;
	if((x2*x2+y2*y2<=4) && (y2<=-x2*x2))
	p2=1;
	else p2=0;
	if((x3*x3+y3*y3<=4) && (y3<=-x3*x3))
	p3=1;
	else p3=0;
	if((p1==1) && (p2==1) && (p3==1))
	{
	l1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    l2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	l3=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	p=11+12+13;
	printf ("Периметр=%.3f\n", p) ;
	p-p/2;
	s=sqrt(p*(p-11)*(p-12)*(p-13));
	printf ("Площа=%.3f\n", s) ;
}
else printf ("Трикутник не належить обмеженій області\n"); 
    getch();
	return 0;
	}
