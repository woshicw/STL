/*
Wei Chen
CIS 1202
12/1/2020
*/

#include <iostream>
#include <cctype>


using namespace std;


char character(char start, int offset) {

    string exception1 = "invalidCharacterExcpeption";        
    string exception2 = "invalidRangeException";        
    int res = isalpha(start);               

    if (isalpha) {
        if (res == 0) {
            throw runtime_error(exception1);
        }

        int asciiValue = (int)start;


        if (start >= 'a' && start <= 'z')
        {
            int upper = 122;
            int lower = 97;


            if ((asciiValue + offset) > upper || (asciiValue + offset) < lower) {
                throw runtime_error(exception2);
            }

        }
        else if (start >= 'A' && start <= 'Z') {

            int upper = 90;
            int lower = 65;


            if ((asciiValue + offset) > upper || (asciiValue + offset) < lower)
            {
                throw runtime_error(exception2);
            }
        }


        int result_target = (asciiValue + offset);


        return (char)result_target;
    }
}
int main()
{
       cout << character('a', 1) << endl;
    //cout << character('Z', -1) << endl;
    //cout << character('a', -1) << endl;
    //cout << character('?', 5) << endl;
    //cout << character('A', 32) << endl;

       cout << endl << endl;
       system("pause");
       return 0;
}