# distutils: language=c
# distutils: extra_compile_args = ["-O3"]
# cython: language_level=3, boundscheck=False, wraparound=False
# cython: cdivision=True

cdef public void quack():
    print("Quack!")
