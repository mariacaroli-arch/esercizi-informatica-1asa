# C++ Exercise

This repository contains `11.cpp`, a program that asks whether you are enrolled
in a scientific high school and prints your answer.

## Requirements

You need a C++ compiler such as `g++`. On Ubuntu or Debian, install it with:

```bash
sudo apt update
sudo apt install g++
```

## Compile and run

Open a terminal in this repository's folder, then compile the program:

```bash
g++ -std=c++17 11.cpp -o 11
```

Run the compiled program:

```bash
./11
```

When prompted, enter `1` for yes or `0` for no, then press Enter.

## Compile other files with the helper script

Make the script executable once:

```bash
chmod +x compile.sh
```

Then compile any `.cpp` file in the folder by passing its name:

```bash
./compile.sh 13.cpp
```

This creates an executable named `13`. Run it with:

```bash
./13
```
