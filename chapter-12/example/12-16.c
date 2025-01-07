#include <stdio.h>

struct temp {
    int i;
    float f;
    char c;
};

union templ {
    int i;
    float f;
    char c;
};

int main(void) {
    struct temp st;
    union templ ut;

    printf("Size of struct temp = %lu\n", sizeof(st));
    printf("Size of union templ = %lu\n", sizeof(ut));

    st.i = 10;
    st.f = 3.45;
    st.c = 's';

    printf("st.i = %d\n", st.i);
    printf("st.f = %f\n", st.f);
    printf("st.c = %c\n", st.c);

    ut.i = 10;
    printf("ut.i = %d\n", ut.i);

    ut.f = 3.45;
    printf("ut.f = %f\n", ut.f);

    ut.c = 's';
    printf("ut.c = %c\n", ut.c);

    return 0;
}
