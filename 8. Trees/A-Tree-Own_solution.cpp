#include <iostream>


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
 // Функция для создания нового узла
    Element* newElement(int data) {
    Element* element = new Element;
    element->value = data;
    element->left = NULL;
    element->right = NULL;
    return element;
    }   

// Функция для вставки нового узла в дерево
    Element* insert(Element* root, int data) {
        if (root == NULL) {
            return newElement(data);
        }
        if (root->value == data)
        {
            return root;
        }
        if (data < root->value) {
            root->left = insert(root->left, data);
        } else {
            root->right = insert(root->right, data);
        }
        cout << "Элемент: " << root->value  << endl;
        return root;
    }


public:
    //Tree()
   

   // ~Tree();

    //Element *element =NULL;

   
    void add(int data){
        if (this->rootElement == NULL)
        {
            rootElement = newElement(data);
        }else{
            insert(rootElement, data);
        }
        

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
    return 0;
}
