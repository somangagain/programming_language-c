/*
* 입출력(input and output) 
*/

#include <stdio.h>
#include <conio.h> // _getch, putch 사용을 위해서 include 해야할 header file

int main(void) {
	int character;
	
	// 단일 문자는 getchar, _getch를 이용해서 입력을, putchar, _putch를 이용해서 출력받을 수 있다.
	// getchar, _getch의 경우 성공적으로 입력받으면 int형으로 그 문자의 아스키 코드를, 실패하면 EOF를 리턴한다.
	// putchar, _putch의	 경우 성공적으로 출력하면 int형으로 그 문자의 아스키 코드를, 실패하면 EOF를 리턴한다.
	
	// getchar, putchar은 버퍼를 사용하고, _getch, _putch는 버퍼를 사용하지 않는다.

	character = getchar();
	putchar(character);

	getchar(); putchar('\n');				// \n과 같은 whitespace도 버퍼에 남음을 잊지 말자

	character = _getch();					// _getch의 경우 echo하지 않는다.
	_putch(character);

	_putch('\n');							// _getch의 경우 버퍼를 사용하지 않고, \n 입력을 기다리지 않는다.


	// 한 줄의 문자열은 gets_s를 이용해 입력, puts를 이용해 출력한다.
	char string[100];

	// gets_s는 \n이 나올 때까지 계속해서 입력받으며, \n을 입력받으면 이를 \0으로 바꾸어 저장한다.
	gets_s(string, sizeof(string));

	// puts는 \0이 나올 때까지 계속해서 출력한다.
	puts(string);

	return 0;
}