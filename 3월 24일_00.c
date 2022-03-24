#include <stdio.h>
#define PI 3.1415926535897932384626433832795028841971693993751058209749
//PI 기호상수
int main()
{
	int r = 5; //radius
	printf("원의 면적은 %f입니다\n", PI * r * r);
	printf("원의 둘레는 %f입니다\n", PI * 2 * r);
	printf("구의 부피는 %.2f입니다\n", PI * 4.0 / 3.0 * r * r * r); // 4.0/3.0 : 1.33, 4/3:1 로 처리됨
	//ctrl + F7 : compile
	//ctrl + b : build
	//ctrl + F5 : 실행
}