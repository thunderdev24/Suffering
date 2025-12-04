#include <iostream>
#include <vector>

using namespace std;

int main() {
    string name;
    int age;

    cout << "Whats your age:";
    cin >> age;

    cout << "Whats your full name:" ;
    getline(cin >> ws ,  name);


    cout << "Your Name is " << name << '\n';
    cout << "You are " << age << " old"; 


return 0;
}
