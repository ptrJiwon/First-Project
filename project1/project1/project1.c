#include <stdio.h>


int main()
{
	int a, b;
	printf("나누고싶은 두 정수를 입력하시오.\n");
	scanf_s("%d \n %d", &a ,&b);
	
	//컴퓨터에서 어떤 수를 0으로 나누는 것은 금지되어있다.
	//0으로 나누는 작업 수행시 데이터 손상 가능성 있으므로 if문을 이용하여 방지할 수 있다.
	if (b == 0)
	{
		printf("0으로 나눌 수 없습니다.");
			return 0;
	}
	
	printf("%d를 %d로 나눈 결과는 : %f", a, b, (float)a / b);
	return 0;
}
/*
int main()

//relational operator >,<,>=,<=,==,!=
{
	int s;
	printf("아무 숫자나 입력해보세요.");
	scanf_s("%d", &s);
	
 	if (s == 7)
	{
		printf("당첨");
	}
		
	else if (s == 4)
		{
			printf(" 죽음의 숫자.");
			s = s + 3;
		}
	else
		{
			printf("평범한 숫자.");
		}
	

	return 0;

}
*/
