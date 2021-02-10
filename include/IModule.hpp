#ifndef API_IMODULE_H
#define API_IMODULE_H

#include <string>

class IModule {
public:
    virtual ~IModule() {};
    virtual IModule() {};

    virtual IModule(IModule&&) noexcept = 0;
    IModule(const IModule&) = delete;
    virtual IModule& operator=(IModule&&) noexcept = 0;
    IModule& operator=(const IModule&) = delete;

    virtual void getConfig(const std::string &nodepath) = 0;
    virtual void run() = 0;
    virtual void show() const = 0;
    virtual void show() = 0;
}

extern "C" std::unique_ptr<IModule> load_module(std::string &name);

#endif //API_IMODULE_H
