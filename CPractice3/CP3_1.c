#include <stdio.h>
/*练习基本输入输出函数*/
int main()
{
	/*UsePutchar();
	UseGetchar();
	UsePuts();
	UseGets();
	UsePrintf();
	UseScanf();*/

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

/*字符串输入*/
int UseGets()
{
	char cString[30];
	gets(cString);
	puts(cString);

	system("pause");
	return 0;
}

/*格式输出函数*/
int UsePrintf()
{
	long iLong = 100000;
	printf("The Long is: %ld\n", iLong); /*输出长整型变量*/

	printf("The string is: %s\n", "LOVE"); /*输出字符串LOVE*/
	printf("The string is: %10s\n", "LOVE"); /*使用%ms格式控制输出, 表示输出的字符串占m列, 若字符串长于m, 则突破限制输出, 否则空格补全左侧*/
	printf("The string is: %-10s\n", "LOVE"); /*使用%-ms格式控制输出, 表示输出的字符串占m列, 若字符串长于m, 则突破限制输出, 否则空格补全右侧*/
	printf("The string is: %10.3s\n", "LOVE"); /*使用%m.ns格式控制输出,表示输出的字符串占m列, 但只取左侧n个字符, 若字符串长于m则突破限制输出, 不全的用空格补全左侧*/
	printf("The string is: %-10.3s\n", "LOVE"); /*使用%m.ns格式控制输出,表示输出的字符串占m列, 但只取左侧n个字符, 若字符串长于m则突破限制输出, 不全的用空格补全右侧*/

	system("pause");
	return 0;
}

/*格式输入函数*/
int UseScanf()
{
	SimpleMtehod(); /*简单用法*/
	ComplexMethod(); /*高级用法*/

	system("pause");
	return 0;
}