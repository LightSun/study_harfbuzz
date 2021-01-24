//
// Created by Administrator on 2021/1/23 0023.
//

#include <cstring>
#include <cstdlib>

char * merge(const char *s1, const char *s2) {
    char *result = static_cast<char *>(malloc(strlen(s1) + strlen(s2) + 1));//+1 for the zero-terminator
    //in real code you would check for errors in malloc here
    if (result == NULL)
        return NULL;
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}