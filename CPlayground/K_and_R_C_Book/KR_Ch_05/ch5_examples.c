#include <stdio.h>

void swap(int*, int*);
void my_strcpy_a(char*, char*);
void my_strcpy_p(char*, char*);

/*
 * argc is a count of arguments. at least 1
 * argv is an array of pointers tot he args
 */
int main(int argc, char *argv[])
{
    /*
     * Section 5.10: Command line stuff
     */
    int i;

    for (i = 1; i < argc; i++)
        printf("%s%s", *++argv, (argc > 1) ? " " : "");
    printf("\n");
    
    int a = 5;
    int b = 7;

    printf("value of a=%d\naddress of a=%p\nvalue of b=%d\naddress of b=%p\n", a, &a, b, &b);

    swap(&a, &b);
    
    printf("value of a=%d\naddress of a=%p\nvalue of b=%d\naddress of b=%p\n", a, &a, b, &b);

    /*
     * With array example
     */
    char ax[10] = "";
    char ay[10] = "hello to x";

    printf("ax string = '%s'\nay string = '%s'\n", ax, ay);

    my_strcpy_a(ax, ay);

    printf("ax string = '%s'\nay string = '%s'\n", ax, ay);
    
    /*
     * With pointer exmaple
     */
    char px[10] = "";
    char py[10] = "hello to x";

    printf("px string = '%s'\npy string = '%s'\n", px, py);

    my_strcpy_p(px, py);

    printf("px string = '%s'\npy string = '%s'\n", px, py); 
    
    /* 
     * Example: Array of pointers
     */
    char *name[] = { "Shane", "someone else", "last string" };

    printf("%s\n", *name);
    printf("%s\n", *name+1);
    /*
     * Book doesn't show how to call array position for a pointer 
     * of arrays. Thanks book!
     */
    //printf("%s\n", *name);

    return 0;
}

void swap(int *px, int *py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}

void my_strcpy_a(char *s, char *t)
{
    int i;

    i = 0;
    while ((s[i] = t[i]) != '\0')
        i++;
}

void my_strcpy_p(char *s, char *t)
{
    int i;

    i = 0;
    while ((*s++ = *t++) != '\0')
        ;
}
