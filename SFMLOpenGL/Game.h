#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "Vector3f.h"
#include "Matrix3f.h"

using namespace std;

class Game
{
public:
	Game();
	~Game();
	void run();



private:
	sf::Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();
	void cubeRotation();
	sf::Clock clock;
	sf::Time elapsed;
	double rotationAngle = 0.5f;


};