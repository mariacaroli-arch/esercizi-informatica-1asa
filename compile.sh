#!/usr/bin/env bash
set -euo pipefail

if [[ $# -ne 1 || "$1" != *.cpp ]]; then
    echo "Usage: ./compile.sh <file.cpp>" >&2
    exit 2
fi

source_file=$1
if [[ ! -f "$source_file" ]]; then
    echo "File not found: $source_file" >&2
    exit 1
fi

output_file=${source_file%.cpp}
g++ -std=c++17 "$source_file" -o "$output_file"
echo "Compiled $source_file to $output_file"
