#include<iostream>
using namespace std; 

void print(char arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
}

void ReverseCharacterArray(char ch[], int size)
{
    for(int i=0; i<size/2; i++)
    {
        swap(ch[i], ch[size-i-1]);
    }
    print(ch, size);
}


int main()
{
    char ch[] = {'A','B','C','E','F','G','H'};
    int size = 7;
    ReverseCharacterArray(ch, size);

}