#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HelloWorldAApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void HelloWorldAApp::setup()
{
}

void HelloWorldAApp::mouseDown( MouseEvent event )
{
}

void HelloWorldAApp::update()
{
}

void HelloWorldAApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 1.0, 0, 0 ) ); 
}

CINDER_APP_BASIC( HelloWorldAApp, RendererGl )
