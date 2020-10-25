#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>


void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);


	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_LINES);

    glVertex2i(0, 200);
    glVertex2i(400, 200);

    glVertex2i(200, 400);
    glVertex2i(200,0);


	glEnd();

	glFlush ();

}

void init (void)
{
    glClearColor (0.0, 0.5, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

int main()
{

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (400, 300);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Line example");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}



