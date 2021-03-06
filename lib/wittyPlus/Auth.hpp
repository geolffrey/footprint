/// Interface to everything auth related
#pragma once

#include <Wt/WObject>
#include <Wt/WApplication>
#include <Wt/Auth/AuthService>
#include <Wt/Auth/AbstractUserDatabase>
#include <Wt/Auth/PasswordService>
#include <Wt/Auth/Login>

namespace wittyPlus {

class Auth : public Wt::WObject {
private:
    class Impl;
    Impl* _impl;
public:
    Auth(Wt::WApplication* app);
    const Wt::Auth::AuthService* authService();
    const Wt::Auth::PasswordService* passwordService();
    Wt::Auth::AbstractUserDatabase* users();
    Wt::Auth::Login* login();
    static Auth* instance();
};

}
