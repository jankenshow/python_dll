#include <Python.h>

int main(int argc, char *argv[])
{
    // Pythonのインタープリタを初期化
    Py_Initialize();
    // Pythonコードを実行
    PyRun_SimpleString("print('Hello World from Python!')");
    // Pythonのインタープリタを終了
    Py_Finalize();

    return 0;
}