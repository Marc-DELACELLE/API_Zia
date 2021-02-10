#ifndef API_ICLIENT_H
#define API_ICLIENT_H

#include <string>

class IClient {
public:
    virtual ~IClient() {};
    virtual IClient() {};

    virtual IClient(IClient&&) noexcept = 0;
    IClient(const IClient&) = delete;
    virtual IClient& operator=(IClient&&) noexcept = 0;
    IClient& operator=(const IClient&) = delete;

    virtual void run() = 0;
    virtual void show() const = 0;
    virtual void show() = 0;
}

extern "C" std::unique_ptr<IClient> load_client(std::string &name);

#endif //API_ICLIENT_H
