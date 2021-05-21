# VE475 Homework1

This is a program for VE475 Homework1 Ex.3 written in C++.

## Compilation

### Requirements

* Linux
* The GNU Multiple Precision Arithmetic Library (GMP)

### GMP Installation

1. Download `gmp-6.2.1.tar.lz` from <https://gmplib.org/>.
2. Unzip and build with
    ```
    ./configure  
    make
    ```
3. Run self-test with
    ```
    make check
    ```
4. Install with
    ```
    make install
    ```

### Compilation

CMakeList is provided.
```
    mkdir build
    cd build
    cmake ..
    make
```