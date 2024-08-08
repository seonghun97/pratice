
/*
STL
- 프로그램에 필요한 자료구조와 알고리즘 템플릿으로 제공하는 라이브러리.

- 컨테이너: (객체를 보관하는 객체), 클래스 템플릿의 형태로 구현되어있음
ㄴ 각각의 원소에 접근할수 있도록 다양한 멤버함수를 제공
ㄴ 접근하는 방법은 직접 함수를 호출하거나, 반복자(iterator)라는 것을 이용해 접근

ㄴ 이터레이터 : 포인터와 비슷한 개념으로 컨테이너의 원소를 가리키고 
가리키는 원소에 접근하여 다음 원소를 가리키게 하는 기능

- 알고리즘 : 정렬, 삭제, 검색 등을 해결하는 일반화된 방법을 제공하는 함수 템플릿

- 시퀀스 컨테이너(선형) : 컨테이너 원소가 자신만의 삽입위치(순서)를 가지는 컨테이너
ㄴvector,list,deque
    ㄴ 젤많이씀
- 연관컨테이너(비 선형) : 저장원소가 삽입순서와 다르게 특정 정렬기준에 의해 자동정렬되는 컨테이너
ㄴ set, mulitset, map, multimap
                   ㄴ 젤많이씀  
*/

/*
-vector?
ㄴ가변길이 배열
ㄴ순차적으로 저장, 내부적으로 동적배열을 사용하여 크기를 자동으로 조절
ㄴ인덱스를 통해 임의의 원소에 접근가능(배열의[], 멤버함수 at)

*/
#include<iostream>
#include<vector>
int main()
{
    //사용법
    std::vector<int> v1; //빈 벡터 생성
    std::vector<int>v2(10); //10개의 기본값은 (0)으로 초기화된 벡터 생성
    std::vector<int>v3(10, 5); //10개의 요소를 5로 초기화한 벡터 생성
    std::vector<int>v4 = { 1,2,3,4,5,6,7,8,9,10 }; //초기화 리스트를 이용한 벡터 생성
    
    //size() 원소의 개수를 리턴해주는함수
    std::cout << "벡터의 사이즈 v1: " << v1.size() << std::endl;
    std::cout << "벡터의 사이즈 v2: " << v2.size() << std::endl;
    std::cout << "벡터의 사이즈 v3: " << v3.size() << std::endl;
    std::cout << "벡터의 사이즈 v4: " << v4.size() << std::endl;
    
    std::cout << "===================================" << std::endl;
    //capacity() 현재할당된 메모리내에서 저장할수있는 최대 원소의 갯수
    std::cout << "벡터의 capacity v1 : " << v1.capacity() << std::endl;
    std::cout << "벡터의 capacity v2 : " << v2.capacity() << std::endl;
    std::cout << "벡터의 capacity v3 : " << v3.capacity() << std::endl;
    std::cout << "벡터의 capacity v4 : " << v4.capacity() << std::endl;

    v4.push_back(11);
    std::cout << "벡터의 capacity v4(푸쉬백 후) : " << v4.capacity() << std::endl;
    
    //push_back()
    // 벡터의 끝에 새로운 데이터를 추가한다 
    //통상적으로 반정도를 늘려줌

    std::vector<int>v5;
    v5.push_back(1);
    v5.push_back(2);
    v5.push_back(3);
    v5.push_back(4);
    v5.push_back(5);
    std::cout << "===================================" << std::endl;
    for (int i = 0; i < v5.size(); i++)
    {
        std::cout << "for 문으로 벡터 v5 출력 : " << v5[i] << std::endl;
        //std::cout << "for 문으로 벡터 v5 출력 : " << v5.at(i) << std::endl;
    }
     
    //범위기반for문
    //복사 비용이 발생 ,참조의 형태로 하는게좋음
    for (int& i : v5) 
    {
        std::cout << "for 문으로 벡터 v5 출력 : " << i << std::endl;// 배열이나 at 쓰면안됨
    }
    //컨테이너의 모든 요소를 알아서 돔 반복의 범위를 자동으로 지정
    
    
    //컴파일러가 자동으로 타입을 추론함
    //복잡한 타입을 사용할때 유용함 , 남용하면안됨
    for (const auto& i : v5)
    {
        //i += 1;
    }
    //empty(): 벡터가 비어있는지 확인하는용도
    //clear(): 벡터의 모든 요소를 제거
    //at(): 벡터의 요소 접근
    //front(): 벡터의 첫번째 요소를 반환
    //back(): 벡터의 마지막 요소 반환
    //pop_back(): 벡터의 끝에서 요소를제거
    //push_back(): 벡터의 끝에 요소 추가
    //insert(): 지정한 위치에 요소를 삽입
    //erase(): 지정한 위치에 요소를 제거
    //reserve(): 벡터의 용량을 지정
    //swap():두 벡터를 교환
    std::cout << "===================================" << std::endl;
    std::vector<int> v6;
    v6.push_back(1);
    v6.push_back(2);
    v6.push_back(3);
    v6.push_back(4);
    v6.insert(v6.begin() + 1, 10);  //인덱스 1에 10삽입
    v6.erase(v6.begin() + 3);  //인덱스 3에 요소제거
    v6.pop_back();// 마지막요소 제거
    for (int& i : v6)
    {
        std::cout << i << std::endl;
    }
    // 순서
    //1,2,3,4로 시작했는대
    //1,10,2,3,4
    //1,10,2,4
    //1, 10 , 2  - 결과
    std::cout << "===================================" << std::endl;
    //iterator
    //포인터와 비슷한 녀석. 컨테이너의 저장된 원소를 순회하고 접근하는 방법
    //begin() -> 시작을 나타냄(실제 원소가 있는위치를 얘기함)
    //end() -> 실제 원소가 아닌 끝을 나타냄(마지막 요소의 다음)

    std::vector<int> v7;
    v7.push_back(1);
    v7.push_back(2);
    v7.push_back(3);
    v7.push_back(4);
    v7.push_back(5);

    std::cout << "---반복자로 출력" << std::endl;
    for (std::vector<int>::iterator it = v7.begin(); it != v7.end(); ++it) //바깥으로 빼서해라
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
    std::vector<int>::iterator iter = v8.begin(); // 시작원소를 가리키는 반복자
    std::cout << iter[0] << std::endl;
    std::cout << iter[1] << std::endl;
    std::cout << iter[2] << std::endl;
    std::cout << iter[3] << std::endl;
    std::cout << iter[4] << std::endl;
    std::cout << "===================================" << std::endl;

    iter += 2; //결과 3
    std::cout << *iter << std::endl;

    //for (std::vector<int>::reverse_iterator rit = v8.rbegin(); rit != v8.rend(); ++ rit) //역방향 반복자
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
    std::cout << "뻥튀기" << std::endl;
    for (auto& i : vec)
    {
        i *= 2;
    }
    for (auto it =vec.begin(); it !=vec.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}