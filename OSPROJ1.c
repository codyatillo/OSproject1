


//This was the wanted Unix Code

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc ,char* argv[])
{
	pid_t pid;
	pid = fork();
	argv[1] = "./Pipe";
	//argv[0] = "./Testing";
	//argv[1] = "./TestingSort";
	
	if(pid == 0)
	{
		printf("Child Started");
		printf("Executing %s command", argv[1]);
		printf("Output of command is: \n ");
		system(argv[1]);
		
	}
	
	else if(pid == -1)
	{
		printf("Fork call failed");
		
	}
	
	else
	{
		printf("Parent Started");
		sleep(2);
		wait(NULL);
		printf("\nParent has finished");
		printf("\n");
		printf("The child pid is %i and parents id is %i. \n", getpid(),getppid());
	}
	return 0;
	
}
