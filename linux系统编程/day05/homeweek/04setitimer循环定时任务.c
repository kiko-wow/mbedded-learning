#define _POSIX_SOURCE
#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>

int count = 0;

void time_handler(int sing)
{
    count++;
    time_t t = time(NULL);
    printf("第%d次触发，时间：%s", count, ctime(&t));
}

int main(int argc, char const *argv[])
{
    struct sigaction act;
    act.sa_handler = time_handler;
    sigemptyset(&act.sa_mask);
    act.sa_flags = 0;
    sigaction(SIGALRM, &act, NULL);

    struct itimerval timer;
    timer.it_value.tv_sec = 3;
    timer.it_value.tv_usec = 0;
    timer.it_interval.tv_sec = 2;
    timer.it_interval.tv_usec = 0;

    setitimer(ITIMER_REAL, &timer, NULL);
    printf("定时器已启动，首次 3 秒后触发，之后每 2 秒一次\n");
    while (1)
    {
        sleep(1);
    }

    return 0;
}
