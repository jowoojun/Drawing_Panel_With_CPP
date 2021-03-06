#include "stdafx.h"
#include "Window.h"
#include <fstream>

// Initialize variables
Window::Window() :
  m_text(""), m_x(0), m_y(0), m_xsize(0), m_ysize(0) {
  
}

// Initialize variables
Window::Window(int x, int y, int sx, int sy) :  
  m_text(""), m_x(x), m_y(y), m_xsize(sx), m_ysize(sy) {
  
}

// Initialize variables
Window::Window(string s, int x, int y, int sx, int sy) :
  m_text(s), m_x(x), m_y(y), m_xsize(sx), m_ysize(sy) {
}

// Whether there is click point (x,y) in this Menu or not
// If it's in there, return true. If not, return false
bool Window::isInside(int x, int y) {
  return (m_x <= x && x < m_x + m_xsize && m_y <= y && y < m_y + m_ysize);
}

// set container that they are contained
void Window::setContainer(Container * con)
{
  m_container = con;
}

// set Window Size
void Window::setSize(int sx, int sy)
{
  m_xsize = sx;
  m_ysize = sy;
}

// set Frame
void Window::setFrame(Frame *f) {
  m_frame = f;
}

// get m_text
string Window::getTitle() {
  return m_text;
}

// When mouse is released
void Window::onMouseReleased(int x, int y) {

}
