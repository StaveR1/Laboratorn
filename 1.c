/* ���� ��������� � ���� �� ������ ������������ ����������. ������ ������ ���� ����� � ����� ��������� ������� ����� �����.  */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system ("chcp 1251");
	
	float a, b, c, s;
	printf("\n������ �������� ��������� �="); // �������� ��������� � ���������
	scanf("%f", &c);
	
	printf("\n������ �������� ������ a="); // �������� ������ � ���������
	scanf("%f", &a);
	
	b= sqrt((c*c)-(a*a)); // ���������� ������ ������ � �. ϳ������
	printf("�����=%.0f\n", b); // ���� �������� �� ����� 
	
	s= M_PI*pow(c/2,2); // ���������� ����� �� ������������� ����� �� � ��������� �� �������
	printf("����� �����=%.2f\n", s); // ���� �������� �� ����� 
	
	getch();
	return 0;
}
