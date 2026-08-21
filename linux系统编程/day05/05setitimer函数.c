#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/time.h>


int main(int argc, char const *argv[])
{
    struct itimerval new;
    new.it_interval.tv_sec=10;
    new.it_interval.tv_usec=0;

    new.it_value.tv_sec=5;
    new.it_interval.tv_usec=0;

    setitimer(ITIMER_REAL,&new,NULL);

    sleep(2);
    struct itimerval old;

    setitimer(ITIMER_REAL,&new,&old);
    printf("上一个闹钟的循环周期：%lds %ldus\n",old.it_interval.tv_sec,old.it_interval.tv_usec);
    printf("上一个闹钟到响的时间：%lds %ldus\n",old.it_value.tv_sec,old.it_value.tv_usec);

    return 0;
}
