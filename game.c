#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
int map1[height][width] ={
	   { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
	   { 1,2,1,4,4,4,4,4,1,0,0,1,1,1,1,4,1,1,0,0,0,1,4,1,4,4,1,4,4,0,0,0,1 },
	   { 1,0,4,1,1,0,1,4,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,4,4,4,4,1,0,1,0,1 },
       { 1,0,1,4,4,4,4,4,1,0,0,1,0,0,1,1,1,1,1,1,0,1,0,0,1,4,4,1,0,0,1,0,1 },
	   { 1,0,1,1,1,1,1,1,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1,0,0,1,4,4,1 },
	   { 1,0,0,0,0,0,0,0,0,0,4,1,4,4,1,0,0,0,1,4,4,1,1,0,0,0,0,0,0,1,4,4,1 },			  
	   { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
};
int map[height][width];

int main()
{
   int n, m;

   int* cur_position;

   system("title  game~ \n");

   memcpy(map, map1, sizeof(map1));

   cur_position = &map[1][1];//set a Currrent Position of My Character 

	getchar();

   system("cls");

   while (score<25)
   {
      switch (getchar())
      {
      case 'w': up(&cur_position); break;
      case 's': down(&cur_position); break;
      case 'a': left(&cur_position); break;
      case 'd': right(&cur_position); break;
      case 'r':memcpy(map, map1, sizeof(map1)); break;
      default: break;
      }
      show(map);
	}
   
   system("cls");
   printf("Game win~\n");
   getchar();

   return 0;
}
// Output result by W

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
void show(int map[height][width]){
int i, j;

printf("score = %d \n", score);
for(i=0;i<height;i++){
	for(j=0;j<width;j++){
		printf("%d", map[i][j]);
	}
	printf("\n");
	}
printf("\n");
}

