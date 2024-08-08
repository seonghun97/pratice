
/*
STL
- ���α׷��� �ʿ��� �ڷᱸ���� �˰��� ���ø����� �����ϴ� ���̺귯��.

- �����̳�: (��ü�� �����ϴ� ��ü), Ŭ���� ���ø��� ���·� �����Ǿ�����
�� ������ ���ҿ� �����Ҽ� �ֵ��� �پ��� ����Լ��� ����
�� �����ϴ� ����� ���� �Լ��� ȣ���ϰų�, �ݺ���(iterator)��� ���� �̿��� ����

�� ���ͷ����� : �����Ϳ� ����� �������� �����̳��� ���Ҹ� ����Ű�� 
����Ű�� ���ҿ� �����Ͽ� ���� ���Ҹ� ����Ű�� �ϴ� ���

- �˰��� : ����, ����, �˻� ���� �ذ��ϴ� �Ϲ�ȭ�� ����� �����ϴ� �Լ� ���ø�

- ������ �����̳�(����) : �����̳� ���Ұ� �ڽŸ��� ������ġ(����)�� ������ �����̳�
��vector,list,deque
    �� �����̾�
- ���������̳�(�� ����) : ������Ұ� ���Լ����� �ٸ��� Ư�� ���ı��ؿ� ���� �ڵ����ĵǴ� �����̳�
�� set, mulitset, map, multimap
                   �� �����̾�  
*/

/*
-vector?
���������� �迭
������������ ����, ���������� �����迭�� ����Ͽ� ũ�⸦ �ڵ����� ����
���ε����� ���� ������ ���ҿ� ���ٰ���(�迭��[], ����Լ� at)

*/
#include<iostream>
#include<vector>
int main()
{
    //����
    std::vector<int> v1; //�� ���� ����
    std::vector<int>v2(10); //10���� �⺻���� (0)���� �ʱ�ȭ�� ���� ����
    std::vector<int>v3(10, 5); //10���� ��Ҹ� 5�� �ʱ�ȭ�� ���� ����
    std::vector<int>v4 = { 1,2,3,4,5,6,7,8,9,10 }; //�ʱ�ȭ ����Ʈ�� �̿��� ���� ����
    
    //size() ������ ������ �������ִ��Լ�
    std::cout << "������ ������ v1: " << v1.size() << std::endl;
    std::cout << "������ ������ v2: " << v2.size() << std::endl;
    std::cout << "������ ������ v3: " << v3.size() << std::endl;
    std::cout << "������ ������ v4: " << v4.size() << std::endl;
    
    std::cout << "===================================" << std::endl;
    //capacity() �����Ҵ�� �޸𸮳����� �����Ҽ��ִ� �ִ� ������ ����
    std::cout << "������ capacity v1 : " << v1.capacity() << std::endl;
    std::cout << "������ capacity v2 : " << v2.capacity() << std::endl;
    std::cout << "������ capacity v3 : " << v3.capacity() << std::endl;
    std::cout << "������ capacity v4 : " << v4.capacity() << std::endl;

    v4.push_back(11);
    std::cout << "������ capacity v4(Ǫ���� ��) : " << v4.capacity() << std::endl;
    
    //push_back()
    // ������ ���� ���ο� �����͸� �߰��Ѵ� 
    //��������� �������� �÷���

    std::vector<int>v5;
    v5.push_back(1);
    v5.push_back(2);
    v5.push_back(3);
    v5.push_back(4);
    v5.push_back(5);
    std::cout << "===================================" << std::endl;
    for (int i = 0; i < v5.size(); i++)
    {
        std::cout << "for ������ ���� v5 ��� : " << v5[i] << std::endl;
        //std::cout << "for ������ ���� v5 ��� : " << v5.at(i) << std::endl;
    }
     
    //�������for��
    //���� ����� �߻� ,������ ���·� �ϴ°�����
    for (int& i : v5) 
    {
        std::cout << "for ������ ���� v5 ��� : " << i << std::endl;// �迭�̳� at ����ȵ�
    }
    //�����̳��� ��� ��Ҹ� �˾Ƽ� �� �ݺ��� ������ �ڵ����� ����
    
    
    //�����Ϸ��� �ڵ����� Ÿ���� �߷���
    //������ Ÿ���� ����Ҷ� ������ , �����ϸ�ȵ�
    for (const auto& i : v5)
    {
        //i += 1;
    }
    //empty(): ���Ͱ� ����ִ��� Ȯ���ϴ¿뵵
    //clear(): ������ ��� ��Ҹ� ����
    //at(): ������ ��� ����
    //front(): ������ ù��° ��Ҹ� ��ȯ
    //back(): ������ ������ ��� ��ȯ
    //pop_back(): ������ ������ ��Ҹ�����
    //push_back(): ������ ���� ��� �߰�
    //insert(): ������ ��ġ�� ��Ҹ� ����
    //erase(): ������ ��ġ�� ��Ҹ� ����
    //reserve(): ������ �뷮�� ����
    //swap():�� ���͸� ��ȯ
    std::cout << "===================================" << std::endl;
    std::vector<int> v6;
    v6.push_back(1);
    v6.push_back(2);
    v6.push_back(3);
    v6.push_back(4);
    v6.insert(v6.begin() + 1, 10);  //�ε��� 1�� 10����
    v6.erase(v6.begin() + 3);  //�ε��� 3�� �������
    v6.pop_back();// ��������� ����
    for (int& i : v6)
    {
        std::cout << i << std::endl;
    }
    // ����
    //1,2,3,4�� �����ߴ´�
    //1,10,2,3,4
    //1,10,2,4
    //1, 10 , 2  - ���
    std::cout << "===================================" << std::endl;
    //iterator
    //�����Ϳ� ����� �༮. �����̳��� ����� ���Ҹ� ��ȸ�ϰ� �����ϴ� ���
    //begin() -> ������ ��Ÿ��(���� ���Ұ� �ִ���ġ�� �����)
    //end() -> ���� ���Ұ� �ƴ� ���� ��Ÿ��(������ ����� ����)

    std::vector<int> v7;
    v7.push_back(1);
    v7.push_back(2);
    v7.push_back(3);
    v7.push_back(4);
    v7.push_back(5);

    std::cout << "---�ݺ��ڷ� ���" << std::endl;
    for (std::vector<int>::iterator it = v7.begin(); it != v7.end(); ++it) //�ٱ����� �����ض�
    {
        std::cout << *it << std::endl;
    }
    
    std::vector<int> v8;
    v8.push_back(1);
    v8.push_back(2);
    v8.push_back(3);
    v8.push_back(4);
    v8.push_back(5);
    std::cout << "===================================" << std::endl;
    std::vector<int>::iterator iter = v8.begin(); // ���ۿ��Ҹ� ����Ű�� �ݺ���
    std::cout << iter[0] << std::endl;
    std::cout << iter[1] << std::endl;
    std::cout << iter[2] << std::endl;
    std::cout << iter[3] << std::endl;
    std::cout << iter[4] << std::endl;
    std::cout << "===================================" << std::endl;

    iter += 2; //��� 3
    std::cout << *iter << std::endl;

    //for (std::vector<int>::reverse_iterator rit = v8.rbegin(); rit != v8.rend(); ++ rit) //������ �ݺ���
    //{

    //}

    /*for (std::vector<int>::iterator it = v7.begin(); it !=v7.end(); ++it)
    {
        std::cout << *it << std::endl;
    }*/
    std::cout << "===================================" << std::endl;

    std::vector<int>vec = { 10,20,30,40,50 };
    for (auto it = vec.begin(); it!=vec.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
    std::cout << "��Ƣ��" << std::endl;
    for (auto& i : vec)
    {
        i *= 2;
    }
    for (auto it =vec.begin(); it !=vec.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}