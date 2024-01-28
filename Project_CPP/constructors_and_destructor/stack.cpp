#include <iostream>

using namespace std;

class stack{
    private:
        int arr[10];
        int top;
    public:
        stack(){
            top = -1;}
        ~stack(){
            cout << "Good bye! " <<endl;}
        bool push(int value);
        void display_data();
};

bool stack::push(int value){
    if (top >= 9){
        return false; // Stack is full
    } else {
        top++;
        arr[top] = value;
        return true;
    }
}

void stack::display_data(){
    if (top == -1){
        cout << "Stack is empty" << endl;
    } else {
        for (int i = 0; i <= top; i++){
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
}

int main(){
    stack obj1;
    if (!obj1.push(5)) cout << "Stack is full!" << endl;
    if (!obj1.push(6)) cout << "Stack is full!" << endl;
    obj1.display_data();
    return 0;
}
