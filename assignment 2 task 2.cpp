// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 2 - Problem 7
// Program: Problem 7
// Author:  Taqi Ishaq Mayoof
// Date:    1 october 2018
// Version: 1.0

#include <cstdlib>
#include <iostream>
#include <string>
#include <valarray>
using namespace std;
//calling the error function
void error (string message);
//creating size and valarray to store data.
const int SIZE = 20;
valarray<char> data(SIZE);
int z;
//creating class.
class val
{
private:
    int size;
public:

    val()
    {
        size=0;
    }
//function to check whether the stack is empty printing underflow and if the stack isnt empty decreasing the size by 1.
    char pop()
    {
        if (size == 0)
            error("Underflow");
        return data[--size];
    }
//function to add elements to the stack.
    void push(char v)
    {
        if (size == SIZE)
            error("Overflow");
        data[size++] = v;
    }
//function to erase the stack content and makes size = 0
    void Clear()
    {
        size=0;
    }
//function to return true if the stack is empty and returning false if not
    bool isEmpty()
    {
        if (size==0)
        {
            cout << true;
            return true;
        }
        else
        {
            cout << false;
            return false;
        }
    }
//function to get the size of the stack.
    int getSize()
    {
        return sizeof(data)-sizeof(data[0]);

    }

};
//function to detect error
void error (string message)
{
    cout << "\n" << message << "\n";
    exit (1);
}

int main ()
{
    int ch;
    val stack;
//adding elements to the stack.
    stack.push ('a');
    stack.push ('b');
    stack.push ('c');
    stack.push ('d');
//    stack.push ('e');
//    stack.push ('f');
//    stack.push ('g');
//    stack.push ('h');

    cout << "1-print stack \n2-stack clear \n3-boolean return true \n4-get size\n";
    cin >> ch;

    switch(ch)
    {
    case 1:
    {
//decreasing the size of stack and printing the deleted one.
        cout << stack.pop() << " ";
        cout << stack.pop() << " ";
        cout << stack.pop() << " ";
        cout << stack.pop() << " ";
        cout << stack.pop() << " ";
        cout << stack.pop() << " ";
        cout << stack.pop() << " ";
        cout << stack.pop() << " ";
//printing the underflow.
        cout << stack.pop() << " ";

        break;
    }

    case 2:
    {
//erasing the stack
        stack.Clear();
        cout << stack.pop() << " ";
        break;
    }
    case 3:
    {
//checking if the stack is empty
        stack.isEmpty();
        break;
    }
    case 4:
    {
//printing the size of the stack.
        cout << stack.getSize()<< endl;
        break;
    }
    }
}

