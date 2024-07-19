#include<iostream>
using namespace std;

class stack {
    int capacity;
    int top;
    int* arr;
public:
    stack(int c){
        this->capacity=c;
        arr =new int[c];
        this->top=-1;
    }


    void push(int val){
        if(top == (capacity-1)){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top=top+1;
        arr[top]=val;
    }

    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
            return;
        }
        top=top--;
        cout<<arr[top+1]<<" is deleted"<<endl;
        return;
    }

    void isempty(){
        if(top==-1){
            cout<<"the stack is empty"<<endl;
            return;
        }
        else{
            cout<<"The stack is not emoty"<<endl;
            return;
        }
    }

    void getTop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
    }

    void isfull(){
        if(top==capacity-1){
            cout<<"The stack is full"<<endl;
            return;
        }
        else{
            cout<<"The stack is not full"<<endl;
        }
    }

    void usedStackSize(){
        cout<<"The size consumed by stack is "<<top+1<<" of the max "<<capacity<<endl;
        return;
    }
};

int main(){
    stack st(6);
    st.push(4);
    st.isfull();

}