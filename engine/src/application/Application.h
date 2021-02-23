//
// Created by octo on 22/02/2021.
//

#ifndef EMPIRE_APPLICATION_H
#define EMPIRE_APPLICATION_H

#include <memory>
#include <window/Window.h>

namespace Empire {

    class Application {
    public:
        Application();

        void init();

        void run();

        void cleanup();

    protected:
        inline Window* getWindow() {return window.get();}

    private:
        std::unique_ptr<Window> window;

    };
}


#endif //EMPIRE_APPLICATION_H
