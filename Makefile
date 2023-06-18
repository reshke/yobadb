build:
	g++ -o yobadb db.cpp backend/yobalog.cpp backend/console.cpp backend/clientinteractor.cpp -I ./include -Wc++11-extensions

run: build
	./yobadb run