#include <stdio.h>
#include <stdlib.h>

void draw(void *u, int w, int h)
{
		char (*world)[w] = u;
		for (int y = 0; y < h; y++){
				for (int x = 0; x < w; x++)
							printf(world[y][x]? "+" : ".");
				printf("\n");
		}

}

void evolution(void *u, int w, int h)
{

}


int main()
{
		int w = 30;
		int h = 30;
		char world[w][h];
		for(int x =0; x < w; x++)
				for (int y = 0; y < h; y++)
						world[y][x] = rand() < RAND_MAX / 10 ? 1 : 0;
		
		draw(world, w, h);
		return 0;
}
