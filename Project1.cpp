/*숙제 12 - 1
1) 3->1,4,5  1->0,2   5->7,6  7->8,9
2)

숙제 12-2
v{A,B,C,D}  E{<A,B>,<B,D>,<C,D>}

  A  B  C  D     ( *== 의미없음)
A *  1  0  0
B 0  *  0  1
C 0  0  *  1
D 0  0  0  *

A->B->C->D
C->A->B->D

while(!Q.empty())
Q.pop(start point);
for i in adj[s]
pop adj[s]

숙제12-3 */
#include <iostream>

using namespace std;
void bfs(int v) {
	visited[v] = true;
	cout << getvertex(v);

	CircularQueue que;
	que.enqueue(v);

	while (!que.isempty()) {
		int v = que.dequeue();
		for (int w=0; w<size; w++)
			if (islink(v, w), && visited[w] == false) {
				visited[w] = true;
				cout << getvertex(w);
				que.enqueue(w);
			}
	}
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
