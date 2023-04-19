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
public:
    //Tree();

   // ~Tree();

    Element *element =NULL;

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

};

int main()
{   
    int curValue;
    Tree mytree;
    while (cin >> curValue && curValue != 0)
    {
        
        mytree.insert(mytree.element,  curValue);
    }
    return 0;
}
