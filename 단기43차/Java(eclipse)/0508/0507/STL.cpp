/*붕어빵을 만드는 붕어빵 틀 => 템플릿(목적을 가지고 함수나 클래스를 만듦)
STL에서는 container(데이터 저장의 목적을 가지고 있는 놈,데이터 저장소)
반복자, 알고리즘함수가 지원됨
배열 형태의 자료구조 성질 => vector(배열을 상상)라는 컨테이너 ex) vi.begin();=> 배열의 첫번째 인덱스
클래스안에 클래스가 정의될 수 있다 'A::B b;' 외부에서 쓸려면 A클래스안에 있는 B라는 클래스이다
class A { class B { } }
*/

#include <iostream>
#include <vector> //배열 자료구조
#include <algorithm> // sort 함수
using namespace std;

void exam1()
{
	//int 타입을 저장하는 vector 컨테이너를 만드는 방법
	vector<int> vec;

	//저장
	vec.push_back(10);	//0번째에 10을 저장
	vec.push_back(20);	//1번째에 저장
	vec.push_back(30);	//2번째에 저장
	vec.push_back(40);	//3번째에 저장
	vec.push_back(50);	//4번째에 저장

	//반복자(iterator)
	vector<int>::iterator itr = vec.begin();
	cout << *itr << endl;		//10
	itr = itr + 2;
	cout << *itr << endl;		//30 itr은 주소라고 생각해라
}

void exam2()
{
	//char 타입을 저장하는 vector 컨테이너를 만드는 방법
	vector<char> vec;

	//저장
	vec.push_back('a');	//0번째에 a를 저장
	vec.push_back('b');	//1번째에 저장
	vec.push_back('c');	//2번째에 저장
	vec.push_back('d');	//3번째에 저장
	vec.push_back('e');	//4번째에 저장

						//반복자(iterator)
	vector<char>::iterator itr = vec.begin();
	cout << *itr << endl;		//a
	itr = itr + 2;
	cout << *itr << endl;		//c itr은 주소라고 생각해라
}

//정수를 저장하는 vector컨테이너 생성하고
//랜덤하게 정수 100개 저장할래
void exam3()
{
	vector<int> vec; //정수를 저장할 수 있는 벡터 컨테이너가 만들어짐

	//랜덤 100개 저장
	srand((unsigned int)time_t(0)); //랜덤에 대한 초기화
	for (int i = 0; i < 100; i++)
	{
		vec.push_back(rand());
	}

	//정렬
	sort(vec.begin(), vec.end());	//#include <algorithm>

	//출력
	vector<int>::iterator begin = vec.begin();
	vector<int>::iterator end = vec.end();
	for (; begin != end; begin++)
	{
		int value = *begin;
		cout << value << "\t";
	}
	cout << endl;
}

int main()
{
	//exam1();
	//exam2();
	exam3();
	return 0;
}