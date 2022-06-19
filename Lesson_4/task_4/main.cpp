#include <iostream>

using namespace std;

int main()
{
    int amountWords = 0;
    char text[255];

    cout << "Enter your text: ";
    cin.getline(text, 255);

    if(text[0] != '\0'){
        amountWords++;
    }
    for(int i = 1; text[i] != '\0'; i++ )
    {
        if(text[i] == ' ' && text[i - 1] != ' '){
            amountWords++;
            continue;
        }

        if(text[i] >= 'A' && text[i] <= 'Z' && text[i + 1] >= 'a' && text[i + 1] <= 'z' &&
           text[i - 1] != ' ' &&
           text[i - 1] != '1' && text[i - 1] != '2' &&
           text[i - 1] != '3' && text[i - 1] != '4' &&
           text[i - 1] != '5' && text[i - 1] != '6' &&
           text[i - 1] != '7' && text[i - 1] != '8' &&
           text[i - 1] != '9' && text[i - 1] != '0'){
            amountWords++;
            continue;
        }

        if(text[i] >= 'A' && text[i] <= 'Z' && text[i + 1] >= 'A' && text[i + 1] <= 'Z'){
            while(text[i] >= 'A' && text[i] <= 'Z'){
                i++;
            }
            amountWords++;
        }
    }
    cout << "Amount words - " << amountWords << endl;
}
