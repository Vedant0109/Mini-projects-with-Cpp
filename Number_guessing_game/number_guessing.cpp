#include <iostream>
using namespace std;

int main() {
    int tries=0;
    int guess;

    srand(time(NULL));
    int random= (rand()%100) +1;

    while (true) {
        cout<<"Enter your guess: ";
        cin>>guess;
        if (guess==random) {
            cout<<"You got it"<<endl;
            tries++;
            break;
        } else if (guess<random) {
            cout<<"Too low"<<endl;
            tries++;
        } else if (guess>random) {
            cout<<"Too high"<<endl;
            tries++;
        }

    }
    cout<<"You took "<<tries<<" tries";
}