#include <iostream>
float celsiusToFahrenheit(float celcius){
    return (celsius * 9 / 5) + 32;
}
float fahrenheitToCelsius(float fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}
using namespace std;
int main(){
    int choice;
    float inputTemp;
    cout << "Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Your choice (1/2): ";
    cin >> choice;
    if(choice==1){
        cout<<"Enter temperature in Celcius: ";
        cin<<inputTemp;
        cout<<"Fahrenheit: "<<celsiusToFahrenheit(inputTemp)<<" °F\n";

    }else if(choice==2){
        cout<<"Enter temperature in Fahrenheit: ";
        cin<<inputTemp;
        cout<<"Celcius: "<<fahrenheitToCelsius(inputTemp)<<" °C\n";
    }else{
        cout << "Invalid choice.\n";
    }

    return 0;
};
