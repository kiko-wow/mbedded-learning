#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_CMD 128
#define MAX_APG 8

int main(int argc, char const *argv[])
{
    char cmd[MAX_CMD];
    while (1)
    {
        printf("mysh$");
        fflush(stdout);
        if (fgets(cmd,MAX_CMD,stdin)==NULL);
        {
            break;
        }
        cmd[strcspn(cmd,"\n")]='\0';
        if (strcmp(cmd,"exit")==0)
        {
            break;
        }
        if (cmd[0]=='\0')
        {
            continue;
        }

        char *args[MAX_APG + 1]={0};
        int n = 0;
        char *tok=strtok(cmd,"");
        while (tok && n<MAX_APG)
        {
            args[n++]=tok;
            tok=strtok(NULL,"");
        }

        if (strcmp(args[0],"cd")==0)
        {
            if (chdir(args[1])!=0)
            {
                continue;
            }
            
        }
        pid_t pid = fork();
        if (pid == 0)
        {
            execvp(args[0],args);
            perror("execvp");
            _exit(127);
        }
        int status;
        waitpid(pid,&status,0);
        printf("[退出状态%d]\n",WEXITSTATUS(status));
    }

    printf("bye~\n");
    return 0;
}
