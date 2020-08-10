#ifndef __DEBUG__
#define __DEBUG__
#if DEBUG>0
    #include <stdio.h>
    #define lDebug(level, fmt, ...) \
        do { \
        if (DEBUG >= level) \
            if (level == 1) \
                printf( "(%s) " fmt "\n","ERROR",##__VA_ARGS__); \
            else if (level == 2) \
                printf( "(%s) " fmt "\n","INFO",##__VA_ARGS__); \
            else if (level == 3) \
                printf( "(%s) " fmt "\n","DEBUG",##__VA_ARGS__); \
        } while(0)
    #define debugX(level,name,len) \
        if (DEBUG>=level){ \
            if (level == 1) \
                printf("(%s) %s: ", "ERROR", #name); \
            else if (level == 2) \
                printf("(%s) %s: ", "INFO", #name); \
            else if (level == 3) \
                printf("(%s) %s: ", "DEBUG", #name); \
        int i; \
        for(i=0;i<len;i++) \
            printf("%02x",name[i]); \
        printf("\n"); \
        }
    #define debugV(name) #name,(name)
#else
    #define lDebug(...)
    #define debugV(name) 
    #define vDebug(fmt, name) 
    #define debug(fmt, ...)
    #define debugX(level,name,len)
#endif
#endif
