#include <iostream>
#include <signal.h>

void interruptHandler(int cause){
    static int count = 0;
    count++;
    std::cout << count;
    if(count ==3 )
    {
        std::cout << "exit now";
        exit(0);
    }
}

int main(){
    signal(SIGINT, interruptHandler);
    while (true)
    {
    }
    return 0;
}