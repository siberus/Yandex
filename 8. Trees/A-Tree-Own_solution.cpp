#include <iostream>

using namespace std;

class Tree
{
private:
    /* data */
    struct Element
    {
        /* data */
        int value = 0;
        int left = 0;
        int right = 0;
    };

    Element *element;

    int num = 0;
    
public:
    Tree(int data)
    {
        Element *newelement  = new Element [1];
        newelement->value = data;
        element = newelement;
        delete [] newelement;
        num = 1;
    };

    ~Tree();

    void add(int data)
    {
        num = num++;
        Element *newelement = new Element[num];
        for (int  i = 0; i < num - 1; i++)
        {
            newelement[i] = element[i];
        }
        newelement[num - 1].value = data;    
        element = newelement;
        delete [] newelement;
        
    }
   


};
