#include <glew.h>
#include <glut.h>
#include <iostream>

static void RenderSceneCB();
static void InitializeWindow(int weight, int height, int x, int y, const char* nameWindow);

int main(int args, char* argv[])
{
	glutInit(&args, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	InitializeWindow(1920, 1080, 100, 100, "First Window");

	GLclampf Red = 0.0f, Green = 1.0f, Blue = 0.0f, Alpha = 0.0f;
	glClearColor(Red, Green, Blue, Alpha);

	glutDisplayFunc(RenderSceneCB);
	glutMainLoop();

	return 0;
}

static void RenderSceneCB()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glutPostRedisplay();
	glutSwapBuffers();
}

static void InitializeWindow(int weight, int height, int x, int y, const char* nameWindow)
{
	glutInitWindowSize(weight, height);
	glutInitWindowPosition(x, y);
	glutCreateWindow(nameWindow);
}