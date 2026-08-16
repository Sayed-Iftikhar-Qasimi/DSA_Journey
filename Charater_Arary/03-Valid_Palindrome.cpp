#include<iostream>
using namespace std; 


bool check_Palindrom(char word[], int size)
{
    char palindrom[size]= {};

    for(int i=0; i<size; i++)
    {
        palindrom[i] = word[size-1-i];
    }

    for(int i=0; i<size; i++)
    {
        if(word[i]!=palindrom[i])
            return false;  
    }

    return true;
}

int main()
{

    char word[] = {'r','a','c','e','c','a','r'};
    int size = 7;


   bool result = check_Palindrom(word, size);

   if(result)
        cout << "Valid Plaindrome" << endl;
    else
        cout << "Non Valid Plaindrome" << endl;

}