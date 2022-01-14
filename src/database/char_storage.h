// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables xidb.sql ../src/database xidb
#ifndef XIDB_CHAR_STORAGE_H
#define XIDB_CHAR_STORAGE_H

#include <sqlpp11/char_sequence.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/table.h>

namespace xidb
{
    namespace CharStorage_
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
        struct Inventory
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "inventory";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  inventory;
                    T& operator()()
                    {
                        return inventory;
                    }
                    const T& operator()() const
                    {
                        return inventory;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Safe
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "safe";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  safe;
                    T& operator()()
                    {
                        return safe;
                    }
                    const T& operator()() const
                    {
                        return safe;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Locker
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "locker";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  locker;
                    T& operator()()
                    {
                        return locker;
                    }
                    const T& operator()() const
                    {
                        return locker;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Satchel
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "satchel";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  satchel;
                    T& operator()()
                    {
                        return satchel;
                    }
                    const T& operator()() const
                    {
                        return satchel;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Sack
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "sack";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  sack;
                    T& operator()()
                    {
                        return sack;
                    }
                    const T& operator()() const
                    {
                        return sack;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Case
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "case";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T case;
                    T& operator()()
                    {
                        return case;
                    }
                    const T& operator()() const
                    {
                        return case;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Wardrobe
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "wardrobe";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  wardrobe;
                    T& operator()()
                    {
                        return wardrobe;
                    }
                    const T& operator()() const
                    {
                        return wardrobe;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Wardrobe2
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "wardrobe2";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  wardrobe2;
                    T& operator()()
                    {
                        return wardrobe2;
                    }
                    const T& operator()() const
                    {
                        return wardrobe2;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Wardrobe3
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "wardrobe3";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  wardrobe3;
                    T& operator()()
                    {
                        return wardrobe3;
                    }
                    const T& operator()() const
                    {
                        return wardrobe3;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
        struct Wardrobe4
        {
            struct _alias_t
            {
                static constexpr const char _literal[] = "wardrobe4";
                using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
                template <typename T>
                struct _member_t
                {
                    T  wardrobe4;
                    T& operator()()
                    {
                        return wardrobe4;
                    }
                    const T& operator()() const
                    {
                        return wardrobe4;
                    }
                };
            };
            using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
        };
    } // namespace CharStorage_

    struct CharStorage : sqlpp::table_t<CharStorage,
                                        CharStorage_::Charid,
                                        CharStorage_::Inventory,
                                        CharStorage_::Safe,
                                        CharStorage_::Locker,
                                        CharStorage_::Satchel,
                                        CharStorage_::Sack,
                                        CharStorage_::Case,
                                        CharStorage_::Wardrobe,
                                        CharStorage_::Wardrobe2,
                                        CharStorage_::Wardrobe3,
                                        CharStorage_::Wardrobe4>
    {
        struct _alias_t
        {
            static constexpr const char _literal[] = "char_storage";
            using _name_t                          = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
            template <typename T>
            struct _member_t
            {
                T  charStorage;
                T& operator()()
                {
                    return charStorage;
                }
                const T& operator()() const
                {
                    return charStorage;
                }
            };
        };
    };
} // namespace xidb
#endif
