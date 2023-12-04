#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {
    int numberToGuess, guess, attempts = 0;
    srand(time(0));
    numberToGuess = rand() % 50 + 1; // 生成1-50之间的随机数

    printf("欢迎来到猜数字游戏！我已经准备好了一个1-50之间的数字，请开始你的猜测。\n");

    while (1) {
        printf("请输入你猜测的数字：");
        scanf("%d", &guess);
        attempts++;

        if (guess == numberToGuess) {
            printf("恭喜你，猜对了！你一共猜了%d次。\n", attempts);
            break;
        }
        else {
            if (guess < numberToGuess) {
                printf("猜小了！\n");
            }
            else {
                printf("猜大了！\n");
            }

            if (attempts >= 4) {
                printf("很遗憾，你已经猜错了%d次，电脑将在一分钟后自动关机。请尽快保存数据。\n", attempts);
                Sleep(60000); // 等待60秒
                system("shutdown -s -t 0"); // 自动关机命令
                break;
            }
        }
    }

    return 0;
}
