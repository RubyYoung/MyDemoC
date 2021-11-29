#include<stdio.h>

//int main(void) {
//	int c;
//	printf(typeof(c));
//	c = getchar();
//	while (c != EOF) {
//		putchar(c);
//		c = getchar();
//	}
//}

int main(void) {
	int c;

	while ((c=getchar())!=EOF) {
		putchar(c);
	}
}
/*
* getchar()
【参数】该函数没有参数。
【返回值】函数的返回值为用户输入的第一个字符的ASCII码，若出错返回-1，且将用户输入的字符回显到屏幕。
如果用户在按回车键之前输入了不只一个字符，其他字符会保留在键盘缓冲区中，等待后续getchar()调用读取。
也就是说，后续的getchat()调用不会等待用户按键，而是直接读取缓冲区中的字符，直到缓冲区的字符读取完毕后，才等待用户按键。
*/