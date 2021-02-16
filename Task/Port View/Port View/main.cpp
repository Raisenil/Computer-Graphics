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

	glBegin(GL_QUADS);
	glColor3ub(51, 102, 255);
	glVertex2f(-1.0f, -0.6f);
	glVertex2f(1.0f, -0.6f);

	glVertex2f(1.0f, 0.2f);
	glVertex2f(-1.0f, 0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(204, 153, 0);
	glVertex2f(-1.0f, 0.2f);
	glVertex2f(1.0f, 0.2f);

	glVertex2f(1.0f, 0.25f);
	glVertex2f(-1.0f, 0.25f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.7f, -0.3f);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(-0.1f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.4f, -0.2f);

	glVertex2f(0.7f, -0.2f);
	glVertex2f(0.7f, -0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(120, 120, 51);
	glVertex2f(0.0f, -0.2f);
	glVertex2f(0.3f, -0.2f);

	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.0f, -0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 102, 102);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.8f, -0.9f);

	glVertex2f(-0.5f, -0.9f);
	glVertex2f(-0.5f, -0.8f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(128, 128, 128);

	glVertex2f(-0.4f, -0.4f);
	glVertex2f(-0.5f, -0.4f);
	glVertex2f(-0.7f, -0.5f);
	glVertex2f(-0.7f, -0.8f);
	glVertex2f(-0.6f, -0.8f);
	glVertex2f(-0.7f, -0.5f);
	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.4f, -0.4f);
	glVertex2f(-0.4f, -0.7f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 51, 0);
	glVertex2f(-0.3f, -0.7f);
	glVertex2f(-0.5f, -0.7f);

	glVertex2f(-0.5f, -0.8f);
	glVertex2f(-0.3f, -0.8f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 128, 0);
	glVertex2f(-0.2f, -0.7f);
	glVertex2f(-0.2f, -0.9f);

	glVertex2f(0.1f, -0.9f);
	glVertex2f(0.1f, -0.7f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128, 26, 0);
	glVertex2f(0.1f, -0.7f);
	glVertex2f(0.1f, -0.9f);

	glVertex2f(0.3f, -0.9f);
	glVertex2f(0.3f, -0.7f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(-0.9f, 0.25f);
	glVertex2f(-0.7f, 0.25f);

	glVertex2f(-0.7f, 0.6f);
	glVertex2f(-0.9f, 0.6f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(-0.7f, 0.25f);
	glVertex2f(-0.4f, 0.25f);

	glVertex2f(-0.4f, 0.7f);
	glVertex2f(-0.7f, 0.7f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(-0.9f, 0.25f);
	glVertex2f(-0.7f, 0.25f);

	glVertex2f(-0.7f, 0.6f);
	glVertex2f(-0.9f, 0.6f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(-0.4f, 0.25f);
	glVertex2f(-0.1f, 0.25f);

	glVertex2f(-0.1f, 0.6f);
	glVertex2f(-0.4f, 0.6f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(140, 140, 140);
	glVertex2f(0.1f, 0.25f);
	glVertex2f(0.9f, 0.25f);

	glVertex2f(0.9f, 0.5f);
	glVertex2f(0.1f, 0.5f);
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


	glTranslatef(-0.8,0.2f,0.0f);
	//glScalef(2,2,0);
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.7f, -0.3f);

	glVertex2f(0.8f, -0.2f);
	glVertex2f(-0.1f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(0.4f, -0.1f);
	glVertex2f(0.4f, -0.2f);

	glVertex2f(0.7f, -0.2f);
	glVertex2f(0.7f, -0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(120, 120, 51);
	glVertex2f(0.0f, -0.2f);
	glVertex2f(0.3f, -0.2f);

	glVertex2f(0.3f, -0.1f);
	glVertex2f(0.0f, -0.1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(102, 102, 102);
	glVertex2f(-0.8f, -0.8f);
	glVertex2f(-0.8f, -0.9f);

	glVertex2f(-0.5f, -0.9f);
	glVertex2f(-0.5f, -0.8f);
	glEnd();


	glTranslatef(+1.4f,-0.07f,0.0f);
	//glScalef(0.2,0.2,0);
	glBegin(GL_QUADS);
	glColor3ub(255, 128, 0);
	glVertex2f(-0.2f, -0.7f);
	glVertex2f(-0.2f, -0.9f);

	glVertex2f(0.1f, -0.9f);
	glVertex2f(0.1f, -0.7f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(128, 26, 0);
	glVertex2f(0.1f, -0.7f);
	glVertex2f(0.1f, -0.9f);

	glVertex2f(0.3f, -0.9f);
	glVertex2f(0.3f, -0.7f);
	glEnd();

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
