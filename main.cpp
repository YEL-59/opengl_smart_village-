

#include <iostream>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

using namespace std;



void myInit()
{
	glEnable(GL_DEPTH_TEST);
	gluOrtho2D(0, 1600, 0, 800);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
}

void handleResize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}





void circle(float x, float y, double r )
{
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 25;
		float x1 = x + ((r - 0.07) * cos(A) );
		float y1 = y + ((r) * sin(A) );
		glVertex2f(x1, y1);
	}
	glEnd();
}

void drawcircle(float x, float y, double r )
{
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 25;
		float x1 = x + ((r - 0.09) * cos(A) );
		float y1 = y + ((r) * sin(A) );
		glVertex2f(x1, y1);
	}
	glEnd();
}

void drawCircle(float x, float y, double r )
{
	float x1, y1;
	glBegin(GL_POLYGON);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 25;
		float x1 = x + ((r - 0.03) * cos(A) );
		float y1 = y + ((r) * sin(A) );
		glVertex2f(x1, y1);
	}
	glEnd();
}

void sky()
{
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-1.0, 0.2);
	glVertex2f(-1.0, 1.0);
	glVertex2f(1.0, 1.0);
	glVertex2f(1.0, 0.2);
	glEnd();
}

void road()
{
	glColor3f(0.3f, 0.3f, 0.3f);
	glBegin(GL_QUADS);
	glVertex2f(-10.0, -1.0);
	glVertex2f(4.0, -0.5);
	glVertex2f(-1.0, -0.1);
	glVertex2f(1.0, -1.0);
	glEnd();
}

void field()
{
	glColor3f(0.420f, 0.557f, 0.137f);
	glBegin(GL_QUADS);
	glVertex2f(-1.0, 0.2);
	glVertex2f(-1.0, -0.5);
	glVertex2f(1.0, -0.1);
	glVertex2f(1.0, 0.2);
	glEnd();
}

void hill()
{
	glColor3f(255.0, 255.0, 255.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.20, 0.20);
	glVertex2f(0.03, 0.50);
	glVertex2f(0.20, 0.20);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.05, 0.20);
	glVertex2f(-0.38, 0.45);
	glVertex2f(-0.60, 0.20);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.90, 0.20);
	glVertex2f(-0.65, 0.38);
	glVertex2f(-0.50, 0.20);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-1.30, 0.20);
	glVertex2f(-0.98, 0.35);
	glVertex2f(-0.90, 0.40);
	glVertex2f(-0.75, 0.20);
	glVertex2f(-0.75, 0.20);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.56, 0.20);
	glVertex2f(0.38, 0.45);
	glVertex2f(0.10, 0.20);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.82, 0.20);
	glVertex2f(0.67, 0.40);
	glVertex2f(0.43, 0.20);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(1.30, 0.20);
	glVertex2f(0.89, 0.40);
	glVertex2f(0.71, 0.20);
	glEnd();
}

void Sun()
{
	glColor3f(255.000, 255.0, 255.000);
	circle(0.55, 0.75, 0.18);
}

void Tree1()
{
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(7);
	glBegin(GL_LINES);
	glVertex2f(-0.05, -0.20);
	glVertex2f(-0.05, 0.00);
	glVertex2f(-0.07, 0.00);
	glVertex2f(-0.07, -0.20);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.18, 0.00);
	glVertex2f(-0.06, 0.24);
	glVertex2f(0.06, 0.00);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.18, 0.08);
	glVertex2f(-0.06, 0.32);
	glVertex2f(0.06, 0.08);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.18, 0.16);
	glVertex2f(-0.06, 0.40);
	glVertex2f(0.06, 0.16);
	glEnd();

}

void Tree2()
{
	glColor3f(0.38f, 0.19f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.05, -0.20);
	glVertex2f(-0.05, 0.00);
	glVertex2f(-0.07, 0.00);
	glVertex2f(-0.07, -0.20);
	glEnd();

	glColor3f(0.0f, 0.43f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.18, 0.00);
	glVertex2f(-0.06, 0.24);
	glVertex2f(0.06, 0.00);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.18, 0.08);
	glVertex2f(-0.06, 0.32);
	glVertex2f(0.06, 0.08);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.18, 0.16);
	glVertex2f(-0.06, 0.40);
	glVertex2f(0.06, 0.16);
	glEnd();
}

void Tree3()
{
	glColor3f(0.38f, 0.19f, 0.0f);
	glLineWidth(7);
	glBegin(GL_LINES);
	glVertex2f(0.92, 0.0);
	glVertex2f(0.92, 0.11);
	glEnd();

	glColor3f(0.0f, 0.43f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.98, 0.10);
	glVertex2f(0.92, 0.50);
	glVertex2f(0.86, 0.10);
	glEnd();
}

void Tree4()
{
	glColor3f(0.38f, 0.19f, 0.0f);
	glLineWidth(7);
	glBegin(GL_LINES);
	glVertex2f(0.74, 0.0);
	glVertex2f(0.74, 0.11);
	glEnd();

	glColor3f(0.0f, 0.43f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(0.80, 0.10);
	glVertex2f(0.74, 0.50);
	glVertex2f(0.68, 0.10);
	glEnd();
}
void house()
{
	// roof
	glColor3f(0.38f, 0.19f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.70, 0.10);
	glVertex2f(-0.66, 0.24);
	glVertex2f(-0.38, 0.24);
	glVertex2f(-0.34, 0.10);
	glEnd();

	// window 1
	glColor3f(0.0f, 0.31f, 0.31f);
	glBegin(GL_QUADS);
	glVertex2f(-0.64, 0.08);
	glVertex2f(-0.64, -0.04);
	glVertex2f(-0.58, -0.04);
	glVertex2f(-0.58, 0.08);
	glEnd();

	// door
	glColor3f(0.0f, 0.31f, 0.31f);
	glBegin(GL_QUADS);
	glVertex2f(-0.57, 0.07);
	glVertex2f(-0.57, -0.18);
	glVertex2f(-0.48, -0.18);
	glVertex2f(-0.48, 0.07);
	glEnd();

	// window 2
	glColor3f(0.0f, 0.31f, 0.31f);
	glBegin(GL_QUADS);
	glVertex2f(-0.47, 0.08);
	glVertex2f(-0.47, -0.04);
	glVertex2f(-0.40, -0.04);
	glVertex2f(-0.40, 0.08);
	glEnd();

	// wall
	glColor3f(0.7f, 0.14f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(-0.38, -0.18);
	glVertex2f(-0.38, 0.10);
	glVertex2f(-0.66, 0.10);
	glVertex2f(-0.66, -0.18);
	glEnd();
}



void Display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3d(1, 0, 0);


	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);

	Tree1();
	Tree2();
	Tree3();
	Tree4();
	house();
	hill();
	field();
    Sun();
    sky();
	road();
	glutSwapBuffers();
}

void update(int value)
{
	glutPostRedisplay();


	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1200, 700);

	glutCreateWindow("Group pyscripters : Smart Village ");
	myInit();

	glutDisplayFunc(Display);
	glutReshapeFunc(handleResize);



	glutTimerFunc(25, update, 0);
	glutMainLoop();
	return 0;
}
