#include <iostream>
#include <array>

using namespace std;

class Tree
{
private:
    /* data */
    struct Element
    {
        /* data */
        int value = 0;
        int left = -1;
        int right = -1;
    };

    Element *element;

    int num = 0;
    int level = 0, curLevel = 0; 
    
public:
    Tree(int data)
    {
        Element *newelement  = new Element [1];
        newelement->value = data;
       // delete [] element;
        element = newelement;

        num = 1;
        cout << "Объект создан. Корень дарева равен: " << data << ". Число лементов: " << num << endl;
    };

    //~Tree();

    
    void add(int data, int index = 0, int curLevel = 2)
    {
        if(element[index].value == data)
        {
            return;
        }
            
        if (data < element[index].value)
        {
            if (element[index].left == -1)
            {
                num++;
                Element *newelement = new Element[num];
                for (int  i = 0; i < num - 1; i++)
                {
                    newelement[i] = element[i];
                }
                newelement[index].left = num-1;
                newelement[num - 1].value = data;  
                delete [] element;
                element = newelement;
                if (curLevel > level)
                {
                    level = curLevel;
                }

                cout << "Элемент создан: " << element[num-1].value << " Родитель: " << element[index].value 
                    <<  ". Число элементов: " << num <<  ". Текущий уровень: " << level << endl;
                return;
            }
            else add(data, element[index].left, ++curLevel);
        }
        else
        {
            if (element[index].right == -1)
            {
                num++;
                Element *newelement = new Element[num];
                for (int  i = 0; i < num - 1; i++)
                {
                    newelement[i] = element[i];
                }
                newelement[index].right = num-1;
                newelement[num - 1].value = data;  
                delete [] element;
                element = newelement;
                if (curLevel > level)
                {
                    level = curLevel;
                }
                
                cout << "Элемент создан: " << element[num-1].value << " Родитель: " << element[index].value 
                    <<  ". Число элементов: " << num <<  ". Текущий уровень: " << level << endl; 
                return;
            }
            else add(data, element[index].right, ++curLevel);
        }
    }
};

int main()
{   
    int curValue;
    cin >> curValue;
    Tree mytree (curValue);
    while (curValue)
    {
        cin >> curValue;
        mytree.add(curValue);
    }
    

    return 0;
}
