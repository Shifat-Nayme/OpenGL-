#include<windows.h>
#include<stdio.h>
#include <GL/glut.h>
#include <stdlib.h>

void init (void)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

	bool flg = false;

	for(int i =0; i<=800; i+=100)
    {
        for(int j=0; j<=800; j+=100)
        {
            if(flg==false)
            {
                glColor3f(0.0, 0.0, 0.0);
                flg =true;
            }
            else
            {
                glColor3f(1.0, 1.0, 1.0);
                flg =false;
            }

            glBegin(GL_QUADS);
            glVertex2i(i,j);
            glVertex2i(i,j+100);
            glVertex2i(i+100,j+100);
            glVertex2i(i+100,j);
            glEnd();
	        glFlush ();

        }
    }

}

int main()
{

    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Chess Board");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
