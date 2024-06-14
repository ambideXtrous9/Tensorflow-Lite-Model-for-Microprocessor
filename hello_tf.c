#include <stdio.h>
#include <tensorflow/c/c_api.h>

int main()
{
    printf("\n\nHello from TensorFlow C library version %s\n\n", TF_Version());
    return 0;
}