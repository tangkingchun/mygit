//author is tang
//local changed
#include<stdio.h>
#include <pthread.h>
void * thread(void *)
{
	printf("thread run\n");
}
int main()
{
    pthread_create();
    return 0;
}
