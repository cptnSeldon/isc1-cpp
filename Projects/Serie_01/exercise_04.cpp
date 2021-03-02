#include <iostream>
#include <string>

//http://www.cplusplus.com/reference/istream/istream/getline/
//http://www.cplusplus.com/reference/string/string/
//https://stackoverflow.com/questions/1472048/how-to-append-a-char-to-a-stdstring

#define LIMIT 50

using namespace std;

char * askForAString()
{
    char * sentence = new char[LIMIT];
    cout << "Please enter a sentence: " << endl;
    cin.getline(sentence, LIMIT - 1);

    cout << sentence << endl;

    return sentence;
}

int main()
{
    char * pointer = askForAString();
    string result = pointer;

    cout << "Result: " << pointer << endl;
    cout << "Result: " << result << endl;
    cout << "Size: "  << result.size() << endl;

    //bonus
    for(int i = result.size(); i < LIMIT; i++ ) {
        //all three have the same result

        //result += '.';
        //result.append(1, '.');
        result.push_back('.');
    }

    cout << "Result: " << result << endl;
    cout << "Size: "  << result.size() << endl;

    //https://stackoverflow.com/questions/11304174/c-c-delete-vs-delete
    //do not forget to delete pointer
    delete[] pointer;

    return 0;
}