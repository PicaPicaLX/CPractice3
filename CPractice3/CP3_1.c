#include <stdio.h>
#include <Windows.h>
/*练习基本输入输出函数*/
int main()
{
	/*UsePutchar();
	UseGetchar();*/
	UsePuts();
}

/*单字符变量的输出*/
int UsePutchar()
{
	char cChar1, cChar2, cChar3, cChar4;
	cChar1 = 'H'; /*注意单字符变量一定要用单引号*/
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

/*单字符变量的输入*/
int UseGetchar()
{
	char cChar1;
	printf("请输入一个字符: ");
	cChar1 = getchar();
	putchar(cChar1);
	putchar('\n');
	printf("请输入一个字符: ");
	getchar();
	putchar(getchar());
	putchar('\n');

	system("pause");
	return 0;
}

/*字符串输出*/
int UsePuts()
{
	char* Char = "ILOVECHINA";

	puts("ILOVECHINA");
	puts("I\0LOVE\0CHINA");
	puts(Char);
	Char = "ILOVECHINA!";
	puts(Char);

	system("pause");
	return 0;
}