#include <stdio.h>

#define NUM_OF_ELEMENTS (8)
#define NUM_OF_DIRECTIONS (8)


int
main(void)
{
  int position; /* 石の位置 */
  int row, column;
  int way; /* 方向 */
  int row_vector, column_vector; /* 方向に対応した増分 */

  printf("現在の石の位置(2桁の整数dd): ");
  scanf("%d", &position);

  row = position / 10;
  column = position % 10;
  
  printf("どの方向を検査しますか(0が真上で右回りに7まで): ");
  scanf("%d", &way);
  switch(way) {
      case 0:{
                 row_vector=1;
                 column_vector=0;
                 break;
             }
             case 1:{
                 row_vector=1;
                 column_vector=1;
             }
             case 2:{
                 row_vector=0;
                 column_vector=1;
             }
             case 3:{
                 row_vector=-1;
                 column_vector=1;
             }
             case 4:{
                 row_vector=-1;
                 column_vector=0;
             }
             case 5:{
                 row_vector=-1;
                 column_vector=-1;
             }
             case 6:{
                 row_vector=0;
                 column_vector=-1;
             }
             case 7:{
                 row_vector=1;
                 column_vector=-1;
             }
default: break;
  }
  row += row_vector; column += column_vector; /* 隣接要素の位置 */

  if(row<0||row>7)
    printf("方向 %d の隣の要素は盤面内にありません\n", way);
  else if(column<0||column>7)
    printf("方向 %d の隣の要素は盤面内にありません\n", way);
  else
    printf("方向 %d の隣の要素は盤面内です\n", way);
    
  return 0;
}
