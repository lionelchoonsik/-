/*1. 덱은 스택의 기능과 큐의 기능을 모두 합니다. 그렇다면 왜 덱을 쓰지 않고 스택과 큐를 쓸까요? 
 
 
 
 연습문제 6번 큐에 항목들을 삽입하고 삭제하는 연산은 시간 복잡도가 어떻게 되는가?- 답: 1번
 


/프로그래밍 프로젝트 미팅 주선 프로그램*(1)(2)번*/
#include <iostream>

#include <cstdlib>

#include <cstring>

using namespace std;
#define MAX_QUEUE_SIZE 100

inline void error(char* str)

{
    cout << str << endl;
    exit(1);
}



class CircularStudent

{
protected:

    int a; //첫 번째 위치
    int b; //마지막  위치
    char** r;

public:

    CircularStudent()

    {

        a = b = 0;

        r = new char* [MAX_QUEUE_SIZE];

        for (int i = 0; i < MAX_QUEUE_SIZE; i++)

            r[i] = new char[20];

    }

    ~CircularStudent()

    {

        for (int i = 0; i < MAX_QUEUE_SIZE; i++)

            delete[]r[i];

        delete[]r;

    }

    bool isEmpty()

    {

        return a == b;

    }

    bool isFull()

    {

        return (b + 1) % MAX_QUEUE_SIZE == a;

    }
 //큐에 삽입
    void enqueue(char* name)

    {

        if (isFull())

            error("Q is empty");

        else

        {

            b = (b + 1) % MAX_QUEUE_SIZE;

            strcpy(r[b], name);

        }

    }

    char* dequeue()

    {

        if (isEmpty())

            error("Q is empty");

        else

        {

            a = (a + 1) % MAX_QUEUE_SIZE;

            return r[a];

        }

    }

    char* peek() // 반환 값

    {

        if (isEmpty())

            error("Q is empty");

        else

            return r[(a + 1) % MAX_QUEUE_SIZE];

    }

    void display() //큐의 모든 내용을 순서대로 출력

    {

        cout << "학생 : ";

        if (!isEmpty())

        {

            int maxi = (a < b) ? b : b + MAX_QUEUE_SIZE;

            for (int i = a + 1; i <= maxi; i++)

                cout << r[i % MAX_QUEUE_SIZE] << " ";

        }

        else

         cout << "학생이 없습니다";
        cout << endl;

    }

};



// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
