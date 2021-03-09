#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>


#define MSGSIZE 512

int main()
{
char inbuf[MSGSIZE];
int p[2];
pid_t pid;

	if(pipe(p) == -1)
		{
			perror("./TestingSort");
			exit(1);
		}
	
	switch(pid == fork())
		{
			case -1:
				perror("./Testing");
				exit(2);
			case 0:
				close(1);
				dup(p[1]);
				close(p[0]);
				close(p[1]);
				execl("./Testing","Testing",(char *)0); //call execl() to execute Testing.c
				perror("excel() failed!");
				return(EXIT_FAILURE);
			default: // Parent from pipe
				close(0);
				dup(p[0]);
				close(p[0]);
				close(p[1]);
				execl("./TestingSort", "TestingSort", (char*)0); // call execl() to execute TestingSort.c
				return(EXIT_FAILURE);
		}
		
	return (EXIT_FAILURE);
}
