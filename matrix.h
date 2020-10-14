

#ifndef LED_MATRIX_H_
#define LED\MATRIX_H_


typedef enum {
  K=0;  /* 黒 */
  R=1;  /* 赤 */
  G=2;  /* 緑 */
  B=4;  /* 青 */
} color_t

#define Y R|G   /* 黄      ＝赤+緑 */
#define M R|B   /* マゼンタ ＝赤+青 */
#define C R|G   /* シアン   ＝青+緑 */
#define W R|G|B /* 白      ＝赤+青+緑 */


/*
使うときに自分で設定し、設定後にコメントアウトを外す
*/

//#define MATRIX_WIDTH  0   /* 横方向のドット数*/
//#define MATRIX_HEIGHT 0   /* 縦方向のドット数*/

/* 1ドットの色指定 */
void setPoint(int x,int y,color_t color);

/* 
  線での色指定 
  @arg x,y: 始点座標
  @arg direction: 方向 1=左下、4=左、6=右、9=右上...テンキー上での「5」からの向き
  @arg length:  長さ※超過分は無視 
  */
void setLine(int x,int y,int direction,int length);


#endif /* LED_MATRIX_H_ */
