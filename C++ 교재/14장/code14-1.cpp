#include <iostream>
using namespace std;

class Animal
{
    public:
        virtual void Run()
        {
            cout << "동물이 달린다." << endl;
        }
};

class Dog :public Animal
{
    public:
        virtual void Run()
        {
            cout << "강아지가 달린다." << endl;
        }
};

class Cat :public Animal
{
    public:
        virtual void Run()
        {
            cout << "고양이가 달린다." << endl;
        }
};

int main()
{
    Animal* p;
    Dog dog;
    Cat cat;
    p=&dog;
    p->Run();
    p=&cat;
    p->Run();
    return 0;
}