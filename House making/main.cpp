#include<windows.h>
#include<stdio.h>
#include <GL/glut.h>
#include <stdlib.h>

void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void house(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);

    glVertex2i(50,50);
    glVertex2i(50,200);

    glVertex2i(50,200);
    glVertex2i(300,200);

    glVertex2i(300,200);
    glVertex2i(300,50);

    glVertex2i(300,50);
    glVertex2i(50,50);
    glEnd();

    glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(50,200);
    glVertex2i(175,300);

    glVertex2i(175,300);
    glVertex2i(300,200);

    glVertex2i(300,200);
    glVertex2i(50,200);
    glEnd();

    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
	glVertex2i(155,50);
    glVertex2i(155,175);

    glVertex2i(155,175);
    glVertex2i(195,175);

    glVertex2i(195,175);
    glVertex2i(195,50);

    glVertex2i(195,50);
    glVertex2i(155,50);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
	glVertex2i(215,90);
    glVertex2i(215,130);

    glVertex2i(215,130);
    glVertex2i(245,130);

    glVertex2i(245,130);
    glVertex2i(245,90);

    glVertex2i(245,90);
    glVertex2i(215,90);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
	glVertex2i(135,90);
    glVertex2i(105,90);

    glVertex2i(105,90);
    glVertex2i(105,130);

    glVertex2i(105,130);
    glVertex2i(135,130);

    glVertex2i(135,130);
    glVertex2i(135,90);


    glEnd();







	glFlush ();



}

int main()
{

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("House");
    init ();
    glutDisplayFunc(house);
    glutMainLoop();
    return 0;
}
