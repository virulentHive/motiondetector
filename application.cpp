#include "application.h"

Application::Application(int &argc, char **argv) :
    QCoreApplication(argc, argv),
    m_manager(new Manager(this))
{
}
