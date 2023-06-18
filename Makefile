build:
	rm -fr build && cmake -B build

run: build
	./yobadb run
