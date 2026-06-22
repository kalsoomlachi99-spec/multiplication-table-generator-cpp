#include <iostream>
using namespace std;

// creating multiplication table of number(s) entered by user

void multiplicationTable(){
    int num , limit;

    cout << "For which number do you want to create a multiplication table? ";
    cin >> num;

    cout << "Enter limit for multiplication table: ";
    cin >> limit;

    while (limit <= 0){
        cout << "Limit should be greater than 0.\n";
        cout << "Enter limit again: ";
        cin >> limit;
    }

    for (int i = 1; i <= limit; i++){
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {

    int n;
    cout << "How many tables you want to create? " ;
    cin >> n;

    while (n <= 0){
        cout << "Number of tables should be greater than 0. \n Enter again: " ;
        cin >> n;
    }

    for (int i = 0; i < n ; i++){
        multiplicationTable();
        cout << endl;
    }

    cout << "Thanks for using! See you next time! Good bye!";
    
    return 0;
}
