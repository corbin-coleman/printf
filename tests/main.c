#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*char *str2 = "Hel\0lo";
	char *str = "";
	char c = 'a';
	char *str = "Bye";*/
	char *str = NULL;
	int i, j;
	char *str2 = "Do you have the time to listen to me whine\nAbout nothing and everything all at once\nI am one of those\nMelodramatic fools\nNeurotic to the bone\nNo doubt about it\n\nSometimes I give myself the creeps\nSometimes my mind plays tricks on me\nIt all keeps adding up\nI think Im cracking up\nAm I just paranoid?\nOr am I just stoned\n\nI went to a shrink\nTo analyze my dreams\nShe says its lack of sex thats bringing me down\nI went to a whore\nHe said my lifes a bore\nSo quit my whining cause its bringing her down\n";
	char *str3 = "\nSometimes I give myself the creeps\nSometimes my mind plays tricks on me\nIt all keeps adding up\nI think Im cracking up\nAm I just paranoid?\nA ya-ya-ya\n\nGrasping to control\nSo I better hold on\n\nSometimes I give myself the creeps\nSometimes my mind plays tricks on me\nIt all keeps adding up\nI think Im cracking up\nAm I just paranoid?\nOr am I just stoned?\n";
	i = printf("%s%s%s%s%s%s", str2, str3, str2, str3, str2, str3);
	j = _printf("%s%s%s%s%s%s", str2, str3, str2, str3, str2, str3);
	printf("printf return = %d\n", i);
	printf("_printf return = %d\n", j);
	_printf("%s\n", str);
	printf("%%%%%\n");
	_printf("%%%%%\n");
	printf("%%%s\n", "hi");
	_printf("%%%s\n", "hi");
	printf("%     %   %      %  %\n");
	_printf("% % % % % \n");
	printf("%\t%\t%\t%\t%\t\n");
	return (0);
}
