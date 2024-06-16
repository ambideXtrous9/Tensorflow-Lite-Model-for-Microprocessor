## Commands to install Tensorflow C in linux


1. Download the tar file : ```libtensorflow-cpu-linux-x86_64-2.15.0.tar.gz```

2. ```sudo tar -C /usr/local -xzf libtensorflow-cpu-linux-x86_64-2.15.0.tar.gz```

3. ```sudo ldconfig /usr/local/lib```

4. ``` gcc hello_tf.c -ltensorflow -o hello_tf```

5. ```./hello_tf```

## Convert tflite model to .h file

1. ```xxd -i QATModel.tflite > QATModel.h```

## Tensorflow Lite Build : 

1. [Build TensorFlow Lite with CMake](https://www.tensorflow.org/lite/guide/build_cmake)

### Reference Links :

1. [Tensorflow Lite C++](https://stackoverflow.com/questions/70138115/how-to-get-tflite-model-output-in-c)

2. [Getting Started with TensorFlow Lite for Microcontrollers](https://www.youtube.com/watch?v=gDFWCxrJruQ&t=188s)

