#include <iostream>
#include <tensorflow/lite/interpreter.h>
#include <tensorflow/lite/kernels/register.h>
#include <tensorflow/lite/model.h>

using namespace cv;
using namespace std;

int main()
{
    // Load the TensorFlow Lite model
    const char *model_path = "QATModel.tflite";
    auto model = tflite::FlatBufferModel::BuildFromFile(model_path);
    if (!model)
    {
        cerr << "Failed to load model: " << model_path << endl;
        return 1;
    }
    return 0;
}