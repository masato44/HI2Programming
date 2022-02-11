#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 迷路の高さと横幅(いずれも5以上の奇数) */
#define MAZE_HEIGHT 11
#define MAZE_WIDTH 13
/* 迷路で使う文字 */
#define CHAR_WALL '#'
#define CHAR_ROAD ' '
#define CHAR_START 'S'
#define CHAR_GOAL 'G'
/* 色を変更するコード */
#define ANSI_RESET  "\x1b[0m"      /* 色のリセット */
#define ANSI_YELLOW "\x1b[33m"     /* 黄 */

/* showmaze: mazeに応じて迷路を出力する */
void showmaze(char maze[MAZE_HEIGHT][MAZE_WIDTH]) {
	int i, j;
	for(i=0; i<MAZE_HEIGHT; i++) {
		for(j=0; j<MAZE_WIDTH; j++) {
			if(maze[i][j]==CHAR_START || maze[i][j]==CHAR_GOAL) {
				/* スタートかゴールなら黄色で出力する */
				printf(ANSI_YELLOW);
				putchar(maze[i][j]);
				printf(ANSI_RESET);
			} else {
				putchar(maze[i][j]);
			}
		}
		printf("\n");
	}
}

int main(void) {
	char maze[MAZE_HEIGHT][MAZE_WIDTH];
	int i, j;
	srand((unsigned)time(NULL));

	/* 外壁の設置 */
	for(i=0; i<MAZE_HEIGHT; i++) {
		for(j=0; j<MAZE_WIDTH; j++) {
			if(i==0 || i==MAZE_HEIGHT-1 || j==0 || j==MAZE_WIDTH-1)
				maze[i][j] = CHAR_WALL;
			else
				maze[i][j] = CHAR_ROAD;

			if(rand() %4==0 && maze[i-1][j]==CHAR_ROAD && i==2)
				maze[i-1][j] = CHAR_WALL;
			else if(rand() %3==0 && maze[i+1][j]==CHAR_ROAD)
				maze[i+1][j] = CHAR_WALL;
			else if(rand() %3==1 && maze[i][j-1]==CHAR_ROAD)
				maze[i][j-1] = CHAR_WALL;
			else if(rand() %3==2 && maze[i][j-1]==CHAR_ROAD)
				maze[i][j-1] = CHAR_WALL;
		}
	}

	/* スタートとゴールのセット */
	maze[1][1] = CHAR_START;
	maze[MAZE_HEIGHT-2][MAZE_WIDTH-2] = CHAR_GOAL;

	showmaze(maze);
	return 0;
}

