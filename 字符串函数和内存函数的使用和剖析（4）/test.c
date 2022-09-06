#include <stdio.h>

//
////strtok函数、
//// char* strtok(char * str,const char *sep)
//// sep参数是个字符串，定义了用作分隔符的字符集合
//#include <string.h>
//
//int main()
//{
//	 //zxxc@wjnm.sxsw
//	//使用strtok函数后结果为
//	//zxxc wjnm sxsw
//	//函数使用时将传过去的在字符串中的sep字符换成'\0'，再回到起始位置
//	/*char arr[] = "zxxc@wjnm.sxsw";
//	char* p = "@.";*/
//	//IP地址表示用 - 点分十进制
//	char arr[] = "192.168.31.@121";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//法一：更好
//	/*char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}*/
//
//	//法二：
//	char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	return 0;
//}


////strerror函数 - 错误信息函数（返回错误码所对应的错误信息）
////char *strerror(int errnum)
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//错误码     错误信息
//	//  0		No error
//	//  1		Operation not permitted
//	//  2		No such file or directory
//	//  3		No such process
//	// ...
//	//errno是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，复制到errno中
//	/*char* str = strerror(errno);
//	printf("%s\n", str);*/
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("file is opened success!\n");
//	}
//	return 0;
//}


////分类函数
////1.islower() - 是否小写
////结果正确返回非0数，否则返回0
//#include <ctype.h>
//
//int main()
//{
//	char ch = 'W';
//	//int chnum = islower(ch);
//	int chnum = isdigit(ch);
//	//判断是否是数字
//	printf("%d\n", chnum);
//	return 0;
//}




//tolower 和 toupper 函数
#include <string.h>

int main()
{
	/*int ph1 = tolower('W');
	int ph2 = toupper('q');
	putchar(ph1);
	putchar(ph2);*/
	char arr[] = "I am A Student!";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}
