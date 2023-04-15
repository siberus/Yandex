#include <iostream>

using namespace std;

class Tree
{
private:
    /* data */
    struct Element
    {
        /* data */
        int id = 0;
        int value = 0;
        int left = -1;
        int right = -1;
    };

    Element *element;
    
    int num = 0;
    int level = 0;
    
public:
    Tree(int data)
    {
        Element *newelement  = new Element [1];
        newelement->value = data;
        newelement->id = 1;
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
        newelement[num - 1].id =    
        element = newelement;
        delete [] newelement;
        
    }
   


};
