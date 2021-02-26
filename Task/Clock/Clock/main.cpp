#include <windows.h>
#include <GL/glut.h>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI   3.14159265358979323846

GLfloat i1 = 0.0f;
GLfloat i2 = 0.0f;
GLfloat i3 = 0.0f;

void Idle()
{
    glutPostRedisplay();
}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2.3);

    GLfloat x1=0.0f; GLfloat y1=0.0f; GLfloat radius1 =1.0f;
	int i;
	int triangleAmount = 500;

	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 0, 0);
		glVertex2f(x1, y1);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi1 / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi1 / triangleAmount))
			);
		}
	glEnd();


	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =0.9f;
	int lineAmount = 500;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 255, 255);
		for(i = 0; i<=lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(0.9f, 0.0f);
	glVertex2f(0.8f, 0.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(0.0f, 0.9f);
	glVertex2f(0.0f, 0.8f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.9f, 0.0f);
	glVertex2f(-0.8f, 0.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(0.0f, -0.9f);
	glVertex2f(0.0f, -0.8f);
	glEnd();



	glLoadIdentity();

	glPushMatrix();
    glRotatef(i1,0.0,0.0,1.0);

    glBegin(GL_LINES);
    glColor3ub(255, 51, 0);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f( 0.8f, 0.0f);
    glEnd();

    glPopMatrix();

    i1-=0.1f;
    glLoadIdentity();


    glPushMatrix();
    glRotatef(i2,0.0,0.0,1.0);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f( 0.6f, 0.0f);
    glEnd();

    glPopMatrix();

    i2-=0.001f;
    glLoadIdentity();

    glPushMatrix();
    glRotatef(i3,0.0,0.0,1.0);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.1f, 0.0f);
    glVertex2f( 0.5f, 0.0f);
    glEnd();

    glPopMatrix();

    i3-=0.0001f;
    glLoadIdentity();




	GLfloat x2=0.0f; GLfloat y2=0.0f; GLfloat radius2 =0.02f;
	int triangleAmount1 = 500;

	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 255, 255);
		glVertex2f(x2, y2);
		for(i = 0; i <=triangleAmount;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi1 / triangleAmount1)),
			    y2 + (radius2 * sin(i * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Clock");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutIdleFunc(Idle);
	glutMainLoop();
	return 0;
}
