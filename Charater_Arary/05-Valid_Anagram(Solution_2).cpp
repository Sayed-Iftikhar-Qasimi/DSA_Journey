#include<iostream>
#include<string.h>
using namespace std; 


bool isanagram(string str1, string str2)
{   if(str1.length() != str2.length())
        return false;

    int freq[26];

    for(int i=0; i<str1.length(); i++)
    {
        int idx = str1[i] - 'a';
        freq[idx]++;
    }

    for(int i=0; i<str2.length(); i++)
    {
        int idx = str2[i] - 'a';
        if(freq[idx] == 0)
            return false;
        freq[idx]--;
    }

    return true;
}

int main(){

   string str1 = "anagram";
   string str2 = "aagarnm";

   bool result = isanagram(str1, str2);

    if(result)
        cout << "Valid Anagram." << endl;
    else
        cout << "Non Valid Anagram." << endl;


    return 0;
}