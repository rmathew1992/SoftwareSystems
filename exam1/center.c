/* Example code for Software Systems at Olin College.

Copyright 2014 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Returns a heap-allocated string with length n, with
// the given string in the middle, surrounded by fillchar.
//
// For example, if s is allen, n is 10 and fillchar is .
// the result is ..allen... 

char *center(char *s, int n, char fillchar)
{
    // FILL THIS IN
    char* x = (char*) malloc(sizeof(int) * n);
    int i;
    int length = strlen(s); 
    int start = (n - length)/2;
    int j = 0;

    for(i = 0; i<n; i++){
        if (i<start){
            x[i] = fillchar;
        }
        else{
            if(j<length){
                x[i] =s[j];
                j = j+ 1;    
            } else {
                x[i] = fillchar;
            }
        }
    }
    return x;
}


int main (int argc, char *argv[])
{
    char *s = center("Software", 30, '.');
    printf("%s\n", s);

    char *s2 = center("Systems", 31, '-');
    printf("%s\n", s2);

    char *s3 = center("Spring 2014", 32, '*');
    printf("%s\n", s3);

    char *s4 = center("Exam 1", 33, '^');
    printf("%s\n", s4);

    return 0;
}
