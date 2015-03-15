#include "shapes.h"
#include "glut.h"  
#include <gl/gl.h>

void timer_func(int data)
{
	glutTimerFunc(0, timer_func, data);
	glutPostRedisplay();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
	glLoadIdentity();									

	Rect r(Point(0, 0), Point(100, 100), Color(YELLOW));
	Polygon p(Color(RED));
	p.push_back(r);
	p.push_back(Rect(Point(100, 100), Point(200, 200)));
	Sprite s(500, 250);	
	s.push_back(p);
	s.push_back(Rect(Point(200, 200), Point(300, 300), Color(BLUE)));
	s.draw();
	s.mirrorX();	
	s.draw();
	glutSwapBuffers();
}

void init()
{
	glClearColor(1.0, 1.0, 1.0, 0);		
	glDisable(GL_DEPTH_TEST);			
	glMatrixMode(GL_PROJECTION);		
	glLoadIdentity();					
	gluOrtho2D(0.0, (double)1280, 0.0, (double)720);
	glMatrixMode(GL_MODELVIEW);			
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);							
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);	
	glutInitWindowSize(1280, 720);
	glutCreateWindow("Shapes");				
	init();											
	glutDisplayFunc(display);						
	glutTimerFunc(0, timer_func, 1);
	glutMainLoop();								
	return 0;
}





