#include <iostream>
using namespace std;

int main(){
    char oper = ' '; 
    double num_express = 0, num_one = 0, num_two = 0;
    
    while (true){
        cout << "Enter the expression: ";
        cin >> oper;
        
        if (oper == 'q'){
            break;
        }
        else{
            cin >> num_one >> num_two;
            
            switch (oper){

                case '+':
                    
                    cout << num_one << " + " << num_two << " = " << num_one + num_two << endl;
                    break;

                case '-':
                    
                    cout << num_one << " - " << num_two << " = " << num_one - num_two << endl;
                    break;

                case '/':
                    
                    cout << num_one << " / " << num_two << " = " << num_one / num_two << endl;
                    break;

                case '*':
                    
                    cout << num_one << " * " << num_two << " = " << num_one * num_two << endl;
                    break;

                default:
                    cout << " ";
            }
        }
    }

    return 0;
}