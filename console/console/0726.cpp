#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#pragma region 빙고 과제 조건
/*
1. 빙고게임

    1
    5
    25


내가 1을 입력하면 숫자는 5x5

```
ㆍ
    5
        25

```

이렇게 바뀜
1줄을 만들면
빙고1줄 완성.  가로세로대각선 전부 체크해야함 종료조건 3줄되면 완성

1. 슬라이드 퍼즐게임 만들기
1
2
4
5	8
9	*
시작위치는 상관없음 내가왼쪽키를누르면
1
2
4
5	8
*	9
조건 = 칸을 벗어나면 안됨
배열 스왑
종료조건 없음
- /*/
#pragma endregion

int randbinggo();
int binggogame = 3;
int binggo = 0;
int binggoarr[5][5] = {};

int gameset();



int main()
{
    std::cout << "빙고를 시작하겠습니다." << std::endl;

    
   
  

}

//int randbinggo()
//{
//    int binggonum;
//    for (int i = 0; i < 25; i++)
//    {
//        binggonum = rand() % 25 + 1;
//    }
//    std::cout << binggonum << std::endl;
//    return 0;
//}

int gameset()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 4)
            {
                
                
            }


        }
    }
    return 0;
}
