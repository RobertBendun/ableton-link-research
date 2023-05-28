beats: beats.cc
	g++ -std=c++20 -Wall -Wextra -o $@ $< -Ilib_link
