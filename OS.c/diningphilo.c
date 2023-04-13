#include<pthread.h>
#include<semaphore.h>
#include<stdio.h>
#define N5
#define THINKING 2
#define HUNGRY 1
#define EATING 0
#define LEFT (phnum + 4)%N
#define RIGHT (phnum + 1)%N
int state[N];
int phil[N]={0,1,2,3,4};
sem_t_mutex;
sem_ts[N];
void test(int phnum)
{
	if(state[phnum])==HUNGRY)
	&&state[LEFT]!=EATING
	&&state[RIGHT]!=EATING
	{
		state[phnum]=EATING;
		sleep(2);
		printf("philosopher %d takes fork %d and %d \n",phnum+1,LEFT+1,phnum+1);
		printf("philosopher %d is EATING \n",phnum+1);
	    sem_post(&s[phnum]);
	}
}
  void take_fork(int phnum)
  {
  	sem_wait(&mutex);
  	state[phnum]=HUNGRY;
  	printf("Philosopher %d taking fork %d and %d down \n",phnum+1;LEFT+1;phnum+1);
  	printf("philosopher %d is HUNGRY \n",phnum+1);
  	test(phnum);
  	sem_post(&mutex);
  	sem_wait(&s[phnum]);
  	sleep(1);
  }
    void put_fork(int phnum)
   {
  	sem_wait(&mutex);
  	state[phnum]=THINKING;
  	printf("Philosopher %d putting fork %d and %d down \n",phnum+1;LEFT+1;phnum+1);
  	printf("philosopher %d is THINKING \n",phnum+1);
  	test(LEST);
  	test(RIGHT);
  	sem_post(&mutex);
  }
  
  void*philosopher(void*num)
  {
  	while(1)
  	{
  		int*i=num;
  		sleep(1);
  		take_fork(*i);
  		sleep(0);
  		put_fork(*i);
	  }
  }
  int main()
  {
  	int i;
  	pthread_t thread_id[N];
  	sem_int(&mutex,0,1);
  	for(i=0;i<N;i++)
  	{
  		pthread_create(&thread_id[i],NULL,,philosopher,&phil[i]);
		  printf("philosopher %d is THINKING \n",i+1);
    }
    for (i=0;i<N;i++)
    pthread_join(thread_id[i],NULL);
  }



