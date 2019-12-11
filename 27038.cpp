#include <iostream>
using namespace std;

int main() {
long long credit;

cout <<"請輸入 credit = ";
cin >> credit;

int num = 0;
int all = 0;
int i = 1;
int VOM = 0;


    do {
        for (; credit > 0; i++) {

            num = credit % 10;
            credit = credit / 10;

        int j = i / 2;

            if (i - j * 2 == 0 && j > 0) {
                if (num * 2 >= 10){
                all = all + (num * 2 % 10) + (num * 2 / 10);  
                } else {
                all = all + num * 2;
                }
            } else {
             all = all + num;
            }
            if (i == 14) {
            VOM = credit;
            }
        }
    } while (credit > 0);

    if  (i == 17) {
        if ((int)VOM / 10 == 4) {
            cout << "Visa";
        } else {
            cout << "MasterCard"; 
        }
    } else if (i == 16) {
            cout << "American Express";
    } else if (i == 14) {
            cout << "Visa";
    } else {
    cout << "錯誤";
    }
}
