
// C++ example in C++ 11
# include <iostream>
# include <vector>
# include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    std::vector<string> msg {"Hello", "C++", "world"};

    for (const string& word : msg) {
        cout << word << " ";
    }

    cout << endl;

    return 0;
}
