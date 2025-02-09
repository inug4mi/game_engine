TARGET = executable

all: $(TARGET)

$(TARGET):
	g++ -Iheaders classes/renderer.cpp classes/collision.cpp classes/shape2D.cpp classes/text.cpp src/engine.cpp src/main.cpp -Iinclude -Llib -lsfml-graphics -lsfml-window -lsfml-system -o $(TARGET)

run:$(TARGET)
	./$(TARGET)