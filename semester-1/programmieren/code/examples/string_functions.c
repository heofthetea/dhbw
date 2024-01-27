#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{

    char t1[21], t2[21]; //when initializing without value, there's only bullshit written into the memory

    printf("\n---%s---\n", t1);

    for(int i = 0; i < 100; i++) { //prints out all bullshit that's written in memory
        printf("%c", t1[i]);
    }

    printf("\nlength uninitialized t1: %d", strlen(t1));

    strcpy(t1, "Hannes");
    printf("\n----%s----", t1);

    strcpy(t2, t1);
    printf("\n----%s----", t2);

    strcat(t2, " ist schlau");
    printf("\n----%s----", t2);

    t2[10] = 0; // equivalent to "\0"
    // this doesn't get rid of the "ist schlau", only places a terminator in front of it!!!!!
    printf("\n---%s---", t2);

    strncpy(t2, t1, 3); // doesn't 
    t2[3] = 0; // manually concatinate terminating 0
    printf("\n---%s---", t2);

    strcat(t2, "blabla");
    printf("\n---%s---", t2); // outputs "Hanblabla"


    /* use pointers to overwrite part of a string */
    strncpy(t2 + 3, "nes", 3);
    printf("\n---%s---", t2); // outputs "Hannnesbla"
    

    int length = strlen(t1);
    printf("\nlength assigned t1: %d", length);


    int pointer_to_first_a = strchr(t1, 'a');
    printf("\npointer to string: %X\npointer to first a: %X", &t1, pointer_to_first_a);


    return 42;
}