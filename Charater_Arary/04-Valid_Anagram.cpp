#include<iostream>
#include<algorithm>
using namespace std;

bool check_valid_Anagram(char arr[],char word[], int size)
{
    sort(arr, arr+size);
    sort(word, word+size);

    for(int i=0; i<size; i++)
    {
        if(arr[i] != word[i])
            return false;
    }
    return true;
}

int main()
{
    char ch[] = "khan";
    char word[] = "khna";

    bool result = check_valid_Anagram(ch,word, 4);

    if(result)
        cout << "Valid Anagram" << endl;
    else
        cout << "Non Valid Anagram " << endl;
    return 0;
}