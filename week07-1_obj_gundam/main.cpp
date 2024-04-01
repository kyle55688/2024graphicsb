#include <GL/glut.h> ///¨Ï¥ÎGLUT¥~±¾
#include "glm.h"///使用glm程式碼
GLMmodel* pmodel = NULL;

void drawmodel(void)
{
    if (!pmodel) {
	pmodel = glmReadOBJ("gundam.obj");
	if (!pmodel) exit(0);
	glmUnitize(pmodel);
	glmFacetNormals(pmodel);
	glmVertexNormals(pmodel, 90.0);
    }

    glmDraw(pmodel, GLM_SMOOTH | GLM_MATERIAL);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    drawmodel();
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

     glutCreateWindow("week07-1_obj_gundam");

     glutDisplayFunc(display);

      glutMainLoop();
}
