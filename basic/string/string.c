/*
* 문자열(string)
*/

#include <stdio.h>

int main(void) {
	// 문자열은 character 를 모아 나타낸다.
	// character array 맨 끝에 null character을 반드시 포함해야 한다.
	char string_init1[] = { 's', 't', 'r', 'i', 'n', 'g', '\0' };

	// 다음과 같이 간단히 표현하여도 위와 결과가 같다.
	char string_init2[] = "string";

	return 0;
}