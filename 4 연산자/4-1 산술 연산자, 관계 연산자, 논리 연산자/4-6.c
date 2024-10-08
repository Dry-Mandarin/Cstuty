#include <stdio.h>

int main(void)
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);
	printf("(a > 10) && (a < 20) : %d\n", res);
	res = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20) : %d\n", res);
	res = !(a >= 30);
	printf("!(a >= 30) : %d\n", res);

	return 0;
}
/*
논리 연산자
&&(and)
 :피연산자 모두 참일 떄만 연산 결과가 참

||(or)
 :둘 중에 하나라도 참이면 참

!(not)
 :논리부정, 참과 거짓을 바꿀 때 사용

 왼쪽부터 오른쪽으로 차례대로 계산 실행
*/

/*
숏 서킷 룰
 : 좌항만으로 &&,|| 연산 겨로가를 판별하는 기능
 ex1) &&는 좌항이 거짓이면 우항과 관계없이 겨로가가 거짓 -> 우항 판별할 필요 없음
 ex2) ||좌항이 참이면 우항과 관계없이 결과가 참
*/