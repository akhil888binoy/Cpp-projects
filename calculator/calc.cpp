#include <iostream>
using namespace std;


function perform(int num1 , int num2 , char operation)
int main (){
    int num1 , num2 ;
    char operation;
    cout << "Enter 2 numbers";
    cin >> num1 >>num2;
    cout << "Enter Operation to perform";
    cin >> operation;
    const result = perform(num1 , num2 , operation);
    cout << result ;
    
}

function perform(int num1 , int num2 , char operation ){
    
    if(operation == '+'){
        return num1 + num2;
    }
    else if(operation == '-'){
         return num1 + num2;
    }
    else if(operation == 'x'){
        return num1 * num2;
    }
    else if(operation == '/'){
        if(num2 !== 0){
        return num1/num2;
        }else{
            cout << 'denominator cannot be zero';
        }
    }else{
        cout<< 'please give an operation';
    }
}   