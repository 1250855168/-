#include <stdio.h>
#include <pthread.h>

void *test(void *arg)
{
}

int main()
{
    pthread_mutex_t mutex;
    pthread_mutex_init(&mutex,NULL);

    pthread_cond_t cond;
    pthread_cond_init(&cond,NULL);


    pthread_cond_wait(&cond,&mutex);
    pthread_mutex_lock(&mutex);
    pthread_t t1;
    pthread_mutex_unlock(&mutex);
    pthread_cond_broadcast(&cond);

    pthread_create(&t1, NULL, test, (void *)1);

    pthread_join(t1,NULL);

    pthread_cond_destroy(&cond);

    pthread_mutex_destroy(&mutex);
}
