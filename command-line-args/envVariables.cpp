#include <iostream>

using namespace std;

int main(int argc, char *argv[], char *envp[]) // envp - environment variables.
{
    char **temp = envp;
    while (*temp != NULL)
    {
        cout << *temp << endl;
        temp++;
    }
    return 0;
}