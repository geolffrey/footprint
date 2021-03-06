#include "base_db.hpp"

#include <Wt/Dbo/backend/Postgres>

namespace wittyPlus {

std::unique_ptr<Wt::Dbo::SqlConnection> makeConnection(const std::string& db) {
    auto result = new Wt::Dbo::backend::Postgres(db);
    if (result->connection() == nullptr)
        throw std::runtime_error(std::string("Unable to connect to database: ") + db);
    return std::unique_ptr<Wt::Dbo::SqlConnection>(result);
}

}
