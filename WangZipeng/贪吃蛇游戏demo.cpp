#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // 仅适用于Windows平台，如果使用其他平台，请考虑使用相应的库

// 定义游戏区域的大小
#define WIDTH 30
#define HEIGHT 10

// 定义玩家结构体
typedef struct {
    int x, y;
    int isJumping;
    int jumpHeight;
} Player;

// 定义游戏地图
char gameMap[HEIGHT][WIDTH];

// 初始化游戏地图
void initGameMap() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            gameMap[i][j] = ' ';
        }
    }
}

// 绘制游戏地图
void drawGameMap() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%c", gameMap[i][j]);
        }
        printf("\n");
    }
}

// 清除屏幕
void clearScreen() {
    system("cls"); // 仅适用于Windows平台，如果使用其他平台，请考虑使用相应的清屏命令
}

// 绘制玩家
void drawPlayer(Player player) {
    gameMap[player.y][player.x] = 'P';
}

// 更新玩家位置
void updatePlayer(Player* player) {
    if (player->isJumping) {
        if (player->jumpHeight > 0) {
            player->y--;
            player->jumpHeight--;
        }
        else {
            player->isJumping = 0;
        }
    }
    else {
        if (player->y < HEIGHT - 1) {
            player->y++;
        }
    }
}

int main() {
    Player player = { 5, HEIGHT - 1, 0, 0 };
    initGameMap();

    char input;
    int frame = 0;

    while (1) {
        if (_kbhit()) {
            input = _getch();
            if (input == ' ' && !player.isJumping) {
                player.isJumping = 1;
                player.jumpHeight = 3; // 控制跳跃高度
            }
        }

        updatePlayer(&player);
        clearScreen();
        drawPlayer(player);
        drawGameMap();

        // 每帧的延迟时间，可以调整以控制游戏速度
        for (int i = 0; i < 500000; i++);

        frame++;
    }

    return 0;
}
