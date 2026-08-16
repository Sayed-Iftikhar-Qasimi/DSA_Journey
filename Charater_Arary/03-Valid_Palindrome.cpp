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


bool CheckPalindrom(char word[], int size)
{
    int start = 0; 
    int end = size - 1; 


    while(start<=end)
    {
        if(word[start++] != word[end--])
            return false;
        
    }

    return true;
}

int main()
{

    char word[] = {'r','a','c','e','c','a','r'};
    int size = 7;


   bool result = CheckPalindrom(word, size);

   if(result)
        cout << "Valid Plaindrome" << endl;
    else
        cout << "Non Valid Plaindrome" << endl;

}