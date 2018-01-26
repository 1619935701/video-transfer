#include <pthread.h>
#include<semaphore.h>

typedef struct worker{
	void *(*process) (void *arg);
	void *arg;
	struct worker *next;
	struct worker *pre;
}worker_t;


typedef struct threadpool {
	pthread_t *threadid;
} threadpool_t;