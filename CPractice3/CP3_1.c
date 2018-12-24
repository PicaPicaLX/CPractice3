#include <stdio.h>
/*练习基本输入输出函数*/
int main()
{
	UsePutchar();
}

int UsePutchar()
{
	char cChar1, cChar2, cChar3, cChar4;
	cChar1 = 'H';
	cChar2 = 'e';
	cChar3 = 'l';
	cChar4 = 'o';

	putchar(cChar1);
	putchar(cChar2);
	putchar(cChar3);
	putchar(cChar3);
	putchar(cChar4);
	putchar('\n');

	system("pause");
	return 0;
}