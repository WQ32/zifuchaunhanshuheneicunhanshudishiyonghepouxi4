#include <stdio.h>

//
////strtok������
//// char* strtok(char * str,const char *sep)
//// sep�����Ǹ��ַ����������������ָ������ַ�����
//#include <string.h>
//
//int main()
//{
//	 //zxxc@wjnm.sxsw
//	//ʹ��strtok��������Ϊ
//	//zxxc wjnm sxsw
//	//����ʹ��ʱ������ȥ�����ַ����е�sep�ַ�����'\0'���ٻص���ʼλ��
//	/*char arr[] = "zxxc@wjnm.sxsw";
//	char* p = "@.";*/
//	//IP��ַ��ʾ�� - ���ʮ����
//	char arr[] = "192.168.31.@121";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//��һ������
//	/*char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}*/
//
//	//������
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


////strerror���� - ������Ϣ���������ش���������Ӧ�Ĵ�����Ϣ��
////char *strerror(int errnum)
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//������     ������Ϣ
//	//  0		No error
//	//  1		Operation not permitted
//	//  2		No such file or directory
//	//  3		No such process
//	// ...
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬���Ƶ�errno��
//	/*char* str = strerror(errno);
//	printf("%s\n", str);*/
//
//	//���ļ�
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


////���ຯ��
////1.islower() - �Ƿ�Сд
////�����ȷ���ط�0�������򷵻�0
//#include <ctype.h>
//
//int main()
//{
//	char ch = 'W';
//	//int chnum = islower(ch);
//	int chnum = isdigit(ch);
//	//�ж��Ƿ�������
//	printf("%d\n", chnum);
//	return 0;
//}




//tolower �� toupper ����
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
