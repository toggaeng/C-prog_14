/*
HW NUMBER: 2
FILE NAME: SolutionToCH4Problems.c
AUTHOR: ���������к� 1�г� C235196 ������
YYYYMMDD: 20241010
PURPOSE: 4���� Programming ����: 01,02,03,04,08,10 �� ���� �ַ�� �ڵ带 ������ ���� ������� 
�ҽ������� �ۼ��� ��, ���α׷� �������� �Բ� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // Include the standard input/output header file to use functions like printf and scanf
//#include <windows.h>  //10�� ���� Sleep()�Լ� ����� �� �ʿ�

int main() {
    //���� 01 �ַ�� �ҽ��ڵ� 
    /*
    double real_num; //�Է¹��� �Ǽ�

    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%lf", &real_num);

    printf("�Ǽ��������δ� %lf�Դϴ�.\n", real_num); //�Է¹��� �Ǽ��� ���
    printf("�����������δ� %e�Դϴ�.\n", real_num);  //%e�� �̿��� �Է¹��� �Ǽ��� ������������ ���
    */



    //���� 02 �ַ�� �ҽ��ڵ� 
    /*
    int int_16; //�Է¹��� 16���� ����

    printf("16���� ������ �Է��Ͻÿ�: ");
    scanf("%x", &int_16);

    printf("8�����δ� %#o�Դϴ�.\n", int_16); //�Է¹��� 16���� ������ 8������ ��ȯ �� ���
    printf("10�����δ� %#d�Դϴ�.\n", int_16); //�Է¹��� 16���� ������ 10������ ��ȯ �� ���
    printf("16�����δ� %#x�Դϴ�.\n", int_16); //�Է¹��� 16���� ������ 16������ ���
    */



    //���� 03 �ַ�� �ҽ��ڵ� 
    /*
    int x, y, tmp;
    x = 10;
    y = 20;

    printf("x=%d y=%d\n", x, y); //x,y�� ���

    tmp = x; //����ִ� tmp�� x�� ����(x�� ����)
    x = y; // x�� y�� ����
    y = tmp; //y�� tmp�� ����(�ʱ� x�� ����)

    printf("x=%d y=%d\n", x, y); //��ȯ�� x,y�� ���
    */



    //���� 04 �ַ�� �ҽ��ڵ� 
    /*
    double box_lenght,box_width,box_height,box_volume; //������� ������ ����, �ʺ�, ����, ����

    printf("������ ���� ���� ���̸� �� ���� �Է�: ");
    scanf("%lf %lf %lf", &box_lenght, &box_width, &box_height); //doubleŸ������ ������ ����, �ʺ�, ���� �Է¹ޱ�

    box_volume = box_lenght * box_width * box_height; // ������ ���� ���(����=����*�ʺ�*����)
    printf("������ ���Ǵ� %lf�Դϴ�.", box_volume);
    */



    //���� 08 �ַ�� �ҽ��ڵ� 
    /*
    int asc_num;

    printf("�ƽ�Ű �ڵ尪�� �Է��Ͻÿ�: ");
    scanf("%d", &asc_num); //�ƽ�Ű �ڵ尪 �Է¹ޱ�


    printf("����: %c�Դϴ�.\n",asc_num); //�ƽ�Ű �ڵ尪->���� ��ȯ
    */



    //���� 10 �ַ�� �ҽ��ڵ� 
    /*
    char beep = '\a';// \a�� ������� ��Ÿ���� Ư������
    printf("%c", beep); //����� ���
    //Sleep(1000);      //������� �︮�� 1�� �� �Ʒ� ������ ���
    printf("ȭ�簡 �߻��Ͽ����ϴ�.\n");
    //Sleep(1000);      //������ ��µǰ� 1�� �� ������� �︲
    printf("%c", beep);

    //���� Sleep()�� ���� ������ >������� �︮��, ������ ��µǰ�, ������� �︮�� ��<��\
    �ʹ� ������ ����Ǿ ���ʷ� ������ �Ǵ� ���� �´��� Ȯ���ϴ� �뵵�� ����

    */
    return 0; // Return 0 to indicate that the program ended successfully
}