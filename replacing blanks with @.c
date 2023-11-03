#include<stdio.h>  //replace the blank spaces with @ sign in the string
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[20];
	int i=0;
	printf("Enter the string :-");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			str[i]='@';
			
		}
		i++;
	}
	
	printf("%s",str);
	return 0;
}

