#include <iostream>
using namespace std;

int main()
{
    char string1[20];
    int i, length;
    
    
    cout << "Enter a string: "; 
    cin >> string1;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++)
    {
        if(string1[i] != string1[length-i-1])
            {
            cout << string1 << " is not a palindrome" << endl; 
            break;
            }   
         else 
           {
           cout << string1 << " is a palindrome" << endl;
           break; 
           }
    }
    return 0;
}