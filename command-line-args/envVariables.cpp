#include <iostream>

using namespace std;

int main (int argc, char *argv[], char *envp[]) {
  char **temp = envp;
  while (*temp != NULL) {
    cout << *temp << endl;
    temp++;
  }
  return 0;
}