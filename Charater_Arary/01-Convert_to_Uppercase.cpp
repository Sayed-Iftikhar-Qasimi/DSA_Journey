#include<iostream>
using namespace std;

void ConvertToUppercase(char word[], int size)
{
     for(int i=0; i<size; i++)
    {
        if(iswlower(word[i]))
        {
            word[i] = word[i] - 32;
        }

        
    }

}

int main(){


    char word[] = "ApPle";
    int length = 5;


    cout << "Before Function call: " << word << endl;

    ConvertToUppercase(word, length);
   

    cout << "After Function call: " << word << endl;
    return 0;
}