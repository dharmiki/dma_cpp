#include<iostream>
using namespace std;

void push(int userVal,int top,int stack[]){

    stack[top]=userVal;

    for (int i = 0; i <= top; i++)
    {
        cout<<stack[i]<<endl;
    }
    

}

void pop(int top,int stack[]){

    top--;

    for (int i = 0; i <= top; i++)
    {
        cout<<stack[i]<<endl;
    }
    
    
}

void peek(int top,int stack[]){

    cout << stack[top]<< endl;
    
}

void isEmpty(int top,int stack[]){

    if (stack[top] == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    
}

void isFull(int top,int capacity){

    if (top==capacity)
    {
        cout << "stack is Full" << endl;
    }
    else
    {
        cout << "stack is Empty" << endl;
    }
    
}

void size(int top){

    cout<<top;
    
}

int main(){

    int capacity;

    int *stack=new int[capacity];


    int userOperation;

    int top= -1;

    do
    {

        cout<<"---------------OPTIONS---------------"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.peek/top"<<endl;
        cout<<"4.isEmpty"<<endl;
        cout<<"5.isFull"<<endl;
        cout<<"6.Size"<<endl;
        cout<<"0.Exit"<<endl;

        cout<<"-------------------------------------------------"<<endl;

        cout<<"Enter The Option=";
        cin>>userOperation;

        cout<<"-------------------------------------------------"<<endl;

        switch(userOperation)
        {
        case 1:

            int userVal;

            cout<<"Enter Your Value=="<<endl;
            cin>>userVal;

            top++;
            cout<<top<<endl;

            push(userVal,top,stack);

          

            break;
            
            cout<<"-------------------------------------------------"<<endl;

            

        case 2:

            pop(top,stack);

            break;

            cout<<"-------------------------------------------------"<<endl;

            
            

        case 3:

            peek(top,stack);

            break;

            cout<<"-------------------------------------------------"<<endl;

            
            

        case 4:

            isEmpty(top,stack);

            break;

            cout<<"-------------------------------------------------"<<endl;

            
            
            
        case 5:

            isFull(top,capacity);

            break;

            cout<<"-------------------------------------------------"<<endl;

            
            
        case 6:

            size(top);

            break;

            cout<<"-------------------------------------------------"<<endl;


            

        case 0:

            cout << "Exiting the program. Goodbye!" << endl;

            break;

            cout<<"-------------------------------------------------"<<endl;

            

        default:

           cout<< "Invalid choice...please try again:)"<<endl;

           break;

        }
        
    } while (capacity!=0);
    
}