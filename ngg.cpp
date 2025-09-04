#include <iostream>
#include <cstring>
#include <string>
#include <random>
using namespace std;
int main(){
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<int> dist(1, 100);

int secret = dist(gen);
int guess;
int point=100;

cout<<"Guess the number between 1-100!\n";
do{
    cout<<"Your guess: ";
    cin>>guess;
    if(guess<secret){
        cout<<"Try a larger number!\n";
        point-=10;
    }else if(guess>secret){
        cout<<"Try a smaller number!\n";
        point-=10;

    }else {
            cout << "Congratulations! You guessed it right!\n";
            cout<<"Your point is:"<<point;
            break;
        }

}while(guess!=secret or point!=0);

return 0;
};
