/* Дано гіпотенузу і один із катетів прямокутного трикутника. Знайти другий його катет і площу описаного навколо нього круга.  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system ("chcp 1251");
	
	float a, b, c, s;
	printf("\nВведіть значення гіпотинузи с="); // Введення гіпотенузи з клавіатури
	scanf("%f", &c);
	
	printf("\nВведіть значення катета a="); // Введення катета з клавіатури
	scanf("%f", &a);
	
	b= sqrt((c*c)-(a*a)); // Обчислення іншого катета з т. Піфагора
	printf("Катет=%.0f\n", b); // Вивід значення на екран 
	
	s= M_PI*pow(c/2,2); // Обчислення площі із використанням числа ПИ і піднесення до степеня
	printf("Площа круга=%.2f\n", s); // Вивід значення на екран 
	
	getch();
	return 0;
}
