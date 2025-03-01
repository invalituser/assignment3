#include<iostream>
using namespace std;

 long double number = 0.0; char sign;  long double number0 = 0.0; long double answ;

void func1(long double number, char sign, long double number0  ){
    
    switch (sign){
        case '+':
            answ = number + number0;
            cout << " Answer is: " << answ << endl;
            break;
        case '-':
            answ = number - number0;
            cout << " Answer is: " << answ << endl;
            break;
        case '*':
            answ = number * number0;
            cout << " Answer is: " << answ << endl;
            break;
        case '/':
            answ = number / number0;
            cout << " Answer is: " << answ << endl;
            break;
    } 

}





int main(){

    cout << " 1.a program to calculate tax, given the following conditions \n";
    cout << " 2.a program \"Positive, Negative or Zero?\" \n";
    cout << " 3.a program \"Grading conditions\" \n";
    cout << " 4.a program \"Uppercase and lowercase\" \n";

    char tasks; long double salary; long double endsalary = 0; long double strength; char asci;
    cout << "Choose program to run: "; cin >> tasks;
    switch (tasks){

        case '1': 
            cout << "What is salary amount?: $"; cin >> salary;
            if (salary <= 1500){
                cout << "You will not pay tax, your salary is stable: $" << salary;
            }   else if(1501 <= salary && salary <= 3000){
                    endsalary = salary*(1-(10.0/100));
                    cout << "\nYou will be charged by 10 per cent of your salary. Your salary will be: $" << endsalary;
                    cout << "\n10 per cent: " << salary * (10.0/100) << endl;
                } else if(3001 <= salary && salary <= 5000){
                    endsalary = salary*(1-(20.0/100));
                    cout << "\nYou will be charged by 20 per cent of your salary. Your salary will be: $" << endsalary;
                    cout << "\n20 per cent: " << salary * (20.0/100) << endl;
                } else if(salary >= 5000){
                    endsalary = salary*(1-(30.0/100));
                    cout << "\nYou will be charged by 30 per cent of your salary. Your salary will be: $" << endsalary;
                    cout << "\n30 per cent: " << salary * (30.0/100) << endl;
                }     
        break;
        case '2': 
            cout << "Positive, Negative or Zero?\nPlease enter number whether negative or positive or zero: ";
            cin >> salary;  
            if (salary < 0){
                cout << "Negative\n";
            } else if (salary > 0){
                cout << "positive\n";
            } else if (salary == 0){
                cout << "Zero\n";
            }
        break;
        case '3':
            cout << "Grading conditions:\nHardness must be greater than 50\nCarbon content must be less than 0.7\nTensile strength must be greater than 5600\n";
            cout << "enter hardness: ";
            cin >> salary;
            cout << "\nenter carbon content: ";
            cin >> endsalary;
            cout << "\nenter tensile strength: ";
            cin >> strength; cout << endl;
        if (salary > 50 && endsalary < 0.7 && strength > 5600){
            cout << "Grade: 10\n";
        }   else if(salary > 50 && endsalary < 0.7){
            cout << "Grade: 9\n";
        }   else if(endsalary < 0.7 && strength > 5600){
            cout << "Grade: 8\n";
        }   else if (salary > 50 && strength > 5600){
            cout << "Grade: 7\n";
        }   else if (salary > 50 || endsalary < 0.7 || strength > 5600){
            cout << "Grade: 6\n";
        }   else if (!(salary > 50 && endsalary < 0.7 && strength > 5600)){
            cout << "Grade: 5\n";
        }
        break;
        case '4':
            asci = 65;
            char character; cin >> character;

            if (character >= asci && character <= 90){
                cout << "Uppercase\n";
            }   else if (character >= asci && character <= 122){
                cout << "lowercase\n";
            }   else {
                cout << "insufficient character!\n";
            }
        break;
        case '5':
            cout << "Welcome, enter a problems: "; cin >> number; cin >> sign; cin >> number0;
            func1( number, sign, number0);
            break;
        case '6':
            cout << "Enter a year: ";
            cin >> salary;
            endsalary = static_cast<int>(salary) % 4;
            number = static_cast<int>(salary) % 400;
            number0 = static_cast<int>(salary) % 100;

            if ((endsalary == 0 && number0 != 0) || number == 0){
                cout << "Leap year";
            }   else {
                cout << "not leap";
            }
            break;
        
    }

    






    return 0;
}