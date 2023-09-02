/***** compile as gcc -o Printing_reverse.c reverse -lpthread
  sample output 

[anamika@fedora missimissi]$ ./reverse 
Enter a positive integer: 8
8
7
6
5
4
3
2
1
****/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *printNumber(void *arg) {
    int *num_ptr = (int *) arg;
    int num = *num_ptr;
    printf("%d\n", num);
    return NULL;
}

int main() {
    int N;
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    pthread_t threads[N];
    int thread_args[N];

    for (int i = 0; i < N; i++) {
        thread_args[i] = N - i; // Nth thread will get N, (N-1)th will get N-1, and so on.
        pthread_create(&threads[i], NULL, printNumber, &thread_args[i]);
    }

    // Wait for all threads to finish
    for (int i = 0; i < N; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}

  
