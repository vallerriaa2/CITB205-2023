# Lab 10 - First Window

## Build (Windows)

1. Step 1: Initially and whenever you add/remove files, run the following from the `lab10` working directory:
```sh
cmake -G "MinGW Makefiles" -DQt6_DIR:PATH=C:\Qt\6.5.0\mingw_64\lib\cmake\Qt6 -B .\build\
```
> Replace the path to your Qt installation directory, the above assumes default location.

2. Step 2: Every time you make changes to the code:
```sh
cd build
mingw32-make.exe
```

## Build (Mac/Linux)

1. Step 1: Initially and whenever you add/remove files, run the following from the `lab10` working directory:
```sh
cmake -B ./build
```

2. Step 2: Every time you make changes to the code:
```sh
cd build
make
```