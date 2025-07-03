#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int size;

    public:
        Array(int value = 10)
        {
            cout<<"Inside constructor\n";
            this->size = value;
            this->Arr = new int[size];
        }

        Array(Array &ref)
        {
            cout<<"Inside copy constructor\n";
            this->size = ref.size;
            this->Arr = new int[this->size];
            for(int i = 0; i < size; i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        } 

        ~Array()
        {
            cout<<"Inside Destructor\n";
            delete [] Arr;
        }

        inline void Accept();
        inline void Display();
};

void Array::Accept()
{
    cout << "Please enter the values:\n";
    for(int i = 0; i < this->size; i++)
    {
        cin >> Arr[i];
    }
}

void Array::Display()
{
    cout << "Array elements are:\n";
    for(int i = 0; i < this->size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

class ArrSearch : public Array
{
    public:
        ArrSearch(int no = 10) : Array(no) {}

        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

int ArrSearch::SearchFirst(int value)
{
    for(int i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            return i; // return index
        }
    }
    return -1;
}

int ArrSearch::Frequency(int value)
{
    int icnt = 0;
    for(int i = 0; i < size; i++)
    {
        if(Arr[i] == value)
        {
            icnt++;
        }
    }
    return icnt;
}

int ArrSearch::SearchLast(int value)
{
    for(int i = size - 1; i >= 0; i--)
    {
        if(Arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int ArrSearch::EvenCount()
{
    int cnt = 0;
    for(int i = 0; i < size; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            cnt++;
        }
    }
    return cnt;
}

int ArrSearch::OddCount()
{
    int cnt = 0;
    for(int i = 0; i < size; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            cnt++;
        }
    }
    return cnt;
}

int ArrSearch::SumAll()
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += Arr[i];
    }
    return sum;
}

int main()
{
    cout << "Inside main\n";
    ArrSearch sobj1(5);

    sobj1.Accept();
    sobj1.Display();

    int iRet = sobj1.Frequency(11);
    cout << "Frequency of 11 is: " << iRet << "\n";

    cout << "Even count: " << sobj1.EvenCount() << "\n";
    cout << "Odd count: " << sobj1.OddCount() << "\n";
    cout << "Sum of all elements: " << sobj1.SumAll() << "\n";

    return 0;
}
