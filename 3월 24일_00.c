#include <stdio.h>
#define PI 3.1415926535897932384626433832795028841971693993751058209749
//PI ��ȣ���
int main()
{
	int r = 5; //radius
	printf("���� ������ %f�Դϴ�\n", PI * r * r);
	printf("���� �ѷ��� %f�Դϴ�\n", PI * 2 * r);
	printf("���� ���Ǵ� %.2f�Դϴ�\n", PI * 4.0 / 3.0 * r * r * r); // 4.0/3.0 : 1.33, 4/3:1 �� ó����
	//ctrl + F7 : compile
	//ctrl + b : build
	//ctrl + F5 : ����
}