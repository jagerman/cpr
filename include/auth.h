#ifndef CPR_AUTH_H
#define CPR_AUTH_H

#include <string>

namespace cpr {

    class Authentication {
      public:
        Authentication(const std::string& username, const std::string& password) :
            username_{username}, password_{password}, auth_string_{username_ + ":" + password_} {}

        const char* GetAuthString() const;

      private:
        std::string username_;
        std::string password_;
        std::string auth_string_;
    };

}

#endif