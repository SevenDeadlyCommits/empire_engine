#!/bin/bash

SCRIPT_DIR="$( cd "$( dirname "$0" )" && pwd )"
readarray -d '' array < <(find "$SCRIPT_DIR"/../engine/src/shaders -name '*.vert' -print0)

for i in "${array[@]}"
do
   :
   f="$(basename -- $i)"
   f=${f%.*}
   glslc "$i" -o "$SCRIPT_DIR"/../engine/res/shaders/"$f"_vert.spv
done

readarray -d '' array < <(find "$SCRIPT_DIR"/../engine/src/shaders -name '*.frag' -print0)

for i in "${array[@]}"
do
   :
   f="$(basename -- $i)"
   f=${f%.*}
   glslc "$i" -o "$SCRIPT_DIR"/../engine/res/shaders/"$f"_frag.spv
done

