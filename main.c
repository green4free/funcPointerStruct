#include <stdio.h>


struct operations {
    int (*add)(int, int);
    int (*sub)(int, int);
};



int myAdd(int a, int b) {
    return a + b;
}


int mySub(int a, int b) {
    return a - b;
}

static struct operations myOps = {
    .add = myAdd,
    .sub = mySub
};



int main(void) {
    printf("Data: %d\n", myOps.add(5, 3));
    return 0;
}
