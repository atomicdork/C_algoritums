#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "strList.h"

int main(void) {
    struct strList* myList;
    myList = strlistConstructor();

    if(strlistIsEmpty(myList) == 1)
    {
        printf("[Test pass] New list is empty\n");
    }
    else
    {
        printf("[Test fail] New list is reported as non-empty\n");
    }

    // Test list size is 0 for new lists
    if(strlistSize(myList) == 0)
    {
        printf("[Test pass] New list is reported as having size 0\n");
    }
    else
    {
        printf("[Test fail] New list is reported as having non 0 size\n");
    }

    char *names[] = { "David", "Kevin", "Michael", "Craig", "Jimi" };


    char *name;
    for(int i = 0; i < 5; i++) {
        name = strdup(names[i]);
        strlistAdd(myList, name);
    }

    strlistDisplay(myList);

    char hope_and_dream[] = "Dav";
    int i = strlistSearch(myList, hope_and_dream);
    printf("%d\n" , i);

    return 0;
}