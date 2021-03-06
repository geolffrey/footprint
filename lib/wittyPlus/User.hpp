#pragma once

#include <Wt/Dbo/Dbo>
#include <Wt/Auth/Dbo/AuthInfo>

namespace dbo = Wt::Dbo;

namespace wittyPlus {
namespace db {

class User;
typedef Wt::Auth::Dbo::AuthInfo<User> AuthInfo;

class User : public dbo::Dbo<User> {
public:
    template<class Action>
    void persist(Action& a)
    {
    }
};

}
}
