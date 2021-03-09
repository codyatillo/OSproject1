#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct state{
	char name[10];
	
	};

int main()
{
	struct state info[10];
	int i;
	int j;
	char *line = NULL;
	size_t len = 0;
	int count = 0;
	struct state temp;
	
printf("Enter state abbreviation and population in milions(To Terminate input Ctrl+D): \n");
	for(i = 0; i < 10; i++)
	{
		if(getline(&line,&len, stdin) != -1)
		{
			sscanf(line, "%s ", info[i].name);
			count++;
		}
		else
		{
				break;
		}
	}
	
	
	for(i = 0; i < count; i++)
	{
		for(j=i; j < count; j++)
		{
			if(strcmp(info[i].name,info[j].name) > 0)
			{
				strcpy(temp.name, info[i].name);
				strcpy(info[i].name,info[j].name);
				strcpy(info[j].name, temp.name);
				
				}
			}
	}
		
	printf("\nPrinting abbreviations alphabetically: \n");
	for(i = 0; i < count; i++)
	{
		
			printf("%s \n", info[i].name);
		}
	
	return 0;
	
	}
