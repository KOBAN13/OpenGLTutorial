#include <glew.h>
#include <glut.h>
#include <iostream>


int main(int args, char* argv[])
{
	glutInit(&args, argv);
	glutCreateWindow("GLEW Test");
	GLenum err = glewInit();
	if (GLEW_OK != err)
	{
		fprintf(stderr, "Error: %s\n", glewGetErrorString(err));
	}
	fprintf(stdout, "Status: Using GLEW %s\n", glewGetString(GLEW_VERSION));
	getchar();
	return 0;
}