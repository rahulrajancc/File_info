// exec() System call
#include<stdio.h> 
int main()
{
int pid;
// A null terminated array of character pointers
char *args[]={"/bin/ls","-l",0}; 
printf("\n Parent process"); 
pid=fork();
if(pid==0)
{
execv("/bin/ls",args); 
}
else
{
printf("\n Child process");
}
return 0;
}
