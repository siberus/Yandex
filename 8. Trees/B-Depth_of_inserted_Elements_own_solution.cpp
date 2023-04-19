#include <iostream>
#include <vector>


using namespace std;

class Tree
{
private:
    struct Element
    {
        int value = 0;
        Element* left = NULL;
        Element* right = NULL;
    }; 
    
    Element *rootElement = NULL;
    int level = 1;
    vector <int> levels;

 // Функция для создания нового узла
    Element* newElement(int data, int curLevel) {
    Element* element = new Element;
    element->value = data;
    element->left = NULL;
    element->right = NULL;
    //cout << "Элемент: " << element->value  << " Уровень: " << curLevel << endl;;
    levels.push_back(curLevel);
    return element;
    }   

// Функция для вставки нового узла в дерево
    Element* insert(Element* root, int data, int curLevel) {
        if (root == NULL) {
            if (curLevel > level)
            {
                level = curLevel;
            }
            
            return newElement(data, curLevel);
        }
        if (root->value == data)
        {
            return root;
        }
        if (data < root->value) {
           // cout << "Элемент: " << root->value  << " Уровень: " << curLevel << endl;
            root->left = insert(root->left, data, ++curLevel);
        } else {
            //cout << "Элемент: " << root->value  << " Уровень: " << curLevel << endl;
            root->right = insert(root->right, data, ++curLevel);
        }
        return root;
    }


public:
    //Tree()

   // ~Tree();
   
    void add(int data){
        if (this->rootElement == NULL)
        {
            rootElement = newElement(data, level);
        }else{
            insert(rootElement, data, 1);
        } 
    }

    int getlevel(){
        return level;
    }

    void printlevels(){
        for (int i = 0; i < levels.size(); i++)
        {
            cout << levels[i]  << " ";
        }
        
        return;
    }
};

int main()
{   
    int curValue;
    Tree mytree;
    while (cin >> curValue && curValue != 0)
    {
        mytree.add(curValue);
    }
    //cout << " Глубина дерева: " << mytree.getlevel() << endl;   
   // cout << mytree.getlevel() << endl;
    mytree.printlevels();
    return 0;
}
