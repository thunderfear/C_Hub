#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {
    int numberToGuess, guess, attempts = 0;
    srand(time(0));
    numberToGuess = rand() % 50 + 1; // ����1-50֮��������

    printf("��ӭ������������Ϸ�����Ѿ�׼������һ��1-50֮������֣��뿪ʼ��Ĳ²⡣\n");

    while (1) {
        printf("��������²�����֣�");
        scanf("%d", &guess);
        attempts++;

        if (guess == numberToGuess) {
            printf("��ϲ�㣬�¶��ˣ���һ������%d�Ρ�\n", attempts);
            break;
        }
        else {
            if (guess < numberToGuess) {
                printf("��С�ˣ�\n");
            }
            else {
                printf("�´��ˣ�\n");
            }

            if (attempts >= 4) {
                printf("���ź������Ѿ��´���%d�Σ����Խ���һ���Ӻ��Զ��ػ����뾡�챣�����ݡ�\n", attempts);
                Sleep(60000); // �ȴ�60��
                system("shutdown -s -t 0"); // �Զ��ػ�����
                break;
            }
        }
    }

    return 0;
}
