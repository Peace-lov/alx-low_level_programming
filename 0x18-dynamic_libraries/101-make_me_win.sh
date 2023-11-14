#!/bin/basH
wget -P .. https://raw.githubsercontent/Peace-lov/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libcong.so
export LD_PRELOAD="$PWD/../libcong.so"
