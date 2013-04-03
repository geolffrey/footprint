#ifndef WITTYPLUS_URLS_HPP
#define WITTYPLUS_URLS_HPP

#include <functional>
#include <string>

#include <Wt/WWidget>

namespace wittyPlus {

class Urls : Wt::WObject {
public:
    struct Impl;
    Impl* _impl;
public:
    Urls(Wt::WObject* parent);
    static Urls& instance();
    void register(const std::string& url, std::function<void(const std::string&)> callMe);
    void register(const std::string& url, std::function<void()> callMe);
    void register(const std::string& url, Wt::WWidget* widget);
};

} // namespace wittyPlus

#endif // WITTYPLUS_URLS_HPP
