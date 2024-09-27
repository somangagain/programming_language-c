/*
* 문자(character)
*/

#include <stdio.h>

int main(void) {
	// 한 문자는 char(character) 데이터 타입을 이용해 나타낸다. 
	// char 값은 아스키 코드에 해당하는 값으로, 그에 대응하는 문자를 가리킨다.
	char character = '0';					// 작은 따움표(')로 감싼 문자는 그 문자의 아스키 코드값으로 대체된다.
	printf("%c\n", character);

	// '\0'은 NULL 문자(null character)이다.
	// null character는 문자열의 끝을 나타낸다.
	// 이를 포함한 char 배열만이 문자열로 인정된다.
	character = 0;							// 아스키 코드상 n번째 문자를 나타낸다.
	character = '\0';						// 아스키 코드상 n(8진수)번째 문자를 나타낸다.

	return 0;
}