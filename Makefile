cpp:
	$(CXX) option.cpp -o option

rs:
	rustc option.rs

clean:
	rm -rf option option.dSYM
