#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#define WALL		1
#define CHARACTER	2
#define SPACE		0
#define	ITEM		4

#define height		7
#define width		33

void up(int** cur_position);
void down(int** cur_position);
void right(int** cur_position);
void left(int** cur_position);
void show(int[height][width]);

int score = 0;

int map[height][width];

int main(){



	return 0;
}

void up(int** cur_position)
{
   if (*(*cur_position - width) == SPACE)
   {
	   **cur_position = 0;
       *cur_position -= width;
       **cur_position = 2;
   }
   else if (*(*cur_position - width) == ITEM)
   {
	   **cur_position = 0; 
       *cur_position -= width;
       **cur_position = 2; score++; 
   }

  return ;
}
void down(int** cur_position)
{
   if (*(*cur_position + width) == SPACE)
     {
		  **cur_position = 0;
		  *cur_position += width;
		  **cur_position = 2;
     }
   else if (*(*cur_position + width) == ITEM)
    {
		 **cur_position = 0;
		 *cur_position += width;
		 **cur_position = 2;
		 score++;
    }
    return;
}
void right(int** cur_position)
{
   if (*(*cur_position + 1) == SPACE)
   {
	   **cur_position = 0;
	   *cur_position += 1;
	   **cur_position = 2;
   }
    else if (*(*cur_position + 1) == ITEM)
	{
		**cur_position = 0;
		*cur_position += 1;
		**cur_position = 2;
		score++; 
	}
    return;
}
void left(int** cur_position)
{
   if (*(*cur_position - 1) == SPACE)
   {
	   **cur_position = 0;
	   *cur_position -= 1;
	   **cur_position = 2;
   }
   else if (*(*cur_position - 1) == ITEM)
   {
	   **cur_position = 0;
	   *cur_position -= 1;
	   **cur_position = 2;
	   score++;
   }
    return;
}

