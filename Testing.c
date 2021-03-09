#include <stdio.h>
#include <stdlib.h>

struct state{
	char name[10];
	int pop;
	
	};


int main()
{
	
	struct state info[10];
	int i;
	char *line = NULL;
	size_t len = 0;
	int count = 0;
	
	printf("Enter state abbreviation and population in milions(To Terminate input Ctrl+D): \n");
	for(i = 0; i < 10; i++)
	{
		if(getline(&line,&len, stdin) != -1)
		{
			sscanf(line, "%s %i", info[i].name, &info[i].pop);
			count++;
		}
		else
		{
				break;
		}
	}
	
	printf("\n List of Abbreviations: \n");
	for(i =0; i < count; i++)
	{
		if(info[i].pop > 10)
		{
			printf("%s \n", info[i].name);
			}
		
		}
	
	return 0;
}
