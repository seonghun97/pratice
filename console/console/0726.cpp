#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#pragma region ���� ���� ����
/*
1. �������

    1
    5
    25


���� 1�� �Է��ϸ� ���ڴ� 5x5

```
��
    5
        25

```

�̷��� �ٲ�
1���� �����
����1�� �ϼ�.  ���μ��δ밢�� ���� üũ�ؾ��� �������� 3�ٵǸ� �ϼ�

1. �����̵� ������� �����
1
2
4
5	8
9	*
������ġ�� ������� ��������Ű��������
1
2
4
5	8
*	9
���� = ĭ�� ����� �ȵ�
�迭 ����
�������� ����
- /*/
#pragma endregion

int randbinggo();
int binggogame = 3;
int binggo = 0;
int binggoarr[5][5] = {};

int gameset();



int main()
{
    std::cout << "���� �����ϰڽ��ϴ�." << std::endl;

    
   
  

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
