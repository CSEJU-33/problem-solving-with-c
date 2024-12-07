#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str1[100] ="Bangalore",str2[100];
	int i,index,num,len =0;
	printf("Given string \t\t\t\"%s\"\n",str1);
	//scanf("%s",str1);
	printf("starting position\t\t ");
	scanf("%d", &index);
	printf("The number of characters\t ");
	scanf("%d", &num);
	
	len = strlen(str1);
	if(index+num>len)
	{
		printf("Invalid index");
		exit (0);
	}
	for(i=0; i<num; i++)
	{
		str2[i] = str1[index-1+i];
}
		str2[i]='\0';
    
	printf("Extracted string \t\t\"%s\"\n",str2);

	
	return (0);
}