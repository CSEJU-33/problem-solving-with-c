/*Exercise_11.9*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],ch;
	int i,j;
	printf("Enter a string: ");
	scanf("%s", str);
	getchar();
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	for(i=0;str[i];i++)
	{
		
		if(ch==str[i])
		{
		for(j=i;str[j];j++)
		    str[j]=str[j+1];
		    
		i--;
	    
		}
		
	}

    printf("New String: %s",str);	
    return 0;
	
}

