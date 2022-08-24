#include <iostream>
using namespace std;

class MyArray
{
    private:
        int *ary;
        int size;
    public:
        MyArray() // 디폴트 생성자
        {
            ary=0;
            size=0;
        };
        MyArray(int s); // 오버로딩 생성자
        MyArray(const MyArray &br); // 복사 생성자
        ~MyArray() // 소멸자
        {
            delete [] ary;
        }
        void put(int index, int val); //배열 요소에 저장
        int get(int index); //배열 요소의 값 사용
        int get_size() //배열 요소의 개수 확인
        {
            return size;
        }
        friend ostream &operator <<(ostream &os, const MyArray &br); //입출력 연산자 오버로딩
};

ostream &operator <<(ostream &os, const MyArray &br){
    // os << br.ary[0] << '/' << br.ary[1] << '/' << br.ary[2];
    // os << br.size;
    // return os;
    // 총점 :
    // 평균 : 
}

void MyArray::put(int index, int val){
   
};

int MyArray::get(int index){
    return 0;
};



int main()
{
    int a;
    int b;
    int c;
    cout << "세 과목의 점수 입력 : ";
    cin >> a >> b >> c;
    cout << a << " " << b << " " << c;


}