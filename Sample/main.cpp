#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>


void display(void)
{

  glClear (GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS); //Begin quadrilateral coordinates
    glColor3f (1.0, 1.0, 1.0); //rgb

  //Trapezoid
	glVertex3f(0.05f, 0.05f, 0.0f);
	glVertex3f(0.35f, 0.05f, 0.0f);
	glVertex3f(0.40f, 0.35f, 0.0f);
	glVertex3f(0.00f, 0.35f, 0.0f);

	glEnd(); //End quadrilateral coordinates

	//Triangle
	glBegin(GL_TRIANGLES); //Begin triangle coordinates
	glColor3f (1.0, 1.0, 0.0);
	glVertex3f(0.30f, 0.65f, 0.0f);
	glVertex3f(0.60f, 0.65f, 0.0f);
	glVertex3f(0.45, 0.85f, 0.0f);
	glEnd();

	glFlush ();

}

void init (void)
{
/* select clearing (background) color */
glClearColor (1.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main()
{
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (400, 400);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}



