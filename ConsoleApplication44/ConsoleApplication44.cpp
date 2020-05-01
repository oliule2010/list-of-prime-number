/*
github: list of prime number

*/
#include <vector>
#include <iostream>
using namespace std;
void print(const vector<int>& input) {
    for (int value : input) {
        cout << value << ", ";
    }
    cout << "\n";
}
bool check_prime(int input) {
    for (int i = 2; i < input; i++) {
        if (input % i == 0) {
            return false;
        }
    }
    return true;
}
vector<int> find_lower_prime(int input) {
    if (input == 0 || input == 1) {
        vector<int> incase;
        return incase;
    }
    vector<int> output;
    for (int number = 2; number < input; number++) {
        if (check_prime(number)) {
            output.push_back(number);
         }
    }
    return output;
}
int find_biggest_factor(int input1, int input2) {

    for (int i = input1;; i--) {
        if (input1 % i == 0 && input2 % i == 0) {
            return i;
        }
    }
  
}
int main()
{
    print(find_lower_prime(10));
    cout << find_biggest_factor(10, 5) << "\n";
    return 0;
}