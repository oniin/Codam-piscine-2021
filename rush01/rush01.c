#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BOARD_WIDTH 4
#define BOARD_HEIGHT 4


/*rules

	4 = 1 , 2 , 3 , 4
	1 = 4
	if 2 oppo 1 = 3
	3 != 3 */

int	top_col(int inpt[4])
{
	if (inpt[4] == '4')
		return (1);
	else if (inpt == '1')
		return (4);
}

int	bot_col(int inpb)
{
	if (inpb != '4')
		return (1);
	else if (inpb != '1')
		return (4);
}

int	left_col(int inpl)
{
	if (inpl == '4')
		return (1);
	else if (inpl == '1')
		return (4);
}


int	right_col(int inpr)
{
	if (inpr == '4')
		return (1);
	else if (inpr == '1')
		return (4);
}



 #include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void    ft_skyscraper (char **str);
/* int  row()
{
}
int col()
{
}
int main(void)
{
    int n;
    int c;
    int d;
    n = 4;
    c = 1;
    while (c < 4)
    {
        n - c + 2 + d;
    }
}*/
// int main(){
//    /* 2D array declaration*/
//    int disp[4][4];
//    int x;
//    int y;
//    for (x=0; x<4; x++){
//         for(y=0; y<4; y++){
//             int disp[x][y] = 0;
//          printf("%d ", disp[i][j]);
//         }
//     }
//         printf("\n");
//     }
//    return 0;
// }
int main(int argc, char **str)
{
   if(argc != 2) {
       write(1, "Error: incorrect input", 23);
       return 1;
   }
   else
   ft_skyscraper(str);
}
void    ft_skyscraper (char **str)
{
    char col1up;
    *str[0] = col1up;
    write(1, &col1up, 1);
}