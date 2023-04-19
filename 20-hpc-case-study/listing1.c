#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>

#define N 100000000

typedef struct {
    char c[60];
    int i;
    double d;
} my_struct;

my_struct array[N];

int main(int argc, char **argv) {
    struct timeval start, stop, res;
    my_struct s;

    gettimeofday(&start, NULL);
    for(int i=0; i<N; i++)
        memcpy(&s, &array[rand()%N], sizeof(my_struct));
    gettimeofday(&stop, NULL);

    timersub(&stop, &start, &res);

    printf("%ld.%06ld\n", res.tv_sec, res.tv_usec);

    return 0;
}
