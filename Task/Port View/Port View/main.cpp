#include <windows.h>
#include <GL/glut.h>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI   3.14159265358979323846

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.5);


	glBegin(GL_QUADS);
	glColor3ub(153, 204, 255);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, -0.6f);

	glVertex2f(1.0f, -0.6f);
	glVertex2f(1.0f, 1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 102, 51);
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(-1.0f, -1.0f);

	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, -0.6f);
	glEnd();


	GLfloat x1=0.6f; GLfloat y1=0.75f; GLfloat radius1 =.1f;
	int triangleAmount = 20;

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 204, 0);
		glVertex2f(x1, y1);
		for(int i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
			);
		}
	glEnd();

	/*glBegin(GL_QUADS);
	glColor3ub(0, 0, 255);
	glVertex2f(0.0f, 0.0f);
	glEnd();*/


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(500, 500);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
