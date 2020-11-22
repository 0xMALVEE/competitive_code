#include <bits/stdc++.h>
using namespace std;

#define ll long long

//PUSH()
//POP()




class Stack{
    private:
        int top = -1;
        int n = 0;
        int *arr;
    public:
        Stack(int ss){
            arr = new int[ss];
            n = ss;

            for (int i =0;i<n;i++){
                arr[i] = 0;
            }

        }

        void push(int ival){
            if(top == n - 1){
                cout << "Stack Overflow~!" << endl;
            }
            arr[top + 1] = ival;
            top++;
        }

        bool isEmpty(){
           if(top == -1){
            return true;
           }else{
               return false;
               }
        }

        int peek(int index){
            return arr[index];
        }

        int count(){
            return sizeof(arr)/sizeof(arr[0]);
        }

        void change(int i, int val){
            arr[i] = val;
        }

        int pop(){
            if(top != -1){
                int value = arr[top];
                arr[top] = 0;
                top--;
                return value;
            }else{
                cout << "Stack Underflow!" << endl;
            }


        }

        void display(){
            for(int i = 0;i< n;i++){
                cout << arr[i] << endl;
            }

        }



};


void solve(){
    Stack firstStack(5);
    firstStack.pop();


    firstStack.display();


}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    solve();

	return 0;
}
