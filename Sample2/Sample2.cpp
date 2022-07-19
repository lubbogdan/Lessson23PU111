

#include <iostream>
#include <string>
using namespace std;
template<typename T>
class MyList {
private:
    T* strings;
    int capacity;
    int currentIndex;
    int size;
public:
    MyList(int capacity = 3)
    {
        this->currentIndex = 0;
        this->capacity = capacity;
        this->size = capacity;
        strings = new T[this->size];

    }
    void addElement(T element)
    {
        if (currentIndex >= size)
        {
            T* tmp = new T[this->size + capacity];
            for (int i = 0; i < this->size; i++)
            {
                tmp[i] = strings[i];
            }
            this->strings = tmp;

            this->size += this->capacity;
        }

        strings[currentIndex] = element;
        currentIndex++;
    }
    T getElement(int index)
    {
        if (index < this->size)
            return this->strings[index];

    }
    int getSize()
    {
        return this->currentIndex;
    }
};
struct date
{
    int year;
    int month;
    int day;
};
class National
{
private:
    string name;
    date birthday;
public:
    National()
    {

    }
    National(string name, date birthday)
    {
        this->name = name;
        this->birthday = birthday;
    }
    string getName()
    {
        return this->name;
    }
    void setName(string name)
    {
        this->name = name;
    }
    date getBirthday()
    {
        return this->birthday;
    }
    void setBirthday(date birthday)
    {
        this->birthday = birthday;
    }
};
class Country
{
private:
    MyList<National> people;
public:
    Country()
    {
       
    }
    
    void add(National p)
    {
        people.addElement(p);

    }
    void swowPeople()
    {
        for (int i = 0; i < people.getSize(); i++)
        {
            cout << people.getElement(i).getName() << people.getElement(i).getBirthday().year<< people.getElement(i).getBirthday().month<< people.getElement(i).getBirthday().day << endl;
        }
    }
};
int main()
{
    Country c;
    date d;
    d.year = 2000;
    d.month = 10;
    d.day = 10;
    National n1("Name1", d);
    c.add(n1);
    National n2("Name2", d);
    c.add(n2);
    c.swowPeople();
}


