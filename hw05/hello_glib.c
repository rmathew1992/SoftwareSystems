#include <stdio.h>
#include <glib.h>
int main(int argc, char** argv) {
     GList* list = NULL;
     list = g_list_append(list, "Hello world!");
     char* first = g_list_first(list)->data;
     printf("'%s'\n", first);
     return 1;
}