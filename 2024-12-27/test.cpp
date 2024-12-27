#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    Animal() {}
    virtual void makesound() = 0;
};

class Dog : public Animal
{
public:
    void makesound()
    {
        cout << "Dog: Bowwow!" << endl;
    }
private:
    string m_word;
};

class Cat : public Animal
{
public:
    void makesound()
    {
        cout << "Cat: MEOW" << endl;
    }
private: 
    string m_word;
};

class Cow : public Animal
{
public:
    void makesound()
    {
        cout << "Cow: Moooo~" << endl;
    }
private:
    string m_word;
};

int main() 
{
    Animal* howling[3];
    Dog doghow;
    Cat cathow;
    Cow cowhow;

    howling[0] = &doghow;
    howling[0] -> makesound();

    howling[1] = &cathow;
    howling[1] -> makesound();

    howling[2] = &cowhow;
    howling[2] -> makesound();
    
    for (int i = 0; i < 3; ++i)
    {
        cout << "이하 반복문으로 출력한 울음소리 입니다." << endl;
        howling[i];
        howling[i] -> makesound();
    }


    return 0;
}



//Dog(string word) :m_word(word) {} <--- 이거 무슨 역할인지 알아보기