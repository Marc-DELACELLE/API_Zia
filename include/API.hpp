#ifndef API_H
#define API_H

#include <string>
#include "IClient.hpp"
#include "IModule.hpp"

class APIServer {
public:
    ~APIServer();
    APIServer();

    APIServer(APIServer&&) noexcept;
    APIServer(const APIServer&) = delete;
    APIServer& operator=(APIServer&&) noexcept;
    APIServer& operator=(const APIServer&) = delete;

    void addClient(const std::string& name);
    void supprClient(const std::string& name);
    void callAllClient();
    void callClient(const std::string& filename);
    void showClient() const;

    void addModule(const std::string& filepath);
    void supprModule(const std::string& filename);
    void callAllModule();
    void callModule(const std::string& filename);
    void showModule() const;
    void showModule();
private:
    std::vector<IClient> m_Clients;
    std::vector<IModule> m_Modules;
}

#endif //API_H
