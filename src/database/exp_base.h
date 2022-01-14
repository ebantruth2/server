// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_EXP_BASE_H
#define XIDB_EXP_BASE_H

#include <sqlpp11/char_sequence.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/table.h>

namespace xidb
{
    namespace ExpBase_
    {
        struct Level
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "level";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  level;
                    T& operator()()
                    {
                        return level;
                    }
                    const T& operator()() const
                    {
                        return level;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Exp
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "exp";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  exp;
                    T& operator()()
                    {
                        return exp;
                    }
                    const T& operator()() const
                    {
                        return exp;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::integer_unsigned>;
        };
    } // namespace ExpBase_

    struct ExpBase : sqlpp::table_t<ExpBase,
                                    ExpBase_::Level,
                                    ExpBase_::Exp>
    {
        struct _alias_t
        {
            static constexpr const char _literal[] = "exp_base";
            using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
            template <typename T>
            struct _member_t
            {
                T  expBase;
                T& operator()()
                {
                    return expBase;
                }
                const T& operator()() const
                {
                    return expBase;
                }
            };
        };
    };
} // namespace xidb
#endif
