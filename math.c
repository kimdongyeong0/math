#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
    float s, x;  //s,x는 유리수,무리수 꼴 나올 수 있으므로 float으로 선언
                 //a,b,c는 정수긴한데, 자꾸 데이터 손실이나서 그냥 float으로 같이함

    printf("이차방정식의 해 x 구하는 프로그램입니다.\n");
    printf("x^2의 계수를 입력하시오.\n");
    scanf_s("%f", &a);    //여기서 입력한건, 변수 a에 저장됨
    printf("x의 계수를 입력하시오.\n");
    scanf_s("%f", &b);    //여기서 입력한건, 변수 b에 저장됨
    printf("상수항을 입력하시오.\n");
    scanf_s("%f", &c);    //여기서 입력한건, 변수 c에 저장됨

    s = (long)pow(b, 2) - (4 * a * c);    //근의 공식에서 분자의 루트안에있는 ﻿b제곱﻿-4ac를 표현한 것

	if (a == 0)  //a가 0인 경우
	{
		printf("이 방정식은 일차방정식입니다.\n");
		x = -c / b;
		printf("그렇지만 계산해드릴게요. x=%.2f 입니다.\n", x);
	}

	else  //a가 0이 아닌 모든 경우, 즉, 이차방정식인 경우
	{
		if (s > 0)  // 판별식>0, 해가 두개 나오는 경우
		{
			x = (long)(-b + sqrt(s)) / (2 * a);
			printf("%.0fx ^ 2 + %.0fx + %.0f의 해 x 2개 중 더 큰 값은 %.2f.\n", a, b, c, x);
			x = (long)(-b - sqrt(s)) / (2 * a);
			printf("%.0fx ^ 2 + %.0fx + %.0f의 해 x 2개 중 더 작은 값은 %.2f.\n", a, b, c, x);
		}

		else if (s == 0) //판별식=0, 해가 한 개, 즉 중근
		{
			x = -b / (2 * a);
			printf("%.0fx^2+%.0fx+%.0f의 해 x는 %.2f.\n", a, b, c, x);
		}

		else  // 판별식>0, 판별식=0인 것 이외의 모든 경우의수 . D<0, 즉 허근
			printf("%.0fx ^ 2 + %.0fx + %.0f의 해 x는 실수 범위에서 존재하지 않습니다.\n", a, b, c);
	}

	return 0;
}