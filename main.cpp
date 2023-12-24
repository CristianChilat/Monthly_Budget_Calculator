#include <iostream>

using namespace std;

//void inputData(int dailySpending[31], int day, int remainedSum){
//    while (day <= 5){
//        cout << "How many do you spent in day = " << day << endl;
//        cin >> dailySpending[day - 1];
//        remainedSum -= dailySpending[day - 1];
//        day++;
//    }
//}
//
//void displayDailySpending(int dailySpending[31], int day){
//    for (int i = 0; i < day - 1; i++) {
//        cout << "You spent in day " << i + 1 << " = " << dailySpending[i] << endl;
//    }
//}
//
//int totalSpend(int dailySpending[31], int day){
//    int totalSpendSum = 0;
//    for (int i = 0; i < day - 1; i++) {
//        totalSpendSum += dailySpending[i];
//    }
//
//    return totalSpendSum;
//}


void changeValues(int &a, int b){
    a += 3;
    b += 5;
}


int main() {

    // test
    int readOnlyNumber = 2;
    int writeableNumber = 4;
    cout << "Before:" << endl;
    cout << "A = " << readOnlyNumber << endl;
    cout << "B = " << writeableNumber << endl;

    changeValues(readOnlyNumber, writeableNumber);
    cout << "After:" << endl;
    cout << "A = " << readOnlyNumber << endl;
    cout << "B = " << writeableNumber << endl;


//    int dailySpending[5] = {};
//    int salary = 10000;
//    int remainedSum = salary;
//    int day = 1;
//
//    inputData(dailySpending, day, remainedSum);
//
//    cout << "Your salary is: " << salary << endl;
//    displayDailySpending(dailySpending, day);
//    int totalSpentMoney = totalSpend(dailySpending, day);
//    cout << "Total spent: " << totalSpentMoney << endl;
//
//
//    if (totalSpentMoney < salary) {
//        cout << "You still have " << salary - totalSpentMoney;
//    } else if (totalSpentMoney > salary) {
//        cout << "You have a debt of " << totalSpentMoney - salary;
//    } else if (totalSpentMoney == salary) {
//        cout << "You don't have anymore money";
//    }

}
