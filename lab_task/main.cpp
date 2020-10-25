#include<windows.h>
#include<stdio.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<math.h>



void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1000, 1000.0, -1000.0, 1000.0);

}

void display(void)
{
    float theta;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f (1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++)
    {
        theta =i*3.142/180;
        glVertex2f(0+1000*cos(theta),0+1000*sin(theta));

    }

    glEnd();
    glFlush();




    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f (100, 400, 0.0);

    glVertex3f (500, 500, 0.0);

    glVertex3f (100, 600, 0.0);

    glVertex3f (0, 800, 0.0);

    glVertex3f (-100, 600, 0.0);

    glVertex3f (-500, 500, 0.0);

    glVertex3f (-100, 400, 0.0);

    glVertex3f (0, 200, 0.0);


    glEnd();
    glFlush();

}

int main()
{

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("lab_task");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
