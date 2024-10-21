/*
HW NUMBER: 2
FILE NAME: SolutionToCH4Problems.c
AUTHOR: 자율전공학부 1학년 C235196 송은수
YYYYMMDD: 20241010
PURPOSE: 4장의 Programming 문제: 01,02,03,04,08,10 에 대한 솔루션 코드를 다음과 같은 방식으로 
소스파일을 작성한 후, 프로그램 실행결과와 함께 제출
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // Include the standard input/output header file to use functions like printf and scanf
//#include <windows.h>  //10번 문제 Sleep()함수 사용할 때 필요

int main() {
    //문제 01 솔루션 소스코드 
    /*
    double real_num; //입력받을 실수

    printf("실수를 입력하시오: ");
    scanf("%lf", &real_num);

    printf("실수형식으로는 %lf입니다.\n", real_num); //입력받은 실수를 출력
    printf("지수형식으로는 %e입니다.\n", real_num);  //%e를 이용해 입력받은 실수를 지수형식으로 출력
    */



    //문제 02 솔루션 소스코드 
    /*
    int int_16; //입력받을 16진수 정수

    printf("16진수 정수를 입력하시오: ");
    scanf("%x", &int_16);

    printf("8진수로는 %#o입니다.\n", int_16); //입력받은 16진수 정수를 8진수로 변환 후 출력
    printf("10진수로는 %#d입니다.\n", int_16); //입력받은 16진수 정수를 10진수로 변환 후 출력
    printf("16진수로는 %#x입니다.\n", int_16); //입력받은 16진수 정수를 16진수로 출력
    */



    //문제 03 솔루션 소스코드 
    /*
    int x, y, tmp;
    x = 10;
    y = 20;

    printf("x=%d y=%d\n", x, y); //x,y값 출력

    tmp = x; //비어있는 tmp에 x값 대입(x값 저장)
    x = y; // x에 y값 대입
    y = tmp; //y에 tmp값 대입(초기 x값 저장)

    printf("x=%d y=%d\n", x, y); //교환된 x,y값 출력
    */



    //문제 04 솔루션 소스코드 
    /*
    double box_lenght,box_width,box_height,box_volume; //순서대로 상자의 길이, 너비, 높이, 부피

    printf("상자의 가로 세로 높이를 한 번에 입력: ");
    scanf("%lf %lf %lf", &box_lenght, &box_width, &box_height); //double타입으로 상자의 길이, 너비, 높이 입력받기

    box_volume = box_lenght * box_width * box_height; // 상자의 부피 계산(부피=길이*너비*부피)
    printf("상자의 부피는 %lf입니다.", box_volume);
    */



    //문제 08 솔루션 소스코드 
    /*
    int asc_num;

    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &asc_num); //아스키 코드값 입력받기


    printf("문자: %c입니다.\n",asc_num); //아스키 코드값->문자 변환
    */



    //문제 10 솔루션 소스코드 
    /*
    char beep = '\a';// \a는 경고음을 나타내는 특수문자
    printf("%c", beep); //경고음 출력
    //Sleep(1000);      //경고음이 울리고 1초 후 아래 문장이 출력
    printf("화재가 발생하였습니다.\n");
    //Sleep(1000);      //문장이 출력되고 1초 후 경고음이 울림
    printf("%c", beep);

    //위에 Sleep()을 넣은 이유는 >경고음이 울리고, 문장이 출력되고, 경고음이 울리는 것<이\
    너무 빠르게 진행되어서 차례로 진행이 되는 것이 맞는지 확인하는 용도로 넣음

    */
    return 0; // Return 0 to indicate that the program ended successfully
}