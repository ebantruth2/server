// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_MERIT_H
#define XIDB_CHAR_MERIT_H

#include <sqlpp11/char_sequence.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/table.h>

namespace xidb
{
    namespace CharMerit_
    {
        struct Charid
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "charid";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  charid;
                    T& operator()()
                    {
                        return charid;
                    }
                    const T& operator()() const
                    {
                        return charid;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::integer_unsigned, sqlpp::tag::can_be_null>;
        };
        struct Meritid
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "meritid";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  meritid;
                    T& operator()()
                    {
                        return meritid;
                    }
                    const T& operator()() const
                    {
                        return meritid;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
        };
        struct Upgrades
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "upgrades";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  upgrades;
                    T& operator()()
                    {
                        return upgrades;
                    }
                    const T& operator()() const
                    {
                        return upgrades;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
        };
    } // namespace CharMerit_

    struct CharMerit : sqlpp::table_t<CharMerit,
                                      CharMerit_::Charid,
                                      CharMerit_::Meritid,
                                      CharMerit_::Upgrades>
    {
        struct _alias_t
        {
            static constexpr const char _literal[] = "char_merit";
            using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
            template <typename T>
            struct _member_t
            {
                T  charMerit;
                T& operator()()
                {
                    return charMerit;
                }
                const T& operator()() const
                {
                    return charMerit;
                }
            };
        };
    };
} // namespace xidb
#endif
