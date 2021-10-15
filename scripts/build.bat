g++ -c ../include/*.cpp -I C:\SFML\include -L C:\SFML\lib ^ -lsfml-graphics ^ -lsfml-window ^ -lsfml-system
g++ -c ../main.cpp  -L ../include -I ../include -I C:\SFML\include -L C:\SFML\lib ^ -lsfml-graphics ^ -lsfml-window ^ -lsfml-system
g++ *.o -o ../build/main.exe -I C:\SFML\include -L C:\SFML\lib ^ -lsfml-graphics ^ -lsfml-window ^ -lsfml-system