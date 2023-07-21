#include <Python.h>
#include "quack.h"

// int main() {
//   Py_Initialize();
//   // PyImport_ImportModule("quack");
//   // PyObject* m = PyInit_quack();
//   // if (!m) {
//   //   return -1;
//   // }
//   initcaller();
//   quack();
//   Py_Finalize();
//   return 0;
// }

int main() {
  PyImport_AppendInittab("quack", PyInit_quack);
  Py_Initialize();
  PyImport_ImportModule("quack");
  quack();
  Py_Finalize();
  return 0;
}