#ifndef BST_BST_H
#define BST_BST_H

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Bst
{
public:

    Node* root;

    Bst()
    {
        root = nullptr;
    }
    Node* getNode(int item){
        Node* newNode = new Node();
        newNode->data = item;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    Node* insertRecursive(Node* temp, int item){
        if(temp == nullptr)
        {
            temp = getNode(item);
            return temp;
        }

        else if(item < temp->data)
        {
            temp->left = insertRecursive(temp->left, item);
        }

        else if(item > temp->data)
        {
            temp->right = insertRecursive(temp->right, item);
        }

        else
        {
            cout<<"Duplicate Data Not Allowed"<<endl;
        }

        return temp;
    }

    void insertHelper()
    {
        int item;

        cout<<"Enter Data : ";
        cin>>item;

        root = insertRecursive(root,item);
    }

    bool searchRecursive(Node* temp,int item)
    {
        bool found=false;
        if(temp == nullptr)
            return false;

        else if(temp->data > item)
            return searchRecursive(temp->left,item);

        else if(item > temp->data)
            return searchRecursive(temp->right,item);

        else if(temp->data==item)
            found=true;
            return found;
    }

    void search()
    {
        int item;

        cout<<"Enter Search Item : ";
        cin>>item;

        if(searchRecursive(root,item))
            cout<<"Data Found"<<endl;
        else
            cout<<"Data Not Found"<<endl;
    }

    void inOrder(Node* temp)
    {
        if(temp!=nullptr)
        {
            inOrder(temp->left);
            cout<<temp->data<<" ";
            inOrder(temp->right);
        }
    }

    void preOrder(Node* temp)
    {
        if(temp!=nullptr)
        {
            cout<<temp->data<<" ";
            preOrder(temp->left);
            preOrder(temp->right);
        }
    }

    void postOrder(Node* temp)
    {
        if(temp!=nullptr)
        {
            postOrder(temp->left);
            postOrder(temp->right);
            cout<<temp->data<<" ";
        }
    }

    void display()
    {
        cout<<endl;
        cout<<"Inorder : ";
        inOrder(root);
        cout<<endl;
        cout<<"Preorder : ";
        preOrder(root);
        cout<<endl;
        cout<<"Postorder : ";
        postOrder(root);
        cout<<endl;
    }

    Node* minimumValue(Node* temp)
    {
        while(temp->left != nullptr)
        {
            temp = temp->left;
        }

        return temp;
    }

    Node* deleteRecursive(Node* temp,int item)
    {
        if(temp == nullptr)
            return nullptr;

        if(item < temp->data)
        {
            temp->left = deleteRecursive(temp->left,item);
        }

        else if(item > temp->data)
        {
            temp->right = deleteRecursive(temp->right,item);
        }

        else
        {

            if(temp->left == nullptr && temp->right == nullptr)
            {
                return nullptr;
            }

            if(temp->left == nullptr)
            {
                return temp->right;
            }

            else if(temp->right == nullptr)
            {
                return temp->left;
            }
            else
            {
                Node* min = minimumValue(temp->right);

                temp->data = min->data;

                temp->right = deleteRecursive(temp->right,min->data);
            }
        }

        return temp;
    }

    void deleteHelper()
    {
        int item;

        cout<<"Enter Delete Item : ";
        cin>>item;

        root = deleteRecursive(root,item);

        cout<<"Delete Completed"<<endl;
    }

};

#endif
