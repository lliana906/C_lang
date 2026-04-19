#include <stdio.h>  //표준 입출력 담당


//메인 함수 기본 
int main()
{
    printf("hello world!\n");
    printf(" %s  %d \n  %c\n"," hello \n ",12, 'a' );  //s : 문자열  /  d : 숫자    /c : 문자
    printf ("%10d  %10d\n", 12,23);  //우측 정렬
    printf ("%-10d  %-10d\n", 62,23);  //좌측 정렬
    return 0;
}

