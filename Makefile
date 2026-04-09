CXX  = main.cpp wrapper.cpp
HXX = wrapper.hpp top.hpp
target = game

$(target):
	g++ $(CXX) -o $(target)


clean:
	rm -f $(target)
run:
	./$(target)
reset:
	make clean
	clear
	make 
	make run
	make save 
save:
	git add .
	git commit -m "Saved changes"