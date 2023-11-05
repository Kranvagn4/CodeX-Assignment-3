#include<iostream>
using namespace std;

enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main(){
    
    Days currentDay = Tuesday;

    int calculateremainingDays = 7 - currentDay;
    cout<< "Today is: "<<currentDay<< " and the number of days remaining in the week are: "<<calculateremainingDays;
    
    return 0;
}

 