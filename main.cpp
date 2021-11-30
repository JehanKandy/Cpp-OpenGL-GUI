#include <GL/gl.h>
#include <GL/glut.h>

void display_callback();
void reshap_callback(int, int);

void init()
{
    glClearColor(0.0,0.0,1.0,0.0);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
}
int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(500,500);
    glutCreateWindow("My Window");
    glutDisplayFunc(display_callback);
    glutReshapeFunc(reshap_callback);
    glutMainLoop();
    return 0;
}
void display_callback()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}
void reshap_callback(int w, int h)
{
    glViewport(0,0,(GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,40.0,0.0,40.0,-1.0,1.0);
    glMatrixMode(GL_MODELVIEW);
}
