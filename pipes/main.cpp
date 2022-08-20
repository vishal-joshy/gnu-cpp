#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <memory>

int main(int argc, char **argv)
{
    FILE *fp = 0;

    if ((fp = popen("ls -l", "r")) == 0) // if dir is empty
        return -1;

    char buffer[8192];

    while (!feof(fp))
    {
        fgets(buffer, 8192, fp);
        std::cout << buffer;
    }

    fclose(fp);
    return 0;
}